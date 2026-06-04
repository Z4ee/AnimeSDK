#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ConfirmWithJoypad_ConfirmResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1820EBD0)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1820EC60)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1820E900)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1820EB60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfirmWithJoypad_OnConfirmDelegate_TypeDefinitionIndex = 7944;

	class ConfirmWithJoypad_OnConfirmDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::ConfirmWithJoypad_ConfirmResult a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConfirmWithJoypad_ConfirmResult, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ConfirmWithJoypad_ConfirmResult a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ConfirmWithJoypad_ConfirmResult, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
