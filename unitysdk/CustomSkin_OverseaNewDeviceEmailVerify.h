#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_16;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_CLICTOTHERBUTTON_OFFSET UNITYSDK_OFFSET(0x15CF6040)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15CF5E80)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_DOBACK_OFFSET UNITYSDK_OFFSET(0x15CF5BF0)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_INIT_OFFSET UNITYSDK_OFFSET(0x15CF4D10)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15CF4AC0)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x15CF5710)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x15CF6360)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15CF4C80)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_QUESTION_OFFSET UNITYSDK_OFFSET(0x15CF5B70)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x15CF5C70)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15CF5D20)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15CF5D70)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_SUBMIT_OFFSET UNITYSDK_OFFSET(0x15CF60C0)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x15CF5F10)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x15CF57F0)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x15CF4BF0)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__REQUESTVERIFYMESSAGE_B__13_0_OFFSET UNITYSDK_OFFSET(0x15CF6470)

inline static constexpr unsigned int CustomSkin_OverseaNewDeviceEmailVerify_TypeDefinitionIndex = 41696;

class CustomSkin_OverseaNewDeviceEmailVerify : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_OverseaNewDeviceEmailVerify** StaticGet__instance()
	{
		return (::CustomSkin_OverseaNewDeviceEmailVerify**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_OverseaNewDeviceEmailVerify_TypeDefinitionIndex)->GetStaticField(0x36440);
	}
	::Class_2_79F6D62CE30E3F8E_16* _view; // 0x18
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _phonePage; // 0x20
	::UnityEngine::Coroutine* coroutine; // 0x28
	::System::Boolean isRequestVerifyCode; // 0x30
	::System::Single countDownTime; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_OverseaNewDeviceEmailVerify* Instance()
	{
		return ((::CustomSkin_OverseaNewDeviceEmailVerify*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_INSTANCE_OFFSET))();
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_ONCLOSE_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_INIT_OFFSET))(this);
	}

	::System::Void UpdateText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_UPDATETEXT_OFFSET))(this);
	}

	::System::Void Question()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_QUESTION_OFFSET))(this);
	}

	::System::Void DoBack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_DOBACK_OFFSET))(this);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Void StartCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_STARTCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void UpdateRequestCodeButtonStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
	}

	::System::Void ClictOtherButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_CLICTOTHERBUTTON_OFFSET))(this);
	}

	::System::Void Submit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_SUBMIT_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RequestVerifyMessage_b__13_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__REQUESTVERIFYMESSAGE_B__13_0_OFFSET))(this, strResult);
	}
};
