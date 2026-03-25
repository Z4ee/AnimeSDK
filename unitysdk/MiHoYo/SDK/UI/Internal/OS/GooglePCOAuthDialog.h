#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/OS/GooglePCOAuthState.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_GET_ONAUTHBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x16016810)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_GET_ONBACKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x160168B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_GET_ONCHECKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x16016850)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_GET_ONMEETPROBLEMBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x16016890)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_GET_ONREAUTHBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x16016870)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_GET_ONSUBMITBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x16016830)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x16016A90)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_ONMEETPROBLEM_OFFSET UNITYSDK_OFFSET(0x16016B00)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SETSTATE_OFFSET UNITYSDK_OFFSET(0x160168D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SET_ONAUTHBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x16016820)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SET_ONBACKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x160168C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SET_ONCHECKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x16016860)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SET_ONMEETPROBLEMBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x160168A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SET_ONREAUTHBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x16016880)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SET_ONSUBMITBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x16016840)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x16016990)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x16016EC0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG__SHOW_B__25_0_OFFSET UNITYSDK_OFFSET(0x16016ED0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int GooglePCOAuthDialog_TypeDefinitionIndex = 7377;

	class GooglePCOAuthDialog : public ::System::Object
	{
	public:
		::System::Action* _OnMeetProblemButtonClick_k__BackingField; // 0x10
		::System::Action* _OnReAuthButtonClick_k__BackingField; // 0x18
		::System::Action* _OnAuthButtonClick_k__BackingField; // 0x20
		::System::Action* _OnBackButtonClick_k__BackingField; // 0x28
		::System::Action* _OnSubmitButtonClick_k__BackingField; // 0x30
		::System::Action* _OnCheckButtonClick_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnAuthButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_GET_ONAUTHBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnAuthButtonClick(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SET_ONAUTHBUTTONCLICK_OFFSET))(this, value);
		}

		::System::Action* get_OnSubmitButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_GET_ONSUBMITBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnSubmitButtonClick(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SET_ONSUBMITBUTTONCLICK_OFFSET))(this, value);
		}

		::System::Action* get_OnCheckButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_GET_ONCHECKBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnCheckButtonClick(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SET_ONCHECKBUTTONCLICK_OFFSET))(this, value);
		}

		::System::Action* get_OnReAuthButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_GET_ONREAUTHBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnReAuthButtonClick(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SET_ONREAUTHBUTTONCLICK_OFFSET))(this, value);
		}

		::System::Action* get_OnMeetProblemButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_GET_ONMEETPROBLEMBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnMeetProblemButtonClick(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SET_ONMEETPROBLEMBUTTONCLICK_OFFSET))(this, value);
		}

		::System::Action* get_OnBackButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_GET_ONBACKBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnBackButtonClick(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SET_ONBACKBUTTONCLICK_OFFSET))(this, value);
		}

		::System::Void SetState(::MiHoYo::SDK::UI::OS::GooglePCOAuthState state)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::GooglePCOAuthState))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SETSTATE_OFFSET))(this, state);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_HIDE_OFFSET))(this);
		}

		::System::Void OnMeetProblem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG_ONMEETPROBLEM_OFFSET))(this);
		}

		::System::Void _Show_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTHDIALOG__SHOW_B__25_0_OFFSET))(this);
		}
	};
}
