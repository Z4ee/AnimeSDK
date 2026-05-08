#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYCOMBATPAUSEPREPARECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x123F5A80)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityCombatPausePrepareContext_TypeDefinitionIndex = 46561;

	class ActivityCombatPausePrepareContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 QuestID; // 0x28
		::System::Int32 ActivityID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCOMBATPAUSEPREPARECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
