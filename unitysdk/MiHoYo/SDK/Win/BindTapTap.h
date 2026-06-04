#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_BINDTAPTAP_AWAKE_OFFSET UNITYSDK_OFFSET(0x18486EA0)
#define MIHOYO_SDK_WIN_BINDTAPTAP_BIND_OFFSET UNITYSDK_OFFSET(0x18487570)
#define MIHOYO_SDK_WIN_BINDTAPTAP_HIDE_OFFSET UNITYSDK_OFFSET(0x184803F0)
#define MIHOYO_SDK_WIN_BINDTAPTAP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x184875B0)
#define MIHOYO_SDK_WIN_BINDTAPTAP_REGISTER_OFFSET UNITYSDK_OFFSET(0x18487590)
#define MIHOYO_SDK_WIN_BINDTAPTAP_SHOW_OFFSET UNITYSDK_OFFSET(0x1847CB90)
#define MIHOYO_SDK_WIN_BINDTAPTAP_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x18487470)
#define MIHOYO_SDK_WIN_BINDTAPTAP__CTOR_OFFSET UNITYSDK_OFFSET(0x184875D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindTapTap_TypeDefinitionIndex = 9159;

	class BindTapTap : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::BindTapTap** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::BindTapTap**)Il2CppClass::FromTypeDefinitionIndex(BindTapTap_TypeDefinitionIndex)->GetStaticField(0x26180);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* BindButtonPath; // 0x0
		// static const ::System::String* RegisterButtonPath; // 0x0
		// static const ::System::String* BindTapTapTipsTextPath; // 0x0
		// static const ::System::String* BindButtonTextPath; // 0x0
		// static const ::System::String* RegisterButtonTextPath; // 0x0
		::UnityEngine::UI::Button* bindButton; // 0x58
		::UnityEngine::UI::Button* registerButton; // 0x60
		::UnityEngine::UI::Text* tipsText; // 0x68
		::UnityEngine::UI::Text* bindButtonText; // 0x70
		::UnityEngine::UI::Text* registerButtonText; // 0x78
		::System::Action* OnBind; // 0x80
		::System::Action* OnRegister; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_UPDATETEXT_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_BIND_OFFSET))(this);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_REGISTER_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_ONDESTROY_OFFSET))(this);
		}
	};
}
