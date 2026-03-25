#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_UI_OTHER_FLOATOVERELEMENT_COPY_OFFSET UNITYSDK_OFFSET(0x1845A8F0)
#define SRDEBUGGER_UI_OTHER_FLOATOVERELEMENT_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1845AF80)
#define SRDEBUGGER_UI_OTHER_FLOATOVERELEMENT_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1845AF90)
#define SRDEBUGGER_UI_OTHER_FLOATOVERELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1845AFA0)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int FloatOverElement_TypeDefinitionIndex = 29651;

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
