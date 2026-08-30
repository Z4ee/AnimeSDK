#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class ILinkImageText; }
namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }

#define MIHOYO_SDK_PROTOCOLCONFIRM_AWAKE_OFFSET UNITYSDK_OFFSET(0x19EAA220)
#define MIHOYO_SDK_PROTOCOLCONFIRM_CLICKACCEPTBUTTON_OFFSET UNITYSDK_OFFSET(0x19EAAD40)
#define MIHOYO_SDK_PROTOCOLCONFIRM_CLICKREFUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x19EAAD20)
#define MIHOYO_SDK_PROTOCOLCONFIRM_HIDE_OFFSET UNITYSDK_OFFSET(0x19EAA1F0)
#define MIHOYO_SDK_PROTOCOLCONFIRM_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x19EAAD00)
#define MIHOYO_SDK_PROTOCOLCONFIRM_SHOW_OFFSET UNITYSDK_OFFSET(0x19EAA090)
#define MIHOYO_SDK_PROTOCOLCONFIRM_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x19EAA6B0)
#define MIHOYO_SDK_PROTOCOLCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x19EAAD60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolConfirm_TypeDefinitionIndex = 7982;

	class ProtocolConfirm : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(ProtocolConfirm_TypeDefinitionIndex)->GetStaticField(0x1B5A0);
		}
		static ::MiHoYo::SDK::ProtocolConfirm** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ProtocolConfirm**)Il2CppClass::FromTypeDefinitionIndex(ProtocolConfirm_TypeDefinitionIndex)->GetStaticField(0x1B5A8);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* UserAgreementBtnPath; // 0x0
		// static const ::System::String* PrivacyBtnPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* RefuseBtnPath; // 0x0
		// static const ::System::String* AcceptBtnPath; // 0x0
		// static const ::System::String* RefuseBtnTextPath; // 0x0
		// static const ::System::String* AcceptBtnTextPath; // 0x0
		// static const ::System::String* LINK_ID_USERAGREEMENT; // 0x0
		// static const ::System::String* LINK_ID_PRIVACY; // 0x0
		::UnityEngine::UI::Button* refuseButton; // 0x58
		::UnityEngine::UI::Button* acceptButton; // 0x60
		::UnityEngine::GameObject* descTextObject; // 0x68
		::MiHoYo::SDK::ILinkImageText* descText; // 0x70
		::System::Action* OnAccept; // 0x78
		::System::Action* OnRefuse; // 0x80
		::System::Action_1<::System::String*>* OnHrefButtonClicked; // 0x88
		::System::String* noticeContent; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_UPDATETEXT_OFFSET))(this);
		}

		::System::Void OnHrefClick(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_ONHREFCLICK_OFFSET))(this, a1);
		}

		::System::Void ClickRefuseButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_CLICKREFUSEBUTTON_OFFSET))(this);
		}

		::System::Void ClickAcceptButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM_CLICKACCEPTBUTTON_OFFSET))(this);
		}
	};
}
