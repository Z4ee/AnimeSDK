#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT_UIEVENTINNEREVENT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x88F3A0)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT_UIEVENTINNEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x4F2F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmClickPageController_UIEvent_UIEventInnerEvent_TypeDefinitionIndex = 87489;

	struct alignas(8) UIActivityRhythmClickPageController_UIEvent_UIEventInnerEvent
	{
		::System::Single TriggerTimeStamp; // 0x10
		::System::Action* TriggerEvent; // 0x18

		::System::Void _ctor(::System::Single timeStamp, ::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT_UIEVENTINNEREVENT__CTOR_OFFSET))(this, timeStamp, action);
		}

		::System::Int32 CompareTo(::MoleMole::UIActivityRhythmClickPageController_UIEvent_UIEventInnerEvent other)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIActivityRhythmClickPageController_UIEvent_UIEventInnerEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT_UIEVENTINNEREVENT_COMPARETO_OFFSET))(this, other);
		}
	};
}
