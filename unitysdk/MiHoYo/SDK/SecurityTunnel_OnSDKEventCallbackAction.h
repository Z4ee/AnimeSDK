#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB2AB430)
#define MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB2AB4B0)
#define MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xB2AB410)
#define MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB2AB3A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_OnSDKEventCallbackAction_TypeDefinitionIndex = 46856;

	class SecurityTunnel_OnSDKEventCallbackAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
