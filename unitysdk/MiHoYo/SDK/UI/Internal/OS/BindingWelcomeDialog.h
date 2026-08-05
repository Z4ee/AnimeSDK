#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_GET_GETUSERNICKNAME_OFFSET UNITYSDK_OFFSET(0x1C90F2D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_GET_ONBINDEXISTINGBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C90F270)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C90F2B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_GET_ONCONFIRMCREATENEWBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C90F290)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1C90F380)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_SET_GETUSERNICKNAME_OFFSET UNITYSDK_OFFSET(0x1C90F2E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_SET_ONBINDEXISTINGBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C90F280)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C90F2C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_SET_ONCONFIRMCREATENEWBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C90F2A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1C90F2F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C90F3F0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int BindingWelcomeDialog_TypeDefinitionIndex = 20532;

	class BindingWelcomeDialog : public ::System::Object
	{
	public:
		::System::Func_1<::System::String*>* _GetUserNickName_k__BackingField; // 0x10
		::System::Action* _OnConfirmCreateNewBtnClicked_k__BackingField; // 0x18
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x20
		::System::Action* _OnBindExistingBtnClicked_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnBindExistingBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_GET_ONBINDEXISTINGBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnBindExistingBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_SET_ONBINDEXISTINGBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnConfirmCreateNewBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_GET_ONCONFIRMCREATENEWBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnConfirmCreateNewBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_SET_ONCONFIRMCREATENEWBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, value);
		}

		::System::Func_1<::System::String*>* get_GetUserNickName()
		{
			return ((::System::Func_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_GET_GETUSERNICKNAME_OFFSET))(this);
		}

		::System::Void set_GetUserNickName(::System::Func_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_SET_GETUSERNICKNAME_OFFSET))(this, value);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_BINDINGWELCOMEDIALOG_HIDE_OFFSET))(this);
		}
	};
}
