#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BATTLEROGUETOURNDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xA88D330)
#define RPG_GAMECORE_BATTLEROGUETOURNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA88D860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleRogueTournData_TypeDefinitionIndex = 45150;

	class BattleRogueTournData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournMode TournMode; // 0x10
		::System::UInt32 StyleLevel; // 0x14
		::RPG::GameCore::FixPoint DifficultyRatio; // 0x18
		::System::UInt32 StyleID; // 0x20
		::System::UInt32 StyleExp; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUETOURNDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::BattleRogueTournData* DeepClone()
		{
			return ((::RPG::GameCore::BattleRogueTournData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUETOURNDATA_DEEPCLONE_OFFSET))(this);
		}
	};
}
