#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_EventId.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19FCBC90)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19FCBD50)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19FCB890)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FCB880)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_EventHandlerDelegate_TypeDefinitionIndex = 19158;

	class HoYoPassSDK_EventHandlerDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId evt, ::Il2CppArray<::System::Byte>* args, ::System::UInt64 len, ::System::IntPtr context)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId, ::Il2CppArray<::System::Byte>*, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE_INVOKE_OFFSET))(this, evt, args, len, context);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId evt, ::Il2CppArray<::System::Byte>* args, ::System::UInt64 len, ::System::IntPtr context, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId, ::Il2CppArray<::System::Byte>*, ::System::UInt64, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE_BEGININVOKE_OFFSET))(this, evt, args, len, context, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
