#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C004180)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_GET_ONSENDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C004160)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1C0042C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C004190)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_SET_ONSENDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C004170)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1C0041C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1C0041A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C004350)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG__SHOW_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C004360)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG__SHOW_B__9_1_OFFSET UNITYSDK_OFFSET(0x1C004380)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AgeGatePayParentDenyDialog_TypeDefinitionIndex = 8416;

	class AgeGatePayParentDenyDialog : public ::System::Object
	{
	public:
		::System::Action* _OnSendBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnSendBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_GET_ONSENDBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnSendBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_SET_ONSENDBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Void StartCountDown(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_STARTCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void Show(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_SHOW_OFFSET))(this, a1);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_HIDE_OFFSET))(this);
		}

		::System::Void _Show_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG__SHOW_B__9_0_OFFSET))(this);
		}

		::System::Void _Show_b__9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG__SHOW_B__9_1_OFFSET))(this);
		}
	};
}
