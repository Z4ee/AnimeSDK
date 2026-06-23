#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_ALERTWITHTITLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B5AF820)
#define MIHOYO_SDK_ALERTWITHTITLE_HIDE_OFFSET UNITYSDK_OFFSET(0x1B5B0090)
#define MIHOYO_SDK_ALERTWITHTITLE_ONTAPCONFIRM_OFFSET UNITYSDK_OFFSET(0x1B5B00D0)
#define MIHOYO_SDK_ALERTWITHTITLE_SHOW_OFFSET UNITYSDK_OFFSET(0x1B5AFDD0)
#define MIHOYO_SDK_ALERTWITHTITLE_START_OFFSET UNITYSDK_OFFSET(0x1B5AFD50)
#define MIHOYO_SDK_ALERTWITHTITLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B0130)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AlertWithTitle_TypeDefinitionIndex = 19757;

	class AlertWithTitle : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::AlertWithTitle** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::AlertWithTitle**)Il2CppClass::FromTypeDefinitionIndex(AlertWithTitle_TypeDefinitionIndex)->GetStaticField(0xA0A0);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(AlertWithTitle_TypeDefinitionIndex)->GetStaticField(0xA0A8);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* DialogPath; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* ContentTextPath; // 0x0
		// static const ::System::String* ConfirmBtnPath; // 0x0
		// static const ::System::String* ConfirmBtnTextPath; // 0x0
		::System::String* strTitleText; // 0x58
		::System::String* strContent; // 0x60
		::System::String* strConfirmBtnText; // 0x68
		::System::Action* OnConfirm; // 0x70
		::System::Boolean m_bAutoHide; // 0x78
		::UnityEngine::UI::Text* titleText; // 0x80
		::UnityEngine::UI::Text* contentText; // 0x88
		::UnityEngine::UI::Button* confirmButton; // 0x90
		::UnityEngine::UI::Text* confirmText; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTWITHTITLE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTWITHTITLE_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTWITHTITLE_START_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* titleText, ::System::String* contentText, ::System::String* confirmButtonText, ::System::Action* confirmCallback, ::System::Int32 priority, ::System::Boolean bAutoHide)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Action*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTWITHTITLE_SHOW_OFFSET))(titleText, contentText, confirmButtonText, confirmCallback, priority, bAutoHide);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTWITHTITLE_HIDE_OFFSET))();
		}

		::System::Void OnTapConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTWITHTITLE_ONTAPCONFIRM_OFFSET))(this);
		}
	};
}
