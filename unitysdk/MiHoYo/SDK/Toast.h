#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_TOAST_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BAD9850)
#define MIHOYO_SDK_TOAST_DELAYHIDE_OFFSET UNITYSDK_OFFSET(0x1BADA240)
#define MIHOYO_SDK_TOAST_HIDE_OFFSET UNITYSDK_OFFSET(0x1BAD9F10)
#define MIHOYO_SDK_TOAST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BADA180)
#define MIHOYO_SDK_TOAST_SHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BAD99E0)
#define MIHOYO_SDK_TOAST_SHOW_OFFSET UNITYSDK_OFFSET(0x1BAC4F90)
#define MIHOYO_SDK_TOAST_START_OFFSET UNITYSDK_OFFSET(0x1BAD9940)
#define MIHOYO_SDK_TOAST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BADA350)
#define MIHOYO_SDK_TOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BADA310)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Toast_TypeDefinitionIndex = 8185;

	class Toast : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(Toast_TypeDefinitionIndex)->GetStaticField(0x26B20);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_sm_autoHideTask()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Toast_TypeDefinitionIndex)->GetStaticField(0x26B28);
		}
		// static const ::System::String* PrefabName; // 0x0
		::System::String* content; // 0x58
		::UnityEngine::UI::Text* contentText; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_START_OFFSET))(this);
		}

		static ::System::Boolean ShowPluginUI(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_SHOWPLUGINUI_OFFSET))(a1, a2);
		}

		static ::System::Void Show(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_SHOW_OFFSET))(a1, a2);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_HIDE_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_ONENABLE_OFFSET))(this);
		}

		::System::Void DelayHide(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_DELAYHIDE_OFFSET))(this, a1);
		}
	};
}
