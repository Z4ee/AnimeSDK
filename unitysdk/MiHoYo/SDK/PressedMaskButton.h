#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_PRESSEDMASKBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1BAA24A0)
#define MIHOYO_SDK_PRESSEDMASKBUTTON_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1BAA2580)
#define MIHOYO_SDK_PRESSEDMASKBUTTON_START_OFFSET UNITYSDK_OFFSET(0x1BAA2070)
#define MIHOYO_SDK_PRESSEDMASKBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA2660)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PressedMaskButton_TypeDefinitionIndex = 7970;

	class PressedMaskButton : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Text* buttonText; // 0x18
		::UnityEngine::GameObject* buttonImageMaskObj; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDMASKBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDMASKBUTTON_START_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDMASKBUTTON_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDMASKBUTTON_ONPOINTERUP_OFFSET))(this, a1);
		}
	};
}
