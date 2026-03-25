#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_PRESSEDTEXTBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x15FBE4C0)
#define MIHOYO_SDK_PRESSEDTEXTBUTTON_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x15FBE530)
#define MIHOYO_SDK_PRESSEDTEXTBUTTON_START_OFFSET UNITYSDK_OFFSET(0x15FBE3A0)
#define MIHOYO_SDK_PRESSEDTEXTBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBE5A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PressedTextButton_TypeDefinitionIndex = 7008;

	class PressedTextButton : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Color normalColor; // 0x18
		::UnityEngine::Color pressedColor; // 0x28
		::UnityEngine::UI::Text* buttonText; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDTEXTBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDTEXTBUTTON_START_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDTEXTBUTTON_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESSEDTEXTBUTTON_ONPOINTERUP_OFFSET))(this, eventData);
		}
	};
}
