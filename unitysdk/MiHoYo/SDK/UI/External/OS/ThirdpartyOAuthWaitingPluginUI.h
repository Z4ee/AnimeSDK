#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/ThirdpartyMethod.h"
#include "unitysdk/MiHoYo/SDK/UI/OS/ThirdpartyOAuthState.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_GET_ONCANCELBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x17673840)
#define MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_GET_ONRETRYBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x17673860)
#define MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_HIDETHIRDPARTYOAUTHPLUGINUI_OFFSET UNITYSDK_OFFSET(0x17673890)
#define MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_HIDE_OFFSET UNITYSDK_OFFSET(0x17673880)
#define MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_SET_ONCANCELBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x17673850)
#define MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_SET_ONRETRYBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x17673870)
#define MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_SHOWTHIRDPARTYOAUTHPLUGINUI_OFFSET UNITYSDK_OFFSET(0x176739A0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x17673990)
#define MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_UPDATEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x17673CB0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x17673CA0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x176741B0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI__SHOWTHIRDPARTYOAUTHPLUGINUI_B__13_0_OFFSET UNITYSDK_OFFSET(0x176741C0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI__SHOWTHIRDPARTYOAUTHPLUGINUI_B__13_1_OFFSET UNITYSDK_OFFSET(0x176741D0)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int ThirdpartyOAuthWaitingPluginUI_TypeDefinitionIndex = 7435;

	class ThirdpartyOAuthWaitingPluginUI : public ::System::Object
	{
	public:
		::System::Action* _OnCancelBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnRetryBtnClicked_k__BackingField; // 0x18
		::MiHoYo::SDK::PC::OS::ThirdpartyMethod loginMethod; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnCancelBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_GET_ONCANCELBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCancelBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_SET_ONCANCELBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnRetryBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_GET_ONRETRYBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnRetryBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_SET_ONRETRYBTNCLICKED_OFFSET))(this, value);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_HIDE_OFFSET))(this);
		}

		::System::Void Show(::MiHoYo::SDK::PC::OS::ThirdpartyMethod thirdPartyMethod)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::ThirdpartyMethod))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_SHOW_OFFSET))(this, thirdPartyMethod);
		}

		::System::Void UpdateState(::MiHoYo::SDK::UI::OS::ThirdpartyOAuthState state)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::ThirdpartyOAuthState))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_UPDATESTATE_OFFSET))(this, state);
		}

		::System::Void UpdatePluginUI(::MiHoYo::SDK::UI::OS::ThirdpartyOAuthState process)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::ThirdpartyOAuthState))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_UPDATEPLUGINUI_OFFSET))(this, process);
		}

		::System::Boolean ShowThirdPartyOAuthPluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_SHOWTHIRDPARTYOAUTHPLUGINUI_OFFSET))(this);
		}

		::System::Void HideThirdPartyOAuthPluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI_HIDETHIRDPARTYOAUTHPLUGINUI_OFFSET))(this);
		}

		::System::Void _ShowThirdPartyOAuthPluginUI_b__13_0(::System::String* str, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI__SHOWTHIRDPARTYOAUTHPLUGINUI_B__13_0_OFFSET))(this, str, callback);
		}

		::System::Void _ShowThirdPartyOAuthPluginUI_b__13_1(::System::String* str, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_THIRDPARTYOAUTHWAITINGPLUGINUI__SHOWTHIRDPARTYOAUTHPLUGINUI_B__13_1_OFFSET))(this, str, callback);
		}
	};
}
