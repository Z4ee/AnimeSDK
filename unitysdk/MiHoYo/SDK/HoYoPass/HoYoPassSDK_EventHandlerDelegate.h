#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_EventId.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B954390)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B954450)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B954360)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9542F0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_EventHandlerDelegate_TypeDefinitionIndex = 8252;

	class HoYoPassSDK_EventHandlerDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt64 a3, ::System::IntPtr a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId, ::Il2CppArray<::System::Byte>*, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId a1, ::Il2CppArray<::System::Byte>* a2, ::System::UInt64 a3, ::System::IntPtr a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_EventId, ::Il2CppArray<::System::Byte>*, ::System::UInt64, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_EVENTHANDLERDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
