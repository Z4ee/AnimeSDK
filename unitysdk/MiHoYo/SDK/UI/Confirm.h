#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace MiHoYo::SDK::UI { class Confirm_OnConfirmDelegate; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_CONFIRM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1843D960)
#define MIHOYO_SDK_UI_CONFIRM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1843ED00)
#define MIHOYO_SDK_UI_CONFIRM_HIDE_OFFSET UNITYSDK_OFFSET(0x1843EA90)
#define MIHOYO_SDK_UI_CONFIRM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1843EEA0)
#define MIHOYO_SDK_UI_CONFIRM_ONTAPCANCEL_OFFSET UNITYSDK_OFFSET(0x1843EDC0)
#define MIHOYO_SDK_UI_CONFIRM_ONTAPOK_OFFSET UNITYSDK_OFFSET(0x1843EE30)
#define MIHOYO_SDK_UI_CONFIRM_SHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1843DFC0)
#define MIHOYO_SDK_UI_CONFIRM_SHOW_OFFSET UNITYSDK_OFFSET(0x1843E610)
#define MIHOYO_SDK_UI_CONFIRM_START_OFFSET UNITYSDK_OFFSET(0x1843DF40)
#define MIHOYO_SDK_UI_CONFIRM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1843EF70)
#define MIHOYO_SDK_UI_CONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x1843EF30)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Confirm_TypeDefinitionIndex = 8325;

	class Confirm : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_sm_hideTask()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Confirm_TypeDefinitionIndex)->GetStaticField(0x23880);
		}
		static ::MiHoYo::SDK::UI::Confirm** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::Confirm**)Il2CppClass::FromTypeDefinitionIndex(Confirm_TypeDefinitionIndex)->GetStaticField(0x23888);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(Confirm_TypeDefinitionIndex)->GetStaticField(0x23890);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* ContentTextPath; // 0x0
		// static const ::System::String* CancelButtonPath; // 0x0
		// static const ::System::String* CancelTextPath; // 0x0
		// static const ::System::String* OKButtonPath; // 0x0
		// static const ::System::String* OKTextPath; // 0x0
		::System::String* content; // 0x58
		::System::String* okTitle; // 0x60
		::System::String* cancelTitle; // 0x68
		::MiHoYo::SDK::UI::Confirm_OnConfirmDelegate* OnConfirmResult; // 0x70
		::MiHoYo::SDK::UI::Confirm_ConfirmResult result; // 0x78
		::UnityEngine::UI::Button* cancelButton; // 0x80
		::UnityEngine::UI::Button* okButton; // 0x88
		::UnityEngine::UI::Text* contentText; // 0x90
		::UnityEngine::UI::Text* okText; // 0x98
		::UnityEngine::UI::Text* cancelText; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_START_OFFSET))(this);
		}

		static ::System::Boolean ShowPluginUI(::System::String* a1, ::System::String* a2, ::System::String* a3, ::MiHoYo::SDK::UI::Confirm_OnConfirmDelegate* a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::UI::Confirm_OnConfirmDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_SHOWPLUGINUI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Show(::System::String* a1, ::System::String* a2, ::System::String* a3, ::MiHoYo::SDK::UI::Confirm_OnConfirmDelegate* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::UI::Confirm_OnConfirmDelegate*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_SHOW_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_HIDE_OFFSET))();
		}

		static ::System::Void Close()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_CLOSE_OFFSET))();
		}

		::System::Void OnTapCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_ONTAPCANCEL_OFFSET))(this);
		}

		::System::Void OnTapOk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_ONTAPOK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_ONDESTROY_OFFSET))(this);
		}
	};
}
