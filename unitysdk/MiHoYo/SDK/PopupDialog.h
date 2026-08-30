#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PopupDialog_SelectedResult.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class PopupDialog_OnSelectedDelegate; }
namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_POPUPDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BAA0CC0)
#define MIHOYO_SDK_POPUPDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1BAA1980)
#define MIHOYO_SDK_POPUPDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BAA1D40)
#define MIHOYO_SDK_POPUPDIALOG_ONTAPBOTTOM_OFFSET UNITYSDK_OFFSET(0x1BAA1CD0)
#define MIHOYO_SDK_POPUPDIALOG_ONTAPCLOSE_OFFSET UNITYSDK_OFFSET(0x1BAA1BF0)
#define MIHOYO_SDK_POPUPDIALOG_ONTAPTOP_OFFSET UNITYSDK_OFFSET(0x1BAA1C60)
#define MIHOYO_SDK_POPUPDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1BAA15F0)
#define MIHOYO_SDK_POPUPDIALOG_START_OFFSET UNITYSDK_OFFSET(0x1BAA1430)
#define MIHOYO_SDK_POPUPDIALOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAA1DC0)
#define MIHOYO_SDK_POPUPDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA1D70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopupDialog_TypeDefinitionIndex = 7965;

	class PopupDialog : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(PopupDialog_TypeDefinitionIndex)->GetStaticField(0x24290);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_PopupDialogHideTaskList()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(PopupDialog_TypeDefinitionIndex)->GetStaticField(0x24298);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* ContentTextPath; // 0x0
		// static const ::System::String* TopButtonPath; // 0x0
		// static const ::System::String* TopButtonTextPath; // 0x0
		// static const ::System::String* BottomButtonPath; // 0x0
		// static const ::System::String* BottomButtonTextPath; // 0x0
		::System::String* content; // 0x58
		::System::String* topButtonTitle; // 0x60
		::System::String* bottomButtonTitle; // 0x68
		::MiHoYo::SDK::PopupDialog_OnSelectedDelegate* OnSelected; // 0x70
		::MiHoYo::SDK::PopupDialog_SelectedResult result; // 0x78
		::System::Boolean isShowTopButton; // 0x7C
		::UnityEngine::UI::Button* closeButton; // 0x80
		::UnityEngine::UI::Text* contentText; // 0x88
		::UnityEngine::UI::Button* topButton; // 0x90
		::UnityEngine::UI::Text* topButtonText; // 0x98
		::UnityEngine::UI::Button* bottomButton; // 0xA0
		::UnityEngine::UI::Text* bottomButtonText; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_START_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::MiHoYo::SDK::PopupDialog_OnSelectedDelegate* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::MiHoYo::SDK::PopupDialog_OnSelectedDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_SHOW_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_HIDE_OFFSET))();
		}

		::System::Void OnTapClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_ONTAPCLOSE_OFFSET))(this);
		}

		::System::Void OnTapTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_ONTAPTOP_OFFSET))(this);
		}

		::System::Void OnTapBottom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_ONTAPBOTTOM_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_ONDESTROY_OFFSET))(this);
		}
	};
}
