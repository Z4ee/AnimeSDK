#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79AE422BA06F6D26_103;
namespace MoleMole { class UIGeneralDescriptConfrimDialogPopWindowController; }
namespace System { class String; }

#define CUSTOMSKIN_RECONFIRM_INSTANCE_OFFSET UNITYSDK_OFFSET(0x16744270)
#define CUSTOMSKIN_RECONFIRM_ONCLICKACCEPT_OFFSET UNITYSDK_OFFSET(0x16745260)
#define CUSTOMSKIN_RECONFIRM_ONCLICKREFUSE_OFFSET UNITYSDK_OFFSET(0x167451E0)
#define CUSTOMSKIN_RECONFIRM_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x16744DE0)
#define CUSTOMSKIN_RECONFIRM_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x16744E40)
#define CUSTOMSKIN_RECONFIRM_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET UNITYSDK_OFFSET(0x167452E0)
#define CUSTOMSKIN_RECONFIRM_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16744430)
#define CUSTOMSKIN_RECONFIRM_OPENPROTOCOLAGREEMENTHYPERLINK_OFFSET UNITYSDK_OFFSET(0x16745060)
#define CUSTOMSKIN_RECONFIRM_OPENPROTOCOLOPERATORAGREEMENTHYPERLINK_OFFSET UNITYSDK_OFFSET(0x16745160)
#define CUSTOMSKIN_RECONFIRM_OPENPROTOCOLPRIVACYHYPERLINK_OFFSET UNITYSDK_OFFSET(0x167450E0)
#define CUSTOMSKIN_RECONFIRM_SETPLATFORM_OFFSET UNITYSDK_OFFSET(0x16744A90)
#define CUSTOMSKIN_RECONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x167443A0)

inline static constexpr unsigned int CustomSkin_ReConfirm_TypeDefinitionIndex = 70423;

class CustomSkin_ReConfirm : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_ReConfirm** StaticGet__instance()
	{
		return (::CustomSkin_ReConfirm**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_ReConfirm_TypeDefinitionIndex)->GetStaticField(0x3FF10);
	}
	// static const ::System::String* LINK_ID_USER_AGREEMENT; // 0x0
	// static const ::System::String* LINK_ID_PRIVACY; // 0x0
	// static const ::System::String* LINK_ID_OPERATOR_AGREEMENT; // 0x0
	::MoleMole::UIGeneralDescriptConfrimDialogPopWindowController* _controller; // 0x18
	::Class_2_79AE422BA06F6D26_103* _view; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_RECONFIRM__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_ReConfirm* Instance()
	{
		return ((::CustomSkin_ReConfirm*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_RECONFIRM_INSTANCE_OFFSET))();
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_RECONFIRM_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_RECONFIRM_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnHrefClick(::System::String* hrefName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_RECONFIRM_ONHREFCLICK_OFFSET))(this, hrefName);
	}

	::System::Void OnClickRefuse()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_RECONFIRM_ONCLICKREFUSE_OFFSET))(this);
	}

	::System::Void OnClickAccept()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_RECONFIRM_ONCLICKACCEPT_OFFSET))(this);
	}

	::System::Void OpenProtocolAgreementHyperLink()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_RECONFIRM_OPENPROTOCOLAGREEMENTHYPERLINK_OFFSET))(this);
	}

	::System::Void OpenProtocolPrivacyHyperLink()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_RECONFIRM_OPENPROTOCOLPRIVACYHYPERLINK_OFFSET))(this);
	}

	::System::Void OpenProtocolOperatorAgreementHyperLink()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_RECONFIRM_OPENPROTOCOLOPERATORAGREEMENTHYPERLINK_OFFSET))(this);
	}

	::System::Void SetPlatform()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_RECONFIRM_SETPLATFORM_OFFSET))(this);
	}

	::System::Void OnOpenConsoleProtocolWindow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_RECONFIRM_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET))(this);
	}
};
