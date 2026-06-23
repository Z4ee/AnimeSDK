#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C582CB0)
#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_CONFIRM_OFFSET UNITYSDK_OFFSET(0x1C583490)
#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_HIDE_OFFSET UNITYSDK_OFFSET(0x1C583470)
#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C5834D0)
#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_SHOW_OFFSET UNITYSDK_OFFSET(0x1C583240)
#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5834F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAlertWithTitle_TypeDefinitionIndex = 21051;

	class OverseaAlertWithTitle : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(OverseaAlertWithTitle_TypeDefinitionIndex)->GetStaticField(0xAF90);
		}
		static ::MiHoYo::SDK::Win::OverseaAlertWithTitle** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::OverseaAlertWithTitle**)Il2CppClass::FromTypeDefinitionIndex(OverseaAlertWithTitle_TypeDefinitionIndex)->GetStaticField(0xAF98);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* titlePath; // 0x0
		// static const ::System::String* contentPath; // 0x0
		// static const ::System::String* confirmBtnPath; // 0x0
		// static const ::System::String* confirmBtnTextPath; // 0x0
		::UnityEngine::UI::Text* title; // 0x58
		::UnityEngine::UI::Text* content; // 0x60
		::UnityEngine::UI::Button* confirmBtn; // 0x68
		::UnityEngine::UI::Text* confirmBtnText; // 0x70
		::System::Action* OnConfirm; // 0x78
		::System::String* titleText; // 0x80
		::System::String* contentText; // 0x88
		::System::String* confirmTitle; // 0x90
		::System::String* cancelTitle; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_AWAKE_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* title, ::System::String* content, ::System::String* confirmButtonText, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_SHOW_OFFSET))(title, content, confirmButtonText, priority);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_HIDE_OFFSET))();
		}

		::System::Void Confirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_CONFIRM_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE_ONDESTROY_OFFSET))(this);
		}
	};
}
