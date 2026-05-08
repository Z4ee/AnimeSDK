#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_7;
namespace MoleMole { class UIGeneralRealAuthenticationDialogPopWindowController; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define CUSTOMSKIN_REALNAME_BINDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x131A3150)
#define CUSTOMSKIN_REALNAME_INIT_OFFSET UNITYSDK_OFFSET(0x131A3290)
#define CUSTOMSKIN_REALNAME_INSTANCE_OFFSET UNITYSDK_OFFSET(0x131A2D50)
#define CUSTOMSKIN_REALNAME_MEETPROBLEM_OFFSET UNITYSDK_OFFSET(0x131A3D50)
#define CUSTOMSKIN_REALNAME_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x131A3CD0)
#define CUSTOMSKIN_REALNAME_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x131A2F10)
#define CUSTOMSKIN_REALNAME_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x131A4020)
#define CUSTOMSKIN_REALNAME_ONSHOW_OFFSET UNITYSDK_OFFSET(0x131A2F60)
#define CUSTOMSKIN_REALNAME_SETLISTENER_OFFSET UNITYSDK_OFFSET(0x131A36A0)
#define CUSTOMSKIN_REALNAME_SETTEXT_OFFSET UNITYSDK_OFFSET(0x131A39F0)
#define CUSTOMSKIN_REALNAME_SUBMIT_OFFSET UNITYSDK_OFFSET(0x131A3DD0)
#define CUSTOMSKIN_REALNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x131A2E80)
#define CUSTOMSKIN_REALNAME__SETLISTENER_B__21_0_OFFSET UNITYSDK_OFFSET(0x131A4130)
#define CUSTOMSKIN_REALNAME__SETLISTENER_B__21_1_OFFSET UNITYSDK_OFFSET(0x131A4170)
#define CUSTOMSKIN_REALNAME__SETLISTENER_B__21_2_OFFSET UNITYSDK_OFFSET(0x131A41B0)
#define CUSTOMSKIN_REALNAME__SETLISTENER_B__21_3_OFFSET UNITYSDK_OFFSET(0x131A4220)

inline static constexpr unsigned int CustomSkin_RealName_TypeDefinitionIndex = 57616;

class CustomSkin_RealName : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_RealName** StaticGet__instance()
	{
		return (::CustomSkin_RealName**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_RealName_TypeDefinitionIndex)->GetStaticField(0x481D0);
	}
	::UnityEngine::UI::Button* backButton; // 0x18
	::UnityEngine::UI::Button* questionButton; // 0x20
	::UnityEngine::UI::Text* namePlaceholder; // 0x28
	::UnityEngine::UI::Text* noticeText; // 0x30
	::Class_2_79F6D62CE30E3F8E_7* _realNameView; // 0x38
	::UnityEngine::UI::Text* idPlaceholder; // 0x40
	::MoleMole::UIGeneralRealAuthenticationDialogPopWindowController* _realNamePage; // 0x48
	::UnityEngine::UI::Text* idTitle; // 0x50
	::UnityEngine::UI::InputField* nameInput; // 0x58
	::UnityEngine::UI::Text* pageTitle; // 0x60
	::UnityEngine::UI::Text* submitButtonText; // 0x68
	::UnityEngine::UI::Text* nameTitle; // 0x70
	::UnityEngine::UI::InputField* idInput; // 0x78
	::UnityEngine::UI::Button* submitButton; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_RealName* Instance()
	{
		return ((::CustomSkin_RealName*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_ONSHOW_OFFSET))(this);
	}

	::System::Void BindGameObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_BINDGAMEOBJECT_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_INIT_OFFSET))(this);
	}

	::System::Void SetText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_SETTEXT_OFFSET))(this);
	}

	::System::Void SetListener()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_SETLISTENER_OFFSET))(this);
	}

	::System::Void OnClickBack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_ONCLICKBACK_OFFSET))(this);
	}

	::System::Void MeetProblem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_MEETPROBLEM_OFFSET))(this);
	}

	::System::Void Submit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_SUBMIT_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _SetListener_b__21_0(::System::String* str)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME__SETLISTENER_B__21_0_OFFSET))(this, str);
	}

	::System::Void _SetListener_b__21_1(::System::String* str)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME__SETLISTENER_B__21_1_OFFSET))(this, str);
	}

	::System::Void _SetListener_b__21_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME__SETLISTENER_B__21_2_OFFSET))(this);
	}

	::System::Void _SetListener_b__21_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_REALNAME__SETLISTENER_B__21_3_OFFSET))(this);
	}
};
