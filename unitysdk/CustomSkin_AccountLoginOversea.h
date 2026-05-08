#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_49;
namespace MoleMole { class UIGeneralSDKLoginDialogPopWindowController; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x133EAE20)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_FORGETPASSWORD_OFFSET UNITYSDK_OFFSET(0x133EA6F0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_GENENTRYCALLBACK_OFFSET UNITYSDK_OFFSET(0x133EAB50)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_INIT_OFFSET UNITYSDK_OFFSET(0x133E9070)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_INSTANCE_OFFSET UNITYSDK_OFFSET(0x133E8350)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ISREGISTERVISIBLE_OFFSET UNITYSDK_OFFSET(0x133E9B50)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x133EAC00)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x133EADA0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x133E8580)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x133EB130)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONOPENLOGIN_OFFSET UNITYSDK_OFFSET(0x133E8BF0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONREGISTERACCOUNT_OFFSET UNITYSDK_OFFSET(0x133EA810)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONSHOW_OFFSET UNITYSDK_OFFSET(0x133E89E0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONUILAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x133EB280)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_REFRESHCONSOLERELATEUI_OFFSET UNITYSDK_OFFSET(0x133E9960)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_REGISTER_OFFSET UNITYSDK_OFFSET(0x133EA770)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_RESET_OFFSET UNITYSDK_OFFSET(0x133E86A0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_SETPLATFORM_OFFSET UNITYSDK_OFFSET(0x133E96F0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_SETTHIRDLOGIN_OFFSET UNITYSDK_OFFSET(0x133E9C20)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA_UPDATE_OFFSET UNITYSDK_OFFSET(0x133EA360)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA__CCTOR_OFFSET UNITYSDK_OFFSET(0x133EB2D0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA__CTOR_OFFSET UNITYSDK_OFFSET(0x133E84F0)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA__INIT_B__9_0_OFFSET UNITYSDK_OFFSET(0x133EB530)
#define CUSTOMSKIN_ACCOUNTLOGINOVERSEA__INIT_B__9_1_OFFSET UNITYSDK_OFFSET(0x133EB5A0)

inline static constexpr unsigned int CustomSkin_AccountLoginOversea_TypeDefinitionIndex = 58792;

class CustomSkin_AccountLoginOversea : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_thirdEntryNameList()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLoginOversea_TypeDefinitionIndex)->GetStaticField(0x3F940);
	}
	static ::Il2CppArray<::Foundation::AssetPath>** StaticGet_thirdEntryIconList()
	{
		return (::Il2CppArray<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLoginOversea_TypeDefinitionIndex)->GetStaticField(0x3F948);
	}
	static ::CustomSkin_AccountLoginOversea** StaticGet__instance()
	{
		return (::CustomSkin_AccountLoginOversea**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLoginOversea_TypeDefinitionIndex)->GetStaticField(0x3F950);
	}
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* _acctountPage; // 0x18
	::Class_2_79F6D62CE30E3F8E_49* _loginView; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA__CCTOR_OFFSET))();
	}

	static ::CustomSkin_AccountLoginOversea* Instance()
	{
		return ((::CustomSkin_AccountLoginOversea*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONSHOW_OFFSET))(this);
	}

	::System::Void OnOpenLogin(::MoleMole::UIGeneralSDKLoginDialogPopWindowController* widget)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralSDKLoginDialogPopWindowController*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONOPENLOGIN_OFFSET))(this, widget);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_INIT_OFFSET))(this);
	}

	::System::Void RefreshConsoleRelateUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_REFRESHCONSOLERELATEUI_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_UPDATE_OFFSET))(this);
	}

	::System::Void ForgetPassword()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_FORGETPASSWORD_OFFSET))(this);
	}

	::System::Void Register()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_REGISTER_OFFSET))(this);
	}

	::System::Void OnRegisterAccount(::System::String* strArgs)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONREGISTERACCOUNT_OFFSET))(this, strArgs);
	}

	::System::Void SetThirdLogin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_SETTHIRDLOGIN_OFFSET))(this);
	}

	::UnityEngine::Events::UnityAction* GenEntryCallback(::System::Int32 index)
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_GENENTRYCALLBACK_OFFSET))(this, index);
	}

	::System::Void OnBtnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONBTNCLOSE_OFFSET))(this);
	}

	::System::Void OnClickBack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONCLICKBACK_OFFSET))(this);
	}

	::System::Void EnterGame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ENTERGAME_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_RESET_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void OnUILayoutPlatformChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ONUILAYOUTPLATFORMCHANGED_OFFSET))(this);
	}

	::System::Void SetPlatform()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_SETPLATFORM_OFFSET))(this);
	}

	::System::Boolean IsRegisterVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA_ISREGISTERVISIBLE_OFFSET))(this);
	}

	::System::Void _Init_b__9_0(::System::String* acctoun)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA__INIT_B__9_0_OFFSET))(this, acctoun);
	}

	::System::Void _Init_b__9_1(::System::String* strNewText)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGINOVERSEA__INIT_B__9_1_OFFSET))(this, strNewText);
	}
};
