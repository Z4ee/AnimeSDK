#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_4446D357C89B715C;
namespace MoleMole { class UIGeneralUserAgreementDialogPopWindowController; }
namespace MoleMole { class UITextLink; }
namespace System { class String; }

#define CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKACCEPTBUTTON_OFFSET UNITYSDK_OFFSET(0x114567A0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKMANAGEPREFERENCESBUTTON_OFFSET UNITYSDK_OFFSET(0x114568A0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKREFUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x11456820)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_INSTANCE_OFFSET UNITYSDK_OFFSET(0x114556D0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x11455890)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x11456920)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET UNITYSDK_OFFSET(0x11456AA0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONSHOW_OFFSET UNITYSDK_OFFSET(0x114558F0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONUILAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x11456C90)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_OPENPROTOCOLPRIVACYHYPERLINK_OFFSET UNITYSDK_OFFSET(0x11456A20)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_SETLAYOUTPLATFORM_OFFSET UNITYSDK_OFFSET(0x114565D0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x11455DD0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY__CTOR_OFFSET UNITYSDK_OFFSET(0x11455800)

inline static constexpr unsigned int CustomSkin_ConsentBannerPrivacy_TypeDefinitionIndex = 57972;

class CustomSkin_ConsentBannerPrivacy : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_ConsentBannerPrivacy** StaticGet__instance()
	{
		return (::CustomSkin_ConsentBannerPrivacy**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_ConsentBannerPrivacy_TypeDefinitionIndex)->GetStaticField(0x475F0);
	}
	// static const ::System::String* LINK_ID_PRIVACY; // 0x0
	::MoleMole::UIGeneralUserAgreementDialogPopWindowController* _controller; // 0x18
	::MoleMole::UITextLink* textLink; // 0x20
	::Class_2_4446D357C89B715C* _view; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_ConsentBannerPrivacy* Instance()
	{
		return ((::CustomSkin_ConsentBannerPrivacy*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_ONSHOW_OFFSET))(this);
	}

	::System::Void UpdateText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_UPDATETEXT_OFFSET))(this);
	}

	::System::Void ClickAcceptButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKACCEPTBUTTON_OFFSET))(this);
	}

	::System::Void ClickRefuseButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKREFUSEBUTTON_OFFSET))(this);
	}

	::System::Void ClickManagePreferencesButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKMANAGEPREFERENCESBUTTON_OFFSET))(this);
	}

	::System::Void OnHrefClick(::System::String* hrefName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_ONHREFCLICK_OFFSET))(this, hrefName);
	}

	::System::Void OpenProtocolPrivacyHyperLink()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_OPENPROTOCOLPRIVACYHYPERLINK_OFFSET))(this);
	}

	::System::Void OnOpenConsoleProtocolWindow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET))(this);
	}

	::System::Void OnUILayoutPlatformChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_ONUILAYOUTPLATFORMCHANGED_OFFSET))(this);
	}

	::System::Void SetLayoutPlatform()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERPRIVACY_SETLAYOUTPLATFORM_OFFSET))(this);
	}
};
