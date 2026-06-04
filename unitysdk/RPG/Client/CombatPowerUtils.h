#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_COMBATPOWERUTILS_GETMONSTERCOMBATPOWERRATIO_OFFSET UNITYSDK_OFFSET(0xB6EEF40)

namespace RPG::Client
{
	inline static constexpr unsigned int CombatPowerUtils_TypeDefinitionIndex = 58456;

	class CombatPowerUtils : public ::System::Object
	{
	public:
		static ::System::Single GetMonsterCombatPowerRatio(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMBATPOWERUTILS_GETMONSTERCOMBATPOWERRATIO_OFFSET))(a1);
		}
	};
}
