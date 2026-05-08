#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_4446D357C89B715C;
namespace MoleMole { class UIGeneralUserAgreementDialogPopWindowController; }
namespace MoleMole { class UITextLink; }
namespace System { class String; }

#define CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKACCEPTBUTTON_OFFSET UNITYSDK_OFFSET(0x13556860)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKMANAGEPREFERENCESBUTTON_OFFSET UNITYSDK_OFFSET(0x13556960)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_CLICKREFUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x135568E0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_INSTANCE_OFFSET UNITYSDK_OFFSET(0x135557A0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x13555960)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x135569E0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET UNITYSDK_OFFSET(0x13556B60)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONSHOW_OFFSET UNITYSDK_OFFSET(0x135559C0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_ONUILAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x13556D50)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_OPENPROTOCOLPRIVACYHYPERLINK_OFFSET UNITYSDK_OFFSET(0x13556AE0)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_SETLAYOUTPLATFORM_OFFSET UNITYSDK_OFFSET(0x13556690)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x13555E90)
#define CUSTOMSKIN_CONSENTBANNERPRIVACY__CTOR_OFFSET UNITYSDK_OFFSET(0x135558D0)

inline static constexpr unsigned int CustomSkin_ConsentBannerPrivacy_TypeDefinitionIndex = 58252;

class CustomSkin_ConsentBannerPrivacy : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_ConsentBannerPrivacy** StaticGet__instance()
	{
		return (::CustomSkin_ConsentBannerPrivacy**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_ConsentBannerPrivacy_TypeDefinitionIndex)->GetStaticField(0x461B0);
	}
	// static const ::System::String* LINK_ID_PRIVACY; // 0x0
	::MoleMole::UITextLink* textLink; // 0x18
	::Class_2_4446D357C89B715C* _view; // 0x20
	::MoleMole::UIGeneralUserAgreementDialogPopWindowController* _controller; // 0x28

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
