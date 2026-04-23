#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_UI_OTHER_FLOATOVERELEMENT_COPY_OFFSET UNITYSDK_OFFSET(0x19E956E0)
#define SRDEBUGGER_UI_OTHER_FLOATOVERELEMENT_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x19E95D70)
#define SRDEBUGGER_UI_OTHER_FLOATOVERELEMENT_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x19E95D80)
#define SRDEBUGGER_UI_OTHER_FLOATOVERELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E95D90)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int FloatOverElement_TypeDefinitionIndex = 35371;

	class FloatOverElement : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::RectTransform* CopyFrom; // 0x18
		::UnityEngine::DrivenRectTransformTracker _tracker; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_FLOATOVERELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void Copy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_FLOATOVERELEMENT_COPY_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_FLOATOVERELEMENT_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_FLOATOVERELEMENT_SETLAYOUTVERTICAL_OFFSET))(this);
		}
	};
}
