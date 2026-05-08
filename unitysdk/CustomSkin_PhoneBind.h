#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_22;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_PHONEBIND_BIND_OFFSET UNITYSDK_OFFSET(0xE91DC20)
#define CUSTOMSKIN_PHONEBIND_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0xE91D340)
#define CUSTOMSKIN_PHONEBIND_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0xE91DB40)
#define CUSTOMSKIN_PHONEBIND_INSTANCE_OFFSET UNITYSDK_OFFSET(0xE91C0F0)
#define CUSTOMSKIN_PHONEBIND_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xE91C2B0)
#define CUSTOMSKIN_PHONEBIND_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0xE91DEA0)
#define CUSTOMSKIN_PHONEBIND_ONPHONEALUECHANGE_OFFSET UNITYSDK_OFFSET(0xE91D3C0)
#define CUSTOMSKIN_PHONEBIND_ONSHOW_OFFSET UNITYSDK_OFFSET(0xE91C4B0)
#define CUSTOMSKIN_PHONEBIND_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0xE91D6C0)
#define CUSTOMSKIN_PHONEBIND_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xE91DBD0)
#define CUSTOMSKIN_PHONEBIND_SETACCOUNTINPUT_OFFSET UNITYSDK_OFFSET(0xE91CC10)
#define CUSTOMSKIN_PHONEBIND_SETNOTICE_OFFSET UNITYSDK_OFFSET(0xE91D260)
#define CUSTOMSKIN_PHONEBIND_SETPWDINPUT_OFFSET UNITYSDK_OFFSET(0xE91CF10)
#define CUSTOMSKIN_PHONEBIND_SETREGISTER_OFFSET UNITYSDK_OFFSET(0xE91D170)
#define CUSTOMSKIN_PHONEBIND_SETZONETIP_OFFSET UNITYSDK_OFFSET(0xE91CB20)
#define CUSTOMSKIN_PHONEBIND_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xE91D8E0)
#define CUSTOMSKIN_PHONEBIND_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0xE91D420)
#define CUSTOMSKIN_PHONEBIND__CTOR_OFFSET UNITYSDK_OFFSET(0xE91C220)
#define CUSTOMSKIN_PHONEBIND__REQUESTVERIFYMESSAGE_B__16_0_OFFSET UNITYSDK_OFFSET(0xE91DFB0)

inline static constexpr unsigned int CustomSkin_PhoneBind_TypeDefinitionIndex = 39884;

class CustomSkin_PhoneBind : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_PhoneBind** StaticGet__instance()
	{
		return (::CustomSkin_PhoneBind**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_PhoneBind_TypeDefinitionIndex)->GetStaticField(0x368C0);
	}
	::UnityEngine::Coroutine* coroutine; // 0x18
	::Class_2_79F6D62CE30E3F8E_22* _loginView; // 0x20
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _phonePage; // 0x28
	::System::Boolean isRequestVerifyCode; // 0x30
	::System::Single countDownTime; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_PhoneBind* Instance()
	{
		return ((::CustomSkin_PhoneBind*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_ONSHOW_OFFSET))(this);
	}

	::System::Void SetNotice()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_SETNOTICE_OFFSET))(this);
	}

	::System::Void SetZoneTip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_SETZONETIP_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void SetAccountInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_SETACCOUNTINPUT_OFFSET))(this);
	}

	::System::Void SetPWDInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_SETPWDINPUT_OFFSET))(this);
	}

	::System::Void OnPhonealueChange(::System::String* input)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_ONPHONEALUECHANGE_OFFSET))(this, input);
	}

	::System::Void UpdateRequestCodeButtonStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void StartCountDown(::System::Single nCountdown)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_STARTCOUNTDOWN_OFFSET))(this, nCountdown);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void SetRegister()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_SETREGISTER_OFFSET))(this);
	}

	::System::Void Bind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_BIND_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RequestVerifyMessage_b__16_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEBIND__REQUESTVERIFYMESSAGE_B__16_0_OFFSET))(this, strResult);
	}
};
