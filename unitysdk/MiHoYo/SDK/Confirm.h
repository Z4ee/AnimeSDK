#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class Confirm_OnConfirmDelegate; }
namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONFIRM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BA6A450)
#define MIHOYO_SDK_CONFIRM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1BA6B740)
#define MIHOYO_SDK_CONFIRM_HIDE_OFFSET UNITYSDK_OFFSET(0x1BA6B4C0)
#define MIHOYO_SDK_CONFIRM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BA6B9D0)
#define MIHOYO_SDK_CONFIRM_ONTAPCANCEL_OFFSET UNITYSDK_OFFSET(0x1BA6B8F0)
#define MIHOYO_SDK_CONFIRM_ONTAPOK_OFFSET UNITYSDK_OFFSET(0x1BA6B960)
#define MIHOYO_SDK_CONFIRM_SHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BA6AB80)
#define MIHOYO_SDK_CONFIRM_SHOW_OFFSET UNITYSDK_OFFSET(0x1BA6B060)
#define MIHOYO_SDK_CONFIRM_START_OFFSET UNITYSDK_OFFSET(0x1BA6AB00)
#define MIHOYO_SDK_CONFIRM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA6BD40)
#define MIHOYO_SDK_CONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA6BD30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Confirm_TypeDefinitionIndex = 19995;

	class Confirm : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Confirm** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Confirm**)Il2CppClass::FromTypeDefinitionIndex(Confirm_TypeDefinitionIndex)->GetStaticField(0xA0D0);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_sm_hideTask()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Confirm_TypeDefinitionIndex)->GetStaticField(0xA0D8);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(Confirm_TypeDefinitionIndex)->GetStaticField(0xA0E0);
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
		::MiHoYo::SDK::Confirm_OnConfirmDelegate* OnConfirmResult; // 0x70
		::MiHoYo::SDK::Confirm_ConfirmResult result; // 0x78
		::UnityEngine::UI::Button* cancelButton; // 0x80
		::UnityEngine::UI::Button* okButton; // 0x88
		::UnityEngine::UI::Text* contentText; // 0x90
		::UnityEngine::UI::Text* okText; // 0x98
		::UnityEngine::UI::Text* cancelText; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_START_OFFSET))(this);
		}

		static ::System::Boolean ShowPluginUI(::System::String* content, ::System::String* okTitle, ::System::String* cancelTitle, ::MiHoYo::SDK::Confirm_OnConfirmDelegate* callback)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::Confirm_OnConfirmDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_SHOWPLUGINUI_OFFSET))(content, okTitle, cancelTitle, callback);
		}

		static ::System::Void Show(::System::String* content, ::System::String* okButton, ::System::String* cancelButton, ::MiHoYo::SDK::Confirm_OnConfirmDelegate* callback, ::System::Int32 priority, ::System::Boolean bIsDisablePluginUI)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::Confirm_OnConfirmDelegate*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_SHOW_OFFSET))(content, okButton, cancelButton, callback, priority, bIsDisablePluginUI);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_HIDE_OFFSET))();
		}

		static ::System::Void Close()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_CLOSE_OFFSET))();
		}

		::System::Void OnTapCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_ONTAPCANCEL_OFFSET))(this);
		}

		::System::Void OnTapOk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_ONTAPOK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_ONDESTROY_OFFSET))(this);
		}
	};
}
