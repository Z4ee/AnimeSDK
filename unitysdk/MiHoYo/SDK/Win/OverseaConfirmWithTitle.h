#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x161082F0)
#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_CANCEL_OFFSET UNITYSDK_OFFSET(0x16108A60)
#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_CONFIRM_OFFSET UNITYSDK_OFFSET(0x16108A40)
#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_HIDE_OFFSET UNITYSDK_OFFSET(0x16103B20)
#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16108AD0)
#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_SHOW_OFFSET UNITYSDK_OFFSET(0x16102800)
#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16108B10)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaConfirmWithTitle_TypeDefinitionIndex = 7917;

	class OverseaConfirmWithTitle : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(OverseaConfirmWithTitle_TypeDefinitionIndex)->GetStaticField(0x13700);
		}
		static ::MiHoYo::SDK::Win::OverseaConfirmWithTitle** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::OverseaConfirmWithTitle**)Il2CppClass::FromTypeDefinitionIndex(OverseaConfirmWithTitle_TypeDefinitionIndex)->GetStaticField(0x13708);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* titlePath; // 0x0
		// static const ::System::String* contentPath; // 0x0
		// static const ::System::String* cancelBtnPath; // 0x0
		// static const ::System::String* cancelBtnTextPath; // 0x0
		// static const ::System::String* confirmBtnPath; // 0x0
		// static const ::System::String* confirmBtnTextPath; // 0x0
		::UnityEngine::UI::Text* title; // 0x58
		::UnityEngine::UI::Text* content; // 0x60
		::UnityEngine::UI::Button* cancelBtn; // 0x68
		::UnityEngine::UI::Button* confirmBtn; // 0x70
		::UnityEngine::UI::Text* confirmBtnText; // 0x78
		::UnityEngine::UI::Text* cancelBtnText; // 0x80
		::System::Action* OnCancel; // 0x88
		::System::Action* OnConfirm; // 0x90
		::System::String* titleText; // 0x98
		::System::String* contentText; // 0xA0
		::System::String* confirmTitle; // 0xA8
		::System::String* cancelTitle; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_AWAKE_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* title, ::System::String* content, ::System::String* confirmButtonText, ::System::String* cancelButtonText, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_SHOW_OFFSET))(title, content, confirmButtonText, cancelButtonText, priority);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_HIDE_OFFSET))();
		}

		::System::Void Confirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_CONFIRM_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_CANCEL_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE_ONDESTROY_OFFSET))(this);
		}
	};
}
