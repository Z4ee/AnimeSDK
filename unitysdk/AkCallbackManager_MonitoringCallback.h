#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkMonitorErrorCode.h"
#include "unitysdk/AkMonitorErrorLevel.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define AKCALLBACKMANAGER_MONITORINGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B95C260)
#define AKCALLBACKMANAGER_MONITORINGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B95C340)
#define AKCALLBACKMANAGER_MONITORINGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B95AFD0)
#define AKCALLBACKMANAGER_MONITORINGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B95C1F0)

inline static constexpr unsigned int AkCallbackManager_MonitoringCallback_TypeDefinitionIndex = 42021;

class AkCallbackManager_MonitoringCallback : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_MONITORINGCALLBACK__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::AkMonitorErrorCode a1, ::AkMonitorErrorLevel a2, ::System::UInt32 a3, ::System::UInt64 a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::AkMonitorErrorCode, ::AkMonitorErrorLevel, ::System::UInt32, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_MONITORINGCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::IAsyncResult* BeginInvoke(::AkMonitorErrorCode a1, ::AkMonitorErrorLevel a2, ::System::UInt32 a3, ::System::UInt64 a4, ::System::String* a5, ::System::AsyncCallback* a6, ::System::Object* a7)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::AkMonitorErrorCode, ::AkMonitorErrorLevel, ::System::UInt32, ::System::UInt64, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_MONITORINGCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_MONITORINGCALLBACK_ENDINVOKE_OFFSET))(this, a1);
	}
};
