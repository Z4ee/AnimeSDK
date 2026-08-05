#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_16;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_CLICTOTHERBUTTON_OFFSET UNITYSDK_OFFSET(0x19F89470)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x19F892C0)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_DOBACK_OFFSET UNITYSDK_OFFSET(0x19F89030)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_INIT_OFFSET UNITYSDK_OFFSET(0x19F88160)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19F87F10)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x19F88B60)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x19F89790)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19F880D0)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_QUESTION_OFFSET UNITYSDK_OFFSET(0x19F88FB0)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x19F890B0)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x19F89160)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x19F891B0)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_SUBMIT_OFFSET UNITYSDK_OFFSET(0x19F894F0)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x19F89350)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x19F88C40)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x19F88040)
#define CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY__REQUESTVERIFYMESSAGE_B__13_0_OFFSET UNITYSDK_OFFSET(0x19F898A0)

inline static constexpr unsigned int CustomSkin_OverseaNewDevicePhoneVerify_TypeDefinitionIndex = 68831;

class CustomSkin_OverseaNewDevicePhoneVerify : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_OverseaNewDevicePhoneVerify** StaticGet__instance()
	{
		return (::CustomSkin_OverseaNewDevicePhoneVerify**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_OverseaNewDevicePhoneVerify_TypeDefinitionIndex)->GetStaticField(0x4CC50);
	}
	::UnityEngine::Coroutine* coroutine; // 0x18
	::Class_2_79F6D62CE30E3F8E_16* _view; // 0x20
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _phonePage; // 0x28
	::System::Single countDownTime; // 0x30
	::System::Boolean isRequestVerifyCode; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_OverseaNewDevicePhoneVerify* Instance()
	{
		return ((::CustomSkin_OverseaNewDevicePhoneVerify*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_INSTANCE_OFFSET))();
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_ONCLOSE_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_INIT_OFFSET))(this);
	}

	::System::Void UpdateText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_UPDATETEXT_OFFSET))(this);
	}

	::System::Void Question()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_QUESTION_OFFSET))(this);
	}

	::System::Void DoBack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_DOBACK_OFFSET))(this);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Void StartCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_STARTCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void UpdateRequestCodeButtonStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
	}

	::System::Void ClictOtherButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_CLICTOTHERBUTTON_OFFSET))(this);
	}

	::System::Void Submit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_SUBMIT_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RequestVerifyMessage_b__13_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEPHONEVERIFY__REQUESTVERIFYMESSAGE_B__13_0_OFFSET))(this, strResult);
	}
};
