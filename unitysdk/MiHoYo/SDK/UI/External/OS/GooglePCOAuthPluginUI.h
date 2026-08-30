#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/OS/GooglePCOAuthState.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONAUTHBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1BAEFAE0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONBACKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1BAEFB60)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONCHECKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1BAEFB00)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONMEETPROBLEMBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1BAEFB40)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONREAUTHBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1BAEFB20)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_HIDE_OFFSET UNITYSDK_OFFSET(0x1BAEFB80)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SETSTATE_OFFSET UNITYSDK_OFFSET(0x1BAEFBD0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONAUTHBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1BAEFAF0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONBACKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1BAEFB70)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONCHECKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1BAEFB10)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONMEETPROBLEMBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1BAEFB50)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONREAUTHBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1BAEFB30)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x1BAEFC20)
#define MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAEFC70)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int GooglePCOAuthPluginUI_TypeDefinitionIndex = 8365;

	class GooglePCOAuthPluginUI : public ::System::Object
	{
	public:
		::System::Action* _OnAuthButtonClick_k__BackingField; // 0x10
		::System::Action* _OnBackButtonClick_k__BackingField; // 0x18
		::System::Action* _OnCheckButtonClick_k__BackingField; // 0x20
		::System::Action* _OnReAuthButtonClick_k__BackingField; // 0x28
		::System::Action* _OnMeetProblemButtonClick_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnAuthButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONAUTHBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnAuthButtonClick(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONAUTHBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Action* get_OnCheckButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONCHECKBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnCheckButtonClick(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONCHECKBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Action* get_OnReAuthButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONREAUTHBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnReAuthButtonClick(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONREAUTHBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Action* get_OnMeetProblemButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONMEETPROBLEMBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnMeetProblemButtonClick(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONMEETPROBLEMBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Action* get_OnBackButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_GET_ONBACKBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnBackButtonClick(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SET_ONBACKBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_HIDE_OFFSET))(this);
		}

		::System::Void SetState(::MiHoYo::SDK::UI::OS::GooglePCOAuthState a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::GooglePCOAuthState))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SETSTATE_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_GOOGLEPCOAUTHPLUGINUI_SHOW_OFFSET))(this);
		}
	};
}
