#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD62B00)
#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_GET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD62B20)
#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1CD62C00)
#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD62B10)
#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_SET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD62B30)
#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1CD62B40)
#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD62C60)
#define MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG__SHOW_B__8_0_OFFSET UNITYSDK_OFFSET(0x1CD62C70)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AlertDialog_TypeDefinitionIndex = 8399;

	class AlertDialog : public ::System::Object
	{
	public:
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnConfirmBtnClicked_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnConfirmBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_GET_ONCONFIRMBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnConfirmBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_SET_ONCONFIRMBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Void Show(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_SHOW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG_HIDE_OFFSET))(this);
		}

		::System::Void _Show_b__8_0(::MiHoYo::SDK::UI::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ALERTDIALOG__SHOW_B__8_0_OFFSET))(this, a1);
		}
	};
}
