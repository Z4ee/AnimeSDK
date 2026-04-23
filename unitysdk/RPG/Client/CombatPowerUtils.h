#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_COMBATPOWERUTILS_GETMONSTERCOMBATPOWERRATIO_OFFSET UNITYSDK_OFFSET(0xA0B1560)

namespace RPG::Client
{
	inline static constexpr unsigned int CombatPowerUtils_TypeDefinitionIndex = 57665;

	class CombatPowerUtils : public ::System::Object
	{
	public:
		static ::System::Single GetMonsterCombatPowerRatio(::System::UInt32 stageID)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMBATPOWERUTILS_GETMONSTERCOMBATPOWERRATIO_OFFSET))(stageID);
		}
	};
}
