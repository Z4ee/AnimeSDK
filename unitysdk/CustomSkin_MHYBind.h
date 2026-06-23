#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_16;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_MHYBIND_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x16743460)
#define CUSTOMSKIN_MHYBIND_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x16743A80)
#define CUSTOMSKIN_MHYBIND_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x16743D10)
#define CUSTOMSKIN_MHYBIND_INSTANCE_OFFSET UNITYSDK_OFFSET(0x16742110)
#define CUSTOMSKIN_MHYBIND_ONACCTOUNVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x167434E0)
#define CUSTOMSKIN_MHYBIND_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x167422D0)
#define CUSTOMSKIN_MHYBIND_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x16743F90)
#define CUSTOMSKIN_MHYBIND_ONSHOW_OFFSET UNITYSDK_OFFSET(0x167424D0)
#define CUSTOMSKIN_MHYBIND_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x16743600)
#define CUSTOMSKIN_MHYBIND_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x16743B10)
#define CUSTOMSKIN_MHYBIND_SETACCOUNTINPUT_OFFSET UNITYSDK_OFFSET(0x16742C50)
#define CUSTOMSKIN_MHYBIND_SETGETCODEBTN_OFFSET UNITYSDK_OFFSET(0x167431B0)
#define CUSTOMSKIN_MHYBIND_SETPWDINPUT_OFFSET UNITYSDK_OFFSET(0x16742F50)
#define CUSTOMSKIN_MHYBIND_SETREGISTER_OFFSET UNITYSDK_OFFSET(0x16743260)
#define CUSTOMSKIN_MHYBIND_SETTIPS_OFFSET UNITYSDK_OFFSET(0x16742AE0)
#define CUSTOMSKIN_MHYBIND_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x16743830)
#define CUSTOMSKIN_MHYBIND_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x16743B60)
#define CUSTOMSKIN_MHYBIND__CTOR_OFFSET UNITYSDK_OFFSET(0x16742240)
#define CUSTOMSKIN_MHYBIND__REQUESTVERIFYMESSAGE_B__16_0_OFFSET UNITYSDK_OFFSET(0x167440A0)

inline static constexpr unsigned int CustomSkin_MHYBind_TypeDefinitionIndex = 64610;

class CustomSkin_MHYBind : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_MHYBind** StaticGet__instance()
	{
		return (::CustomSkin_MHYBind**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_MHYBind_TypeDefinitionIndex)->GetStaticField(0x3FF00);
	}
	::UnityEngine::Coroutine* coroutine; // 0x18
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _phonePage; // 0x20
	::Class_2_79F6D62CE30E3F8E_16* _loginView; // 0x28
	::System::Single countDownTime; // 0x30
	::System::Boolean isRequestVerifyCode; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_MHYBind* Instance()
	{
		return ((::CustomSkin_MHYBind*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_ONSHOW_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void SetTips()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_SETTIPS_OFFSET))(this);
	}

	::System::Void SetRegister()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_SETREGISTER_OFFSET))(this);
	}

	::System::Void SetGetCodeBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_SETGETCODEBTN_OFFSET))(this);
	}

	::System::Void SetAccountInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_SETACCOUNTINPUT_OFFSET))(this);
	}

	::System::Void SetPWDInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_SETPWDINPUT_OFFSET))(this);
	}

	::System::Void OnAcctounValueChanged(::System::String* input)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_ONACCTOUNVALUECHANGED_OFFSET))(this, input);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void StartCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_STARTCOUNTDOWN_OFFSET))(this);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void UpdateRequestCodeButtonStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
	}

	::System::Void EnterGame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_ENTERGAME_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RequestVerifyMessage_b__16_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND__REQUESTVERIFYMESSAGE_B__16_0_OFFSET))(this, strResult);
	}
};
