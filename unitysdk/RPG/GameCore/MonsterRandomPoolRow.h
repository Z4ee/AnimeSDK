#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERRANDOMPOOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE6E040)
#define RPG_GAMECORE_MONSTERRANDOMPOOLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6E1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterRandomPoolRow_TypeDefinitionIndex = 14088;

	class MonsterRandomPoolRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MinionPool; // 0x10
		::Il2CppArray<::System::UInt32>* ElitePool; // 0x18
		::System::UInt32 RandomPoolID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRANDOMPOOLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterRandomPoolRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterRandomPoolRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRANDOMPOOLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
