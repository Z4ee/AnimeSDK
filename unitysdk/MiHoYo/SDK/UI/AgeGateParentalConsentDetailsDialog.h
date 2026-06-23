#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BB556B0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_GET_ONBACK_OFFSET UNITYSDK_OFFSET(0x1BB55690)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1BB56560)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1BB565F0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_SET_ONBACK_OFFSET UNITYSDK_OFFSET(0x1BB556A0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1BB56430)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1BB56190)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB56610)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AgeGateParentalConsentDetailsDialog_TypeDefinitionIndex = 20138;

	class AgeGateParentalConsentDetailsDialog : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::AgeGateParentalConsentDetailsDialog**)Il2CppClass::FromTypeDefinitionIndex(AgeGateParentalConsentDetailsDialog_TypeDefinitionIndex)->GetStaticField(0x95E0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* subTitleTextPath; // 0x0
		// static const ::System::String* backBtnPath; // 0x0
		// static const ::System::String* parentTitlePath; // 0x0
		// static const ::System::String* parentContent1Path; // 0x0
		// static const ::System::String* parentContent2Path; // 0x0
		// static const ::System::String* parentContent3Path; // 0x0
		// static const ::System::String* userTitlePath; // 0x0
		// static const ::System::String* userContentPath; // 0x0
		::UnityEngine::UI::Button* backBtn; // 0x58
		::UnityEngine::UI::Text* title; // 0x60
		::UnityEngine::UI::Text* subTitle; // 0x68
		::UnityEngine::UI::Text* parentTitle; // 0x70
		::UnityEngine::UI::Text* parentContent1; // 0x78
		::UnityEngine::UI::Text* parentContent2; // 0x80
		::UnityEngine::UI::Text* parentContent3; // 0x88
		::UnityEngine::UI::Text* userTitle; // 0x90
		::UnityEngine::UI::Text* userContent; // 0x98
		::System::Action* _OnBack_k__BackingField; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnBack()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_GET_ONBACK_OFFSET))(this);
		}

		::System::Void set_OnBack(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_SET_ONBACK_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_UPDATETEXT_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_HIDE_OFFSET))();
		}

		::System::Void OnBackBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDETAILSDIALOG_ONBACKBTNCLICK_OFFSET))(this);
		}
	};
}
