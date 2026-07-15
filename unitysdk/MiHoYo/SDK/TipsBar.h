#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_TIPSBAR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1712E960)
#define MIHOYO_SDK_TIPSBAR_DELAYHIDE_OFFSET UNITYSDK_OFFSET(0x1712F780)
#define MIHOYO_SDK_TIPSBAR_HIDE_OFFSET UNITYSDK_OFFSET(0x1712F690)
#define MIHOYO_SDK_TIPSBAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1712F850)
#define MIHOYO_SDK_TIPSBAR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1712F6C0)
#define MIHOYO_SDK_TIPSBAR_SHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1712ECF0)
#define MIHOYO_SDK_TIPSBAR_SHOW_OFFSET UNITYSDK_OFFSET(0x1712F4F0)
#define MIHOYO_SDK_TIPSBAR_START_OFFSET UNITYSDK_OFFSET(0x1712EB90)
#define MIHOYO_SDK_TIPSBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1712F8C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TipsBar_TypeDefinitionIndex = 8182;

	class TipsBar : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(TipsBar_TypeDefinitionIndex)->GetStaticField(0x277B0);
		}
		// static const ::System::String* PrefabName; // 0x0
		::System::String* imageName; // 0x58
		::System::String* content; // 0x60
		::UnityEngine::Coroutine* hideCoroutine; // 0x68
		::UnityEngine::UI::Image* image; // 0x70
		::UnityEngine::UI::Text* contentText; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_START_OFFSET))(this);
		}

		static ::System::Boolean ShowPluginUI(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_SHOWPLUGINUI_OFFSET))(a1, a2);
		}

		static ::System::Void Show(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_SHOW_OFFSET))(a1, a2);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_HIDE_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_ONENABLE_OFFSET))(this);
		}

		::System::Void DelayHide(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_DELAYHIDE_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_ONDESTROY_OFFSET))(this);
		}
	};
}
