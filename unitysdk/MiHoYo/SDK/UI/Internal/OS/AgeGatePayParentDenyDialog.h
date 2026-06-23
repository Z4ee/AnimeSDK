#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BA96CE0)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_GET_ONSENDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BA96CC0)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1BA96DF0)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BA96CF0)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_SET_ONSENDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BA96CD0)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1BA96D20)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BA96D00)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA96E80)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG__SHOW_B__9_0_OFFSET UNITYSDK_OFFSET(0x1BA96E90)
#define MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG__SHOW_B__9_1_OFFSET UNITYSDK_OFFSET(0x1BA96EA0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AgeGatePayParentDenyDialog_TypeDefinitionIndex = 20178;

	class AgeGatePayParentDenyDialog : public ::System::Object
	{
	public:
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnSendBtnClicked_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnSendBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_GET_ONSENDBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnSendBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_SET_ONSENDBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, value);
		}

		::System::Void StartCountDown(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_STARTCOUNTDOWN_OFFSET))(this, time);
		}

		::System::Void Show(::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_AGEGATEPAYPARENTDENYDIALOG_SHOW_OFFSET))(this, email);
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
