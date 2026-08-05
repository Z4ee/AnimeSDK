#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_1A39E1B51756BF41;
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoDigitConfig; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_TIMER_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x8AEB30)
#define MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_TIMER_SETTIME_OFFSET UNITYSDK_OFFSET(0x8AEB90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventureChildWindowController_Timer_TypeDefinitionIndex = 63985;

	struct alignas(8) UIGrandMarcelAdventureChildWindowController_Timer
	{
		::UnityEngine::GameObject* Root; // 0x10
		::Class_2_1A39E1B51756BF41* MinuteHigh; // 0x18
		::Class_2_1A39E1B51756BF41* MinuteLow; // 0x20
		::Class_2_1A39E1B51756BF41* SecondHigh; // 0x28
		::Class_2_1A39E1B51756BF41* SecondLow; // 0x30

		::System::Void SafeSetActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_TIMER_SAFESETACTIVE_OFFSET))(this, value);
		}

		::System::Void SetTime(::System::Int32 seconds, ::MoleMole::MiniGame::BangbooPartyGame::MonoDigitConfig* monoDigit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::MiniGame::BangbooPartyGame::MonoDigitConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER_TIMER_SETTIME_OFFSET))(this, seconds, monoDigit);
		}
	};
}
