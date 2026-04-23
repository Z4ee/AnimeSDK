#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTENEMYDIFFICULTYLVCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189A91B0)
#define RPG_GAMECORE_GRIDFIGHTENEMYDIFFICULTYLVCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189A9560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEnemyDifficultyLvConfigRow_TypeDefinitionIndex = 12910;

	class GridFightEnemyDifficultyLvConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AttackRatio; // 0x10
		::RPG::GameCore::FixPoint StanceRatio; // 0x18
		::RPG::GameCore::FixPoint DefenceRatio; // 0x20
		::System::UInt32 EnemyDifficultyLevel; // 0x28
		::System::UInt32 ChapterID; // 0x2C
		::RPG::GameCore::FixPoint SpeedRatio; // 0x30
		::RPG::GameCore::FixPoint HPRatio; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTENEMYDIFFICULTYLVCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTENEMYDIFFICULTYLVCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
