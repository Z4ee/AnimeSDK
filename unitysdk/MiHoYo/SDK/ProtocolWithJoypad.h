#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ProtocolWithJoypad_TipsVisbility.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class ILinkImageText; }
namespace MiHoYo::SDK { class IMaxHeightLayoutController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B9E4B00)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_CLICKACCEPTBUTTON_OFFSET UNITYSDK_OFFSET(0x1B9E5980)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_CLICKREFUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1B9E5920)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_HIDE_OFFSET UNITYSDK_OFFSET(0x1B9E28B0)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B9E5A40)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x1B9E59E0)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_SETBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x1B9E2C20)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_SETCONTENT_OFFSET UNITYSDK_OFFSET(0x1B9E3000)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_SETHIGHLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x1B9E2FF0)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_SETJOYPADREADTIPS_OFFSET UNITYSDK_OFFSET(0x1B9E3890)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_SETJOYPADSTATUS_OFFSET UNITYSDK_OFFSET(0x1B9E3D00)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_SETTITLE_OFFSET UNITYSDK_OFFSET(0x1B9E2920)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_SHOW_OFFSET UNITYSDK_OFFSET(0x1B9E2780)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_UPDATECOMPONENTHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B9E3820)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_UPDATEJOYPADICON_OFFSET UNITYSDK_OFFSET(0x1B9E4100)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B9E5510)
#define MIHOYO_SDK_PROTOCOLWITHJOYPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E5A60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolWithJoypad_TypeDefinitionIndex = 19789;

	class ProtocolWithJoypad : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::ProtocolWithJoypad** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ProtocolWithJoypad**)Il2CppClass::FromTypeDefinitionIndex(ProtocolWithJoypad_TypeDefinitionIndex)->GetStaticField(0xAAB0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* DialogPath; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* ContentWrapperPath; // 0x0
		// static const ::System::String* ContentPath; // 0x0
		// static const ::System::String* JoypadTipsPath; // 0x0
		// static const ::System::String* L1TipsPath; // 0x0
		// static const ::System::String* L1TipsImagePath; // 0x0
		// static const ::System::String* L1TipsTextPath; // 0x0
		// static const ::System::String* R1TipsPath; // 0x0
		// static const ::System::String* R1TipsImagePath; // 0x0
		// static const ::System::String* R1TipsTextPath; // 0x0
		// static const ::System::String* SpacerPath_1; // 0x0
		// static const ::System::String* RefuseBtnPath; // 0x0
		// static const ::System::String* RefuseBtnJoypadIconPath; // 0x0
		// static const ::System::String* RefuseBtnJoypadIconImagePath; // 0x0
		// static const ::System::String* RefuseBtnTextPath; // 0x0
		// static const ::System::String* AcceptBtnPath; // 0x0
		// static const ::System::String* AcceptBtnJoypadIconPath; // 0x0
		// static const ::System::String* AcceptBtnJoypadIconImagePath; // 0x0
		// static const ::System::String* AcceptBtnTextPath; // 0x0
		// static const ::System::String* LINK_ID_L1; // 0x0
		// static const ::System::String* LINK_ID_R1; // 0x0
		// static const ::System::String* BOLD_TEXT; // 0x0
		::MiHoYo::SDK::ProtocolWithJoypad_TipsVisbility tipsVisbility; // 0x58
		::UnityEngine::UI::Text* titleText; // 0x60
		::MiHoYo::SDK::ILinkImageText* descText; // 0x68
		::MiHoYo::SDK::IMaxHeightLayoutController* layoutController; // 0x70
		::UnityEngine::GameObject* joypadL1Tips; // 0x78
		::UnityEngine::GameObject* joypadR1Tips; // 0x80
		::UnityEngine::UI::Button* refuseButton; // 0x88
		::UnityEngine::UI::Button* acceptButton; // 0x90
		::UnityEngine::GameObject* refuseButtonJoypadIcon; // 0x98
		::UnityEngine::GameObject* acceptButtonJoypadIcon; // 0xA0
		::System::Action_1<::System::Boolean>* OnAccept; // 0xA8
		::System::Action_1<::System::Boolean>* OnRefuse; // 0xB0
		::System::Action_2<::System::String*, ::System::Boolean>* OnHrefButtonClicked; // 0xB8
		::System::String* highlightColor; // 0xC0
		::System::String* m_joypadType; // 0xC8
		::System::Boolean m_bJoypadExchange; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_HIDE_OFFSET))();
		}

		::System::Void SetTitle(::System::String* strTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_SETTITLE_OFFSET))(this, strTitle);
		}

		::System::Void SetButtonText(::System::String* strAcceptBtnText, ::System::String* strRefuseBtnText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_SETBUTTONTEXT_OFFSET))(this, strAcceptBtnText, strRefuseBtnText);
		}

		::System::Void SetHighlightColor(::System::String* strColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_SETHIGHLIGHTCOLOR_OFFSET))(this, strColor);
		}

		::System::Void SetContent(::System::String* strContent, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dictExternalLink)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_SETCONTENT_OFFSET))(this, strContent, dictExternalLink);
		}

		::System::Void SetJoyPadReadTips(::System::String* strL1Tips, ::System::String* strR1Tips)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_SETJOYPADREADTIPS_OFFSET))(this, strL1Tips, strR1Tips);
		}

		::System::Void SetJoypadStatus(::System::Boolean bEnable, ::System::Boolean bExchange, ::System::String* strType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_SETJOYPADSTATUS_OFFSET))(this, bEnable, bExchange, strType);
		}

		::System::Void UpdateComponentHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_UPDATECOMPONENTHEIGHT_OFFSET))(this);
		}

		::System::Void UpdateJoyPadIcon(::System::String* strJoypadType, ::System::Boolean bExchange)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_UPDATEJOYPADICON_OFFSET))(this, strJoypadType, bExchange);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_UPDATE_OFFSET))(this);
		}

		::System::Void ClickRefuseButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_CLICKREFUSEBUTTON_OFFSET))(this);
		}

		::System::Void ClickAcceptButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_CLICKACCEPTBUTTON_OFFSET))(this);
		}

		::System::Void OnHrefClick(::System::String* hrefName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_ONHREFCLICK_OFFSET))(this, hrefName);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLWITHJOYPAD_ONDESTROY_OFFSET))(this);
		}
	};
}
