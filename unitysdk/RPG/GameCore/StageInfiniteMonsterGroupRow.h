#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEINFINITEMONSTERGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B0B0160)
#define RPG_GAMECORE_STAGEINFINITEMONSTERGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B02B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInfiniteMonsterGroupRow_TypeDefinitionIndex = 14563;

	class StageInfiniteMonsterGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x10
		::System::UInt32 EliteGroup; // 0x18
		::System::UInt32 InfiniteMonsterGroupID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINFINITEMONSTERGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageInfiniteMonsterGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageInfiniteMonsterGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINFINITEMONSTERGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
