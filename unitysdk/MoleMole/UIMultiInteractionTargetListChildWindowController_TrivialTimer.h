#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_CHECKFINISH_OFFSET UNITYSDK_OFFSET(0x817270)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_KILL_OFFSET UNITYSDK_OFFSET(0x817190)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_RESET_OFFSET UNITYSDK_OFFSET(0x8171E0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_SETCURTIME_OFFSET UNITYSDK_OFFSET(0x817260)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x817250)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x817170)

namespace MoleMole
{
	inline static constexpr unsigned int UIMultiInteractionTargetListChildWindowController_TrivialTimer_TypeDefinitionIndex = 84188;

	struct alignas(8) UIMultiInteractionTargetListChildWindowController_TrivialTimer
	{
		::System::Single _startTime; // 0x10
		::System::Single _nowTime; // 0x14
		::System::Single _duration; // 0x18
		::System::Boolean _finished; // 0x1C
		::System::Action* _callback; // 0x20

		::System::Void _ctor(::System::Single nowTime, ::System::Single duration, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER__CTOR_OFFSET))(this, nowTime, duration, callback);
		}

		::System::Void Kill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_KILL_OFFSET))(this);
		}

		::System::Void Reset(::System::Single time, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_RESET_OFFSET))(this, time, callback);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void SetCurTime(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_SETCURTIME_OFFSET))(this, time);
		}

		::System::Void CheckFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_CHECKFINISH_OFFSET))(this);
		}
	};
}
