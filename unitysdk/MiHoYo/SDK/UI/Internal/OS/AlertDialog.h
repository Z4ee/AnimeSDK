#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1767A480)
#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_GET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1767A4A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1767A560)
#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1767A490)
#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_SET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1767A4B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1767A4C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1767A5C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG__SHOW_B__8_0_OFFSET UNITYSDK_OFFSET(0x1767A5D0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AlertDialog_TypeDefinitionIndex = 7463;

	class AlertDialog : public ::System::Object
	{
	public:
		::System::Action* _OnConfirmBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnConfirmBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_GET_ONCONFIRMBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnConfirmBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_SET_ONCONFIRMBTNCLICKED_OFFSET))(this, value);
		}

		::System::Void Show(::System::String* message, ::System::String* btnText, ::System::Boolean closeEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_SHOW_OFFSET))(this, message, btnText, closeEnable);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_HIDE_OFFSET))(this);
		}

		::System::Void _Show_b__8_0(::MiHoYo::SDK::UI::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG__SHOW_B__8_0_OFFSET))(this, result);
		}
	};
}
