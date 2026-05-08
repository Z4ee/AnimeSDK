#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MIHOYO_SDK_TOOLTIP_HIDE_OFFSET UNITYSDK_OFFSET(0x19461EB0)
#define MIHOYO_SDK_TOOLTIP_SHOW_OFFSET UNITYSDK_OFFSET(0x19461C70)
#define MIHOYO_SDK_TOOLTIP_START_OFFSET UNITYSDK_OFFSET(0x194615C0)
#define MIHOYO_SDK_TOOLTIP_UPDATEOFFSET_OFFSET UNITYSDK_OFFSET(0x19461880)
#define MIHOYO_SDK_TOOLTIP_UPDATE_OFFSET UNITYSDK_OFFSET(0x19461AF0)
#define MIHOYO_SDK_TOOLTIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19462000)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Tooltip_TypeDefinitionIndex = 18883;

	class Tooltip : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(Tooltip_TypeDefinitionIndex)->GetStaticField(0x9F30);
		}
		// static const ::System::Int32 TOOLTIP_OFFSET = 0x2; // 0x0
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* TextControlPath; // 0x0
		::System::String* Text; // 0x58
		::UnityEngine::RectTransform* OwnerTransform; // 0x60
		::System::Boolean NeedPositionUpdating; // 0x68
		::System::Single tooltipRectHeight; // 0x6C
		::UnityEngine::RectTransform* selfTransform; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP_START_OFFSET))(this);
		}

		::System::Void UpdateOffSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP_UPDATEOFFSET_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP_UPDATE_OFFSET))(this);
		}

		static ::System::Void Show(::UnityEngine::RectTransform* ownerTransform, ::System::String* content)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP_SHOW_OFFSET))(ownerTransform, content);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP_HIDE_OFFSET))();
		}
	};
}
