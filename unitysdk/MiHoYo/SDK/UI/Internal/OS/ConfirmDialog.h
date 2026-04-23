#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Confirm_ConfirmResult.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG_GET_ONCANCELBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1767A8E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG_GET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1767A900)
#define MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1767A9C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG_SET_ONCANCELBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1767A8F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG_SET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1767A910)
#define MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1767A920)
#define MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1767AA20)
#define MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG__SHOW_B__8_0_OFFSET UNITYSDK_OFFSET(0x1767AA30)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int ConfirmDialog_TypeDefinitionIndex = 7464;

	class ConfirmDialog : public ::System::Object
	{
	public:
		::System::Action* _OnCancelBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnConfirmBtnClicked_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnCancelBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG_GET_ONCANCELBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCancelBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG_SET_ONCANCELBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnConfirmBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG_GET_ONCONFIRMBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnConfirmBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG_SET_ONCONFIRMBTNCLICKED_OFFSET))(this, value);
		}

		::System::Void Show(::System::String* hintMessage, ::System::String* confirmMessage, ::System::String* cancelMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG_SHOW_OFFSET))(this, hintMessage, confirmMessage, cancelMessage);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG_HIDE_OFFSET))(this);
		}

		::System::Void _Show_b__8_0(::MiHoYo::SDK::UI::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CONFIRMDIALOG__SHOW_B__8_0_OFFSET))(this, result);
		}
	};
}
