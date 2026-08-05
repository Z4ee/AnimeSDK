#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BDFCED0)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_GET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BDFCEF0)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1BDFCF70)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BDFCEE0)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_SET_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BDFCF00)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1BDFCF10)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDFCFE0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int BindingSuccessDialog_TypeDefinitionIndex = 20531;

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

		::System::Void set_OnCloseBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnConfirmBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_GET_ONCONFIRMBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnConfirmBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_SET_ONCONFIRMBTNCLICKED_OFFSET))(this, value);
		}

		::System::Void Show(::System::String* channelAccount, ::System::String* hoyoAccount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_SHOW_OFFSET))(this, channelAccount, hoyoAccount);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGSUCCESSDIALOG_HIDE_OFFSET))(this);
		}
	};
}
