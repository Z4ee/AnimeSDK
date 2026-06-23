#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYCOMBATPAUSEPREPARECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C47DC0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityCombatPausePrepareContext_TypeDefinitionIndex = 64703;

	class ActivityCombatPausePrepareContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ActivityID; // 0x28
		::System::Int32 QuestID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCOMBATPAUSEPREPARECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
