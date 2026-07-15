#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/InputField.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define SRF_UI_SRNUMBERSPINNER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CEDCF00)
#define SRF_UI_SRNUMBERSPINNER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1CEDD1F0)
#define SRF_UI_SRNUMBERSPINNER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1CEDD4C0)
#define SRF_UI_SRNUMBERSPINNER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1CEDD690)
#define SRF_UI_SRNUMBERSPINNER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1CEDD070)
#define SRF_UI_SRNUMBERSPINNER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1CEDD1D0)
#define SRF_UI_SRNUMBERSPINNER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1CEDD1E0)
#define SRF_UI_SRNUMBERSPINNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDD730)

namespace SRF::UI
{
	inline static constexpr unsigned int SRNumberSpinner_TypeDefinitionIndex = 33955;

	class SRNumberSpinner : public ::UnityEngine::UI::InputField
	{
	public:
		::System::Double _currentValue; // 0x240
		::System::Double _dragStartAmount; // 0x248
		::System::Double _dragStep; // 0x250
		::System::Single DragSensitivity; // 0x258
		::System::Double MaxValue; // 0x260
		::System::Double MinValue; // 0x268

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERSPINNER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERSPINNER_AWAKE_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERSPINNER_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERSPINNER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERSPINNER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERSPINNER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERSPINNER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERSPINNER_ONENDDRAG_OFFSET))(this, a1);
		}
	};
}
