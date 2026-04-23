#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkMonitorErrorCode.h"
#include "unitysdk/AkMonitorErrorLevel.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define AKCALLBACKMANAGER_MONITORINGCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A5D8A60)
#define AKCALLBACKMANAGER_MONITORINGCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A5D8B40)
#define AKCALLBACKMANAGER_MONITORINGCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A5D6FA0)
#define AKCALLBACKMANAGER_MONITORINGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D8A40)

inline static constexpr unsigned int AkCallbackManager_MonitoringCallback_TypeDefinitionIndex = 40379;

class AkCallbackManager_MonitoringCallback : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_MONITORINGCALLBACK__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke(::AkMonitorErrorCode in_errorCode, ::AkMonitorErrorLevel in_errorLevel, ::System::UInt32 in_playingID, ::System::UInt64 in_gameObjID, ::System::String* in_msg)
	{
		return ((::System::Void(*)(::PVOID, ::AkMonitorErrorCode, ::AkMonitorErrorLevel, ::System::UInt32, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_MONITORINGCALLBACK_INVOKE_OFFSET))(this, in_errorCode, in_errorLevel, in_playingID, in_gameObjID, in_msg);
	}

	::System::IAsyncResult* BeginInvoke(::AkMonitorErrorCode in_errorCode, ::AkMonitorErrorLevel in_errorLevel, ::System::UInt32 in_playingID, ::System::UInt64 in_gameObjID, ::System::String* in_msg, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::AkMonitorErrorCode, ::AkMonitorErrorLevel, ::System::UInt32, ::System::UInt64, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_MONITORINGCALLBACK_BEGININVOKE_OFFSET))(this, in_errorCode, in_errorLevel, in_playingID, in_gameObjID, in_msg, callback, object);
	}

	::System::Void EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_MONITORINGCALLBACK_ENDINVOKE_OFFSET))(this, result);
	}
};
