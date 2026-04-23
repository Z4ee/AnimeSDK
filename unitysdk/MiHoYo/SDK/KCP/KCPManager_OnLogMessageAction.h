#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_KCP_KCPMANAGER_ONLOGMESSAGEACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8D26EB0)
#define MIHOYO_SDK_KCP_KCPMANAGER_ONLOGMESSAGEACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8D26EE0)
#define MIHOYO_SDK_KCP_KCPMANAGER_ONLOGMESSAGEACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x8D252B0)
#define MIHOYO_SDK_KCP_KCPMANAGER_ONLOGMESSAGEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x8D26E90)

namespace MiHoYo::SDK::KCP
{
	inline static constexpr unsigned int KCPManager_OnLogMessageAction_TypeDefinitionIndex = 43252;

	class KCPManager_OnLogMessageAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONLOGMESSAGEACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONLOGMESSAGEACTION_INVOKE_OFFSET))(this, message);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONLOGMESSAGEACTION_BEGININVOKE_OFFSET))(this, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER_ONLOGMESSAGEACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
