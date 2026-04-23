#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/OS/GooglePCOAuthState.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONAUTHBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x176726B0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONBACKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x17672730)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONCHECKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x176726D0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONMEETPROBLEMBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x17672710)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONREAUTHBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x176726F0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_HIDE_OFFSET UNITYSDK_OFFSET(0x17672750)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SETSTATE_OFFSET UNITYSDK_OFFSET(0x176727A0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONAUTHBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x176726C0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONBACKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x17672740)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONCHECKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x176726E0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONMEETPROBLEMBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x17672720)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONREAUTHBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x17672700)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x176727F0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x17672840)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int GooglePCOAuthPluginUI_TypeDefinitionIndex = 7430;

	class GooglePCOAuthPluginUI : public ::System::Object
	{
	public:
		::System::Action* _OnAuthButtonClick_k__BackingField; // 0x10
		::System::Action* _OnBackButtonClick_k__BackingField; // 0x18
		::System::Action* _OnReAuthButtonClick_k__BackingField; // 0x20
		::System::Action* _OnCheckButtonClick_k__BackingField; // 0x28
		::System::Action* _OnMeetProblemButtonClick_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnAuthButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONAUTHBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnAuthButtonClick(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONAUTHBUTTONCLICK_OFFSET))(this, value);
		}

		::System::Action* get_OnCheckButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONCHECKBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnCheckButtonClick(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONCHECKBUTTONCLICK_OFFSET))(this, value);
		}

		::System::Action* get_OnReAuthButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONREAUTHBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnReAuthButtonClick(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONREAUTHBUTTONCLICK_OFFSET))(this, value);
		}

		::System::Action* get_OnMeetProblemButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONMEETPROBLEMBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnMeetProblemButtonClick(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONMEETPROBLEMBUTTONCLICK_OFFSET))(this, value);
		}

		::System::Action* get_OnBackButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONBACKBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnBackButtonClick(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONBACKBUTTONCLICK_OFFSET))(this, value);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_HIDE_OFFSET))(this);
		}

		::System::Void SetState(::MiHoYo::SDK::UI::OS::GooglePCOAuthState state)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::GooglePCOAuthState))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SETSTATE_OFFSET))(this, state);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SHOW_OFFSET))(this);
		}
	};
}
