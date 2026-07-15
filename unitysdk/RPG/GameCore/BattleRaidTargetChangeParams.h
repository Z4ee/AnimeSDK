#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BATTLERAIDTARGETCHANGEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x12172B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleRaidTargetChangeParams_TypeDefinitionIndex = 55949;

	class BattleRaidTargetChangeParams : public ::System::Object
	{
	public:
		::System::UInt32 RaidTargetID; // 0x10
		::System::Int32 CurrentProgress; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLERAIDTARGETCHANGEPARAMS__CTOR_OFFSET))(this);
		}
	};
}
