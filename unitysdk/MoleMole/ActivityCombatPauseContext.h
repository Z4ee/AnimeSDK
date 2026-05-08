#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_05BF65C41833FF20.h"
#include "unitysdk/MoleMole/UIActivityCombatPausePageController_PageState.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYCOMBATPAUSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF95A9E0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityCombatPauseContext_TypeDefinitionIndex = 42004;

	class ActivityCombatPauseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIActivityCombatPausePageController_PageState pageState; // 0x28
		::Class_4_01F9221F8B6A9296_Enum_3_05BF65C41833FF20 activityBattleType; // 0x2C
		::System::Int32 questID; // 0x30
		::System::Int32 activityID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCOMBATPAUSECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
