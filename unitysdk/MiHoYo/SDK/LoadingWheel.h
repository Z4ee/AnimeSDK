#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class String; }

#define MIHOYO_SDK_LOADINGWHEEL_HIDEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BC90960)
#define MIHOYO_SDK_LOADINGWHEEL_HIDE_OFFSET UNITYSDK_OFFSET(0x1BC720C0)
#define MIHOYO_SDK_LOADINGWHEEL_SHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1BC90860)
#define MIHOYO_SDK_LOADINGWHEEL_SHOW_OFFSET UNITYSDK_OFFSET(0x1BC72360)
#define MIHOYO_SDK_LOADINGWHEEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC90A60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LoadingWheel_TypeDefinitionIndex = 20009;

	class LoadingWheel : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(LoadingWheel_TypeDefinitionIndex)->GetStaticField(0xB270);
		}
		// static const ::System::String* PrefabName; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL__CTOR_OFFSET))(this);
		}

		static ::System::Boolean ShowPluginUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL_SHOWPLUGINUI_OFFSET))();
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL_SHOW_OFFSET))();
		}

		static ::System::Boolean HidePluginUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL_HIDEPLUGINUI_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOADINGWHEEL_HIDE_OFFSET))();
		}
	};
}
