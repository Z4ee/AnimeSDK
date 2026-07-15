#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONFIRMWITHTITLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x18890FC0)
#define MIHOYO_SDK_CONFIRMWITHTITLE_HIDE_OFFSET UNITYSDK_OFFSET(0x18891B20)
#define MIHOYO_SDK_CONFIRMWITHTITLE_ONTAPCANCEL_OFFSET UNITYSDK_OFFSET(0x18891B60)
#define MIHOYO_SDK_CONFIRMWITHTITLE_ONTAPCONFIRM_OFFSET UNITYSDK_OFFSET(0x18891BC0)
#define MIHOYO_SDK_CONFIRMWITHTITLE_SHOW_OFFSET UNITYSDK_OFFSET(0x188918F0)
#define MIHOYO_SDK_CONFIRMWITHTITLE_START_OFFSET UNITYSDK_OFFSET(0x18891690)
#define MIHOYO_SDK_CONFIRMWITHTITLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18891C30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfirmWithTitle_TypeDefinitionIndex = 7955;

	class ConfirmWithTitle : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::ConfirmWithTitle** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ConfirmWithTitle**)Il2CppClass::FromTypeDefinitionIndex(ConfirmWithTitle_TypeDefinitionIndex)->GetStaticField(0xFF00);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(ConfirmWithTitle_TypeDefinitionIndex)->GetStaticField(0xFF08);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* DialogPath; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* ContentTextPath; // 0x0
		// static const ::System::String* CancelBtnPath; // 0x0
		// static const ::System::String* CancelBtnTextPath; // 0x0
		// static const ::System::String* ConfirmBtnPath; // 0x0
		// static const ::System::String* ConfirmBtnTextPath; // 0x0
		::System::String* strTitleText; // 0x58
		::System::String* strContent; // 0x60
		::System::String* strConfirmBtnText; // 0x68
		::System::String* strCancelBtnText; // 0x70
		::System::Action* OnCancel; // 0x78
		::System::Action* OnConfirm; // 0x80
		::System::Boolean m_bAutoHide; // 0x88
		::UnityEngine::UI::Text* titleText; // 0x90
		::UnityEngine::UI::Text* contentText; // 0x98
		::UnityEngine::UI::Button* cancelButton; // 0xA0
		::UnityEngine::UI::Button* confirmButton; // 0xA8
		::UnityEngine::UI::Text* cancelText; // 0xB0
		::UnityEngine::UI::Text* confirmText; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHTITLE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHTITLE_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHTITLE_START_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Action* a5, ::System::Action* a6, ::System::Int32 a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action*, ::System::Action*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHTITLE_SHOW_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHTITLE_HIDE_OFFSET))();
		}

		::System::Void OnTapCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHTITLE_ONTAPCANCEL_OFFSET))(this);
		}

		::System::Void OnTapConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHTITLE_ONTAPCONFIRM_OFFSET))(this);
		}
	};
}
