#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BAF8770)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_GET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BAF8790)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1BAF8810)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BAF8780)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_SET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BAF87A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1BAF87B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF8880)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int BindingSuccessDialog_TypeDefinitionIndex = 8378;

	class BindingSuccessDialog : public ::System::Object
	{
	public:
		::System::Action* _OnConfirmBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnConfirmBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_GET_ONCONFIRMBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnConfirmBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_SET_ONCONFIRMBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Void Show(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_SHOW_OFFSET))(this, a1, a2);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_HIDE_OFFSET))(this);
		}
	};
}
