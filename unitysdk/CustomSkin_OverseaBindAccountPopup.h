#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_16;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }

#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_CLICKBIND_OFFSET UNITYSDK_OFFSET(0x1551B3D0)
#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_CLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x1551B350)
#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1551A700)
#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1551A8C0)
#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_ONREGISTERCLICK_OFFSET UNITYSDK_OFFSET(0x1551B450)
#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1551A920)
#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1551B170)
#define CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1551A830)

inline static constexpr unsigned int CustomSkin_OverseaBindAccountPopup_TypeDefinitionIndex = 84362;

class CustomSkin_OverseaBindAccountPopup : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_OverseaBindAccountPopup** StaticGet__instance()
	{
		return (::CustomSkin_OverseaBindAccountPopup**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_OverseaBindAccountPopup_TypeDefinitionIndex)->GetStaticField(0x47C40);
	}
	::Class_2_79F6D62CE30E3F8E_16* _view; // 0x18
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _popWidget; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_OverseaBindAccountPopup* Instance()
	{
		return ((::CustomSkin_OverseaBindAccountPopup*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_ONSHOW_OFFSET))(this);
	}

	::System::Void UpdateText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_UPDATETEXT_OFFSET))(this);
	}

	::System::Void ClickClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_CLICKCLOSE_OFFSET))(this);
	}

	::System::Void ClickBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_CLICKBIND_OFFSET))(this);
	}

	::System::Void OnRegisterClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDACCOUNTPOPUP_ONREGISTERCLICK_OFFSET))(this);
	}
};
