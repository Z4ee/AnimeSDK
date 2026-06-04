#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Graphic; }

#define SRF_UI_FLASHGRAPHIC_FLASHANDHOLDUNTILNEXTPRESS_OFFSET UNITYSDK_OFFSET(0x1AD215B0)
#define SRF_UI_FLASHGRAPHIC_FLASH_OFFSET UNITYSDK_OFFSET(0x1AD21520)
#define SRF_UI_FLASHGRAPHIC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AD214C0)
#define SRF_UI_FLASHGRAPHIC_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1AD21410)
#define SRF_UI_FLASHGRAPHIC_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1AD21460)
#define SRF_UI_FLASHGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD21600)

namespace SRF::UI
{
	inline static constexpr unsigned int FlashGraphic_TypeDefinitionIndex = 33573;

	class FlashGraphic : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Single DecayTime; // 0x18
		::UnityEngine::Color DefaultColor; // 0x1C
		::UnityEngine::Color FlashColor; // 0x2C
		::UnityEngine::UI::Graphic* Target; // 0x40
		::System::Boolean _isHoldingUntilNextPress; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_FLASHGRAPHIC__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_FLASHGRAPHIC_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_FLASHGRAPHIC_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_FLASHGRAPHIC_ONENABLE_OFFSET))(this);
		}

		::System::Void Flash()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_FLASHGRAPHIC_FLASH_OFFSET))(this);
		}

		::System::Void FlashAndHoldUntilNextPress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_FLASHGRAPHIC_FLASHANDHOLDUNTILNEXTPRESS_OFFSET))(this);
		}
	};
}
