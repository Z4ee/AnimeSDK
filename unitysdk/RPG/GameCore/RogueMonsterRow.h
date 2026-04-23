#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMonsterDropType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMONSTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D48210)
#define RPG_GAMECORE_ROGUEMONSTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D49690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMonsterRow_TypeDefinitionIndex = 13885;

	class RogueMonsterRow : public ::System::Object
	{
	public:
		::System::UInt32 NpcMonsterID; // 0x10
		::System::UInt32 EventID; // 0x14
		::System::UInt32 RogueMonsterID; // 0x18
		::RPG::GameCore::RogueMonsterDropType MonsterDropType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMonsterRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMonsterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
