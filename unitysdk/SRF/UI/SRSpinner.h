#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Selectable.h"

namespace SRF::UI { class SRSpinner_SpinEvent; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define SRF_UI_SRSPINNER_GET_ONSPINDECREMENT_OFFSET UNITYSDK_OFFSET(0x184750C0)
#define SRF_UI_SRSPINNER_GET_ONSPININCREMENT_OFFSET UNITYSDK_OFFSET(0x184750A0)
#define SRF_UI_SRSPINNER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x184750E0)
#define SRF_UI_SRSPINNER_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x18475240)
#define SRF_UI_SRSPINNER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x184750F0)
#define SRF_UI_SRSPINNER_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x18475200)
#define SRF_UI_SRSPINNER_SET_ONSPINDECREMENT_OFFSET UNITYSDK_OFFSET(0x184750D0)
#define SRF_UI_SRSPINNER_SET_ONSPININCREMENT_OFFSET UNITYSDK_OFFSET(0x184750B0)
#define SRF_UI_SRSPINNER__CTOR_OFFSET UNITYSDK_OFFSET(0x18475280)

namespace SRF::UI
{
	inline static constexpr unsigned int SRSpinner_TypeDefinitionIndex = 27680;

	class SRSpinner : public ::UnityEngine::UI::Selectable
	{
	public:
		::System::Single _dragDelta; // 0x108
		::SRF::UI::SRSpinner_SpinEvent* _onSpinDecrement; // 0x110
		::SRF::UI::SRSpinner_SpinEvent* _onSpinIncrement; // 0x118
		::System::Single DragThreshold; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRSPINNER__CTOR_OFFSET))(this);
		}

		::SRF::UI::SRSpinner_SpinEvent* get_OnSpinIncrement()
		{
			return ((::SRF::UI::SRSpinner_SpinEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRSPINNER_GET_ONSPININCREMENT_OFFSET))(this);
		}

		::System::Void set_OnSpinIncrement(::SRF::UI::SRSpinner_SpinEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::UI::SRSpinner_SpinEvent*))((::PBYTE)hIl2Cpp + SRF_UI_SRSPINNER_SET_ONSPININCREMENT_OFFSET))(this, value);
		}

		::SRF::UI::SRSpinner_SpinEvent* get_OnSpinDecrement()
		{
			return ((::SRF::UI::SRSpinner_SpinEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRSPINNER_GET_ONSPINDECREMENT_OFFSET))(this);
		}

		::System::Void set_OnSpinDecrement(::SRF::UI::SRSpinner_SpinEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::UI::SRSpinner_SpinEvent*))((::PBYTE)hIl2Cpp + SRF_UI_SRSPINNER_SET_ONSPINDECREMENT_OFFSET))(this, value);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRSPINNER_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_SRSPINNER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnIncrement(::System::Int32 amount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRF_UI_SRSPINNER_ONINCREMENT_OFFSET))(this, amount);
		}

		::System::Void OnDecrement(::System::Int32 amount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRF_UI_SRSPINNER_ONDECREMENT_OFFSET))(this, amount);
		}
	};
}
