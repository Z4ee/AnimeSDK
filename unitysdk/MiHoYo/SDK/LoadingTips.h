#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_LOADINGTIPS_AWAKE_OFFSET UNITYSDK_OFFSET(0x197E23D0)
#define MIHOYO_SDK_LOADINGTIPS_DELAYHIDE_OFFSET UNITYSDK_OFFSET(0x197E2AC0)
#define MIHOYO_SDK_LOADINGTIPS_HIDEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x197E2570)
#define MIHOYO_SDK_LOADINGTIPS_HIDE_OFFSET UNITYSDK_OFFSET(0x197E2940)
#define MIHOYO_SDK_LOADINGTIPS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x197E2AB0)
#define MIHOYO_SDK_LOADINGTIPS_SET_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0x197E2390)
#define MIHOYO_SDK_LOADINGTIPS_SHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x197E2670)
#define MIHOYO_SDK_LOADINGTIPS_SHOW_OFFSET UNITYSDK_OFFSET(0x197E2810)
#define MIHOYO_SDK_LOADINGTIPS_START_OFFSET UNITYSDK_OFFSET(0x197E2540)
#define MIHOYO_SDK_LOADINGTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x197E2B70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LoadingTips_TypeDefinitionIndex = 19109;

	class LoadingTips : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(LoadingTips_TypeDefinitionIndex)->GetStaticField(0xB090);
		}
		// static const ::System::String* PrefabName; // 0x0
		::System::String* tips; // 0x58
		::UnityEngine::UI::Text* textLabel; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS__CTOR_OFFSET))(this);
		}

		::System::Void set_showText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_SET_SHOWTEXT_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_START_OFFSET))(this);
		}

		static ::System::Boolean HidePluginUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_HIDEPLUGINUI_OFFSET))();
		}

		static ::System::Boolean ShowPluginUI(::System::String* tips)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_SHOWPLUGINUI_OFFSET))(tips);
		}

		static ::System::Void Show(::System::String* tips, ::System::Single showTime)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_SHOW_OFFSET))(tips, showTime);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_HIDE_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_ONENABLE_OFFSET))(this);
		}

		::System::Void DelayHide(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGTIPS_DELAYHIDE_OFFSET))(this, time);
		}
	};
}
