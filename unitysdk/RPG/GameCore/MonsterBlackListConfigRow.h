#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERBLACKLISTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2CC4F0)
#define RPG_GAMECORE_MONSTERBLACKLISTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2CC610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterBlackListConfigRow_TypeDefinitionIndex = 12793;

	class MonsterBlackListConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Rank; // 0x10
		::System::UInt32 MonsterID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERBLACKLISTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterBlackListConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterBlackListConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERBLACKLISTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
