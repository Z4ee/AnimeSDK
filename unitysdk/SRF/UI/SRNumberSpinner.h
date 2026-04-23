#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/InputField.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define SRF_UI_SRNUMBERSPINNER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19EAF710)
#define SRF_UI_SRNUMBERSPINNER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x19EAFA30)
#define SRF_UI_SRNUMBERSPINNER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x19EAFCF0)
#define SRF_UI_SRNUMBERSPINNER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x19EAFEF0)
#define SRF_UI_SRNUMBERSPINNER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x19EAF880)
#define SRF_UI_SRNUMBERSPINNER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x19EAFA10)
#define SRF_UI_SRNUMBERSPINNER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x19EAFA20)
#define SRF_UI_SRNUMBERSPINNER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EAFF90)

namespace SRF::UI
{
	inline static constexpr unsigned int SRNumberSpinner_TypeDefinitionIndex = 33302;

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

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERSPINNER_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERSPINNER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERSPINNER_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERSPINNER_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERSPINNER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRNUMBERSPINNER_ONENDDRAG_OFFSET))(this, eventData);
		}
	};
}
