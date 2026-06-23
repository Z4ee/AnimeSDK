#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_05BF65C41833FF20.h"
#include "unitysdk/MoleMole/UIActivityCombatPausePageController_PageState.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYCOMBATPAUSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11079BF0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityCombatPauseContext_TypeDefinitionIndex = 68284;

	class ActivityCombatPauseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 activityID; // 0x28
		::System::Int32 questID; // 0x2C
		::Class_4_01F9221F8B6A9296_Enum_3_05BF65C41833FF20 activityBattleType; // 0x30
		::MoleMole::UIActivityCombatPausePageController_PageState pageState; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCOMBATPAUSECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
