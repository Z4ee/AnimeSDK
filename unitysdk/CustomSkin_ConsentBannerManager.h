#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_1A39E1B51756BF41;
class Class_2_79AE422BA06F6D26_103;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIGeneralDescriptConfrimDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CUSTOMSKIN_CONSENTBANNERMANAGER_CLICKREJECTBUTTON_OFFSET UNITYSDK_OFFSET(0x14514AD0)
#define CUSTOMSKIN_CONSENTBANNERMANAGER_CLICKSAVEBUTTON_OFFSET UNITYSDK_OFFSET(0x14514A50)
#define CUSTOMSKIN_CONSENTBANNERMANAGER_CREATEGAMEOBJECTMAP_OFFSET UNITYSDK_OFFSET(0x14513BF0)
#define CUSTOMSKIN_CONSENTBANNERMANAGER_GENCHECKBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0x145149A0)
#define CUSTOMSKIN_CONSENTBANNERMANAGER_INITCOOKIESITEM_OFFSET UNITYSDK_OFFSET(0x14514470)
#define CUSTOMSKIN_CONSENTBANNERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x145134F0)
#define CUSTOMSKIN_CONSENTBANNERMANAGER_INSTANCE_OFFSET UNITYSDK_OFFSET(0x145130B0)
#define CUSTOMSKIN_CONSENTBANNERMANAGER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x14513800)
#define CUSTOMSKIN_CONSENTBANNERMANAGER_ONHIDEELEMENT_OFFSET UNITYSDK_OFFSET(0x14513B90)
#define CUSTOMSKIN_CONSENTBANNERMANAGER_ONSHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x14513860)
#define CUSTOMSKIN_CONSENTBANNERMANAGER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14513270)
#define CUSTOMSKIN_CONSENTBANNERMANAGER_ONUILAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x14514B50)
#define CUSTOMSKIN_CONSENTBANNERMANAGER_SETLAYOUTPLATFORM_OFFSET UNITYSDK_OFFSET(0x145136B0)
#define CUSTOMSKIN_CONSENTBANNERMANAGER_SHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x145138C0)
#define CUSTOMSKIN_CONSENTBANNERMANAGER_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x145142A0)
#define CUSTOMSKIN_CONSENTBANNERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x145131E0)
#define CUSTOMSKIN_CONSENTBANNERMANAGER___BASE_ONHIDEELEMENT_OFFSET UNITYSDK_OFFSET(0x14514BA0)
#define CUSTOMSKIN_CONSENTBANNERMANAGER___BASE_ONSHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x14514BB0)

inline static constexpr unsigned int CustomSkin_ConsentBannerManager_TypeDefinitionIndex = 74597;

class CustomSkin_ConsentBannerManager : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_ConsentBannerManager** StaticGet__instance()
	{
		return (::CustomSkin_ConsentBannerManager**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_ConsentBannerManager_TypeDefinitionIndex)->GetStaticField(0x2E440);
	}
	::Class_2_79AE422BA06F6D26_103* _view; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_1A39E1B51756BF41*>* checkImageDict; // 0x20
	::MoleMole::UIGeneralDescriptConfrimDialogPopWindowController* _controller; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_B4378B46E0020E85*>* checkButtonDict; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*>* textDict; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_ConsentBannerManager* Instance()
	{
		return ((::CustomSkin_ConsentBannerManager*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_INSTANCE_OFFSET))();
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShowElement(::System::Collections::Generic::List_1<::System::String*>* lstElementIds)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_ONSHOWELEMENT_OFFSET))(this, lstElementIds);
	}

	::System::Void OnHideElement(::System::Collections::Generic::List_1<::System::String*>* lstElementIds)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_ONHIDEELEMENT_OFFSET))(this, lstElementIds);
	}

	::System::Void ShowElement(::System::Collections::Generic::List_1<::System::String*>* lstElementIds, ::System::Boolean bIsVisible)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_SHOWELEMENT_OFFSET))(this, lstElementIds, bIsVisible);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_INIT_OFFSET))(this);
	}

	::System::Void CreateGameObjectMap()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_CREATEGAMEOBJECTMAP_OFFSET))(this);
	}

	::System::Void UpdateText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_UPDATETEXT_OFFSET))(this);
	}

	::System::Void InitCookiesItem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_INITCOOKIESITEM_OFFSET))(this);
	}

	::UnityEngine::Events::UnityAction* GenCheckButtonCallback(::System::String* strElementID)
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_GENCHECKBUTTONCALLBACK_OFFSET))(this, strElementID);
	}

	::System::Void ClickSaveButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_CLICKSAVEBUTTON_OFFSET))(this);
	}

	::System::Void ClickRejectButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_CLICKREJECTBUTTON_OFFSET))(this);
	}

	::System::Void OnUILayoutPlatformChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_ONUILAYOUTPLATFORMCHANGED_OFFSET))(this);
	}

	::System::Void SetLayoutPlatform()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER_SETLAYOUTPLATFORM_OFFSET))(this);
	}

	::System::Void __base_OnHideElement(::System::Collections::Generic::List_1<::System::String*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER___BASE_ONHIDEELEMENT_OFFSET))(this, P0);
	}

	::System::Void __base_OnShowElement(::System::Collections::Generic::List_1<::System::String*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_CONSENTBANNERMANAGER___BASE_ONSHOWELEMENT_OFFSET))(this, P0);
	}
};
