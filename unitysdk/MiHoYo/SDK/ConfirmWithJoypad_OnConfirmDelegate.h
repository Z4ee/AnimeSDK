#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ConfirmWithJoypad_ConfirmResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1740B930)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1740B9C0)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1740B350)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1740B910)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfirmWithJoypad_OnConfirmDelegate_TypeDefinitionIndex = 7041;

	class ConfirmWithJoypad_OnConfirmDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::ConfirmWithJoypad_ConfirmResult result, ::System::Boolean isJoypadSignal)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConfirmWithJoypad_ConfirmResult, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE_INVOKE_OFFSET))(this, result, isJoypadSignal);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ConfirmWithJoypad_ConfirmResult result, ::System::Boolean isJoypadSignal, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ConfirmWithJoypad_ConfirmResult, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE_BEGININVOKE_OFFSET))(this, result, isJoypadSignal, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_ONCONFIRMDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
