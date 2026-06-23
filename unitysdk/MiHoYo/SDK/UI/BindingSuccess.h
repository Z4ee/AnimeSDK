#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_BINDINGSUCCESS_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B341E90)
#define MIHOYO_SDK_UI_BINDINGSUCCESS_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B342970)
#define MIHOYO_SDK_UI_BINDINGSUCCESS_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1B342990)
#define MIHOYO_SDK_UI_BINDINGSUCCESS_HIDE_OFFSET UNITYSDK_OFFSET(0x1B342AA0)
#define MIHOYO_SDK_UI_BINDINGSUCCESS_SHOW_OFFSET UNITYSDK_OFFSET(0x1B3429B0)
#define MIHOYO_SDK_UI_BINDINGSUCCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B342B10)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int BindingSuccess_TypeDefinitionIndex = 20148;

	class BindingSuccess : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::BindingSuccess** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::BindingSuccess**)Il2CppClass::FromTypeDefinitionIndex(BindingSuccess_TypeDefinitionIndex)->GetStaticField(0x9E30);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* closeBtnPath; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* descTextPath; // 0x0
		// static const ::System::String* confirmBtnPath; // 0x0
		// static const ::System::String* confirmBtnTextPath; // 0x0
		::UnityEngine::UI::Text* titleText; // 0x58
		::UnityEngine::UI::Text* descText; // 0x60
		::UnityEngine::UI::Text* confirmBtnText; // 0x68
		::UnityEngine::UI::Button* closeBtn; // 0x70
		::UnityEngine::UI::Button* confirmBtn; // 0x78
		::System::String* channelNickname; // 0x80
		::System::String* hoyoNickname; // 0x88
		::System::Action* OnCloseBtnClicked; // 0x90
		::System::Action* OnConfirmBtnClicked; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGSUCCESS__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGSUCCESS_AWAKE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGSUCCESS_CLOSE_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGSUCCESS_CONFIRMDIALOG_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* channelAccount, ::System::String* hoyoAccount)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGSUCCESS_SHOW_OFFSET))(channelAccount, hoyoAccount);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGSUCCESS_HIDE_OFFSET))();
		}
	};
}
