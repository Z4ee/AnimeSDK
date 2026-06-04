#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICDIFFICULTYDROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B449B0)
#define RPG_GAMECORE_ROGUEMAGICDIFFICULTYDROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B44B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicDifficultyDropRow_TypeDefinitionIndex = 14119;

	class RogueMagicDifficultyDropRow : public ::System::Object
	{
	public:
		::System::UInt32 WorldLevel; // 0x10
		::System::UInt32 AreaID; // 0x14
		::System::UInt32 MonsterEliteDropDisplayID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICDIFFICULTYDROPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicDifficultyDropRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicDifficultyDropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICDIFFICULTYDROPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
