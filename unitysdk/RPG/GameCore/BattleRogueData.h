#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleRogueMagicData; }
namespace RPG::GameCore { class BattleRogueTournData; }

#define RPG_GAMECORE_BATTLEROGUEDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xA88D030)
#define RPG_GAMECORE_BATTLEROGUEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA88D120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleRogueData_TypeDefinitionIndex = 45145;

	class BattleRogueData : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleRogueMagicData* MagicData; // 0x10
		::RPG::GameCore::BattleRogueTournData* TournData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::BattleRogueData* DeepClone()
		{
			return ((::RPG::GameCore::BattleRogueData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEDATA_DEEPCLONE_OFFSET))(this);
		}
	};
}
