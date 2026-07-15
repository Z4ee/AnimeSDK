#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Confirm_ConfirmResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_UI_CONFIRM_ONCONFIRMDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B6A9100)
#define MIHOYO_SDK_UI_CONFIRM_ONCONFIRMDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B6A9170)
#define MIHOYO_SDK_UI_CONFIRM_ONCONFIRMDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B6A8CD0)
#define MIHOYO_SDK_UI_CONFIRM_ONCONFIRMDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6A9090)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Confirm_OnConfirmDelegate_TypeDefinitionIndex = 8339;

	class Confirm_OnConfirmDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_ONCONFIRMDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::UI::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_ONCONFIRMDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::UI::Confirm_ConfirmResult a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::UI::Confirm_ConfirmResult, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_ONCONFIRMDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_ONCONFIRMDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
