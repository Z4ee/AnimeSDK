#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class ILinkImageText; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_PROTOCOL_AWAKE_OFFSET UNITYSDK_OFFSET(0x183FC8B0)
#define MIHOYO_SDK_PROTOCOL_CLICKACCEPTBUTTON_OFFSET UNITYSDK_OFFSET(0x183FD950)
#define MIHOYO_SDK_PROTOCOL_CLICKREFUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x183FD810)
#define MIHOYO_SDK_PROTOCOL_HIDE_OFFSET UNITYSDK_OFFSET(0x183FC840)
#define MIHOYO_SDK_PROTOCOL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x183FDAC0)
#define MIHOYO_SDK_PROTOCOL_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x183FD970)
#define MIHOYO_SDK_PROTOCOL_SHOW_1_OFFSET UNITYSDK_OFFSET(0x183FC740)
#define MIHOYO_SDK_PROTOCOL_SHOW_OFFSET UNITYSDK_OFFSET(0x183FC640)
#define MIHOYO_SDK_PROTOCOL_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x183FCE40)
#define MIHOYO_SDK_PROTOCOL__CLICKREFUSEBUTTON_B__33_0_OFFSET UNITYSDK_OFFSET(0x183FDB30)
#define MIHOYO_SDK_PROTOCOL__CTOR_OFFSET UNITYSDK_OFFSET(0x183FDAE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Protocol_TypeDefinitionIndex = 8188;

	class Protocol : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Protocol** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Protocol**)Il2CppClass::FromTypeDefinitionIndex(Protocol_TypeDefinitionIndex)->GetStaticField(0x123B0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* UserAgreementBtnPath; // 0x0
		// static const ::System::String* PrivacyBtnPath; // 0x0
		// static const ::System::String* RefuseBtnPath; // 0x0
		// static const ::System::String* AcceptBtnPath; // 0x0
		// static const ::System::String* TitlePath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* RefuseBtnTextPath; // 0x0
		// static const ::System::String* AcceptBtnTextPath; // 0x0
		// static const ::System::String* LINK_ID_USERAGREEMENT; // 0x0
		// static const ::System::String* LINK_ID_PRIVACY; // 0x0
		// static const ::System::String* LINK_ID_MINORS; // 0x0
		// static const ::System::String* LINK_ID_THIRDPRIVACY; // 0x0
		::UnityEngine::UI::Button* refuseButton; // 0x58
		::UnityEngine::UI::Button* acceptButton; // 0x60
		::UnityEngine::GameObject* descTextObject; // 0x68
		::UnityEngine::UI::Text* titleText; // 0x70
		::MiHoYo::SDK::ILinkImageText* descText; // 0x78
		::System::Action* OnAccept; // 0x80
		::System::Action* OnRefuse; // 0x88
		::System::Action* OnRefuseCompleted; // 0x90
		::System::Action* OnUserAgreement; // 0x98
		::System::Action* OnUserPrivacy; // 0xA0
		::System::Action* OnTeenagerUserAgreement; // 0xA8
		::System::Action* OnThirdPrivacy; // 0xB0
		::System::Boolean isUpdate; // 0xB8
		::System::String* m_strTitle; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_SHOW_OFFSET))(a1);
		}

		static ::System::Void Show_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_SHOW_1_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_UPDATETEXT_OFFSET))(this);
		}

		::System::Void ClickRefuseButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_CLICKREFUSEBUTTON_OFFSET))(this);
		}

		::System::Void ClickAcceptButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_CLICKACCEPTBUTTON_OFFSET))(this);
		}

		::System::Void OnHrefClick(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_ONHREFCLICK_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL_ONDESTROY_OFFSET))(this);
		}

		::System::Void _ClickRefuseButton_b__33_0(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOL__CLICKREFUSEBUTTON_B__33_0_OFFSET))(this, a1);
		}
	};
}
