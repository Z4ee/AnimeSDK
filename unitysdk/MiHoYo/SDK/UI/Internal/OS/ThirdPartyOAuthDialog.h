#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/ThirdpartyMethod.h"
#include "unitysdk/MiHoYo/SDK/UI/OS/ThirdpartyOAuthState.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG_GET_ONCANCELBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B6BF3C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG_GET_ONRETRYBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B6BF3E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1B6BF400)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG_SET_ONCANCELBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B6BF3D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG_SET_ONRETRYBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B6BF3F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1B6BF4E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x1B6BF640)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C0A40)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int ThirdPartyOAuthDialog_TypeDefinitionIndex = 8377;

	class ThirdPartyOAuthDialog : public ::System::Object
	{
	public:
		::System::Action* _OnCancelBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnRetryBtnClicked_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnCancelBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG_GET_ONCANCELBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCancelBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG_SET_ONCANCELBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnRetryBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG_GET_ONRETRYBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnRetryBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG_SET_ONRETRYBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG_HIDE_OFFSET))(this);
		}

		::System::Void Show(::MiHoYo::SDK::PC::OS::ThirdpartyMethod a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::ThirdpartyMethod))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG_SHOW_OFFSET))(this, a1);
		}

		::System::Void UpdateState(::MiHoYo::SDK::UI::OS::ThirdpartyOAuthState a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::ThirdpartyOAuthState))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHDIALOG_UPDATESTATE_OFFSET))(this, a1);
		}
	};
}
