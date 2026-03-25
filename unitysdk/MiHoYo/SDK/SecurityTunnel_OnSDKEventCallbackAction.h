#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8591F10)
#define MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8591F90)
#define MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x8591B80)
#define MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x8591B60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_OnSDKEventCallbackAction_TypeDefinitionIndex = 37160;

	class SecurityTunnel_OnSDKEventCallbackAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 evt, ::Il2CppArray<::System::Byte>* bytes, ::System::UInt32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION_INVOKE_OFFSET))(this, evt, bytes, length);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 evt, ::Il2CppArray<::System::Byte>* bytes, ::System::UInt32 length, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION_BEGININVOKE_OFFSET))(this, evt, bytes, length, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_ONSDKEVENTCALLBACKACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
