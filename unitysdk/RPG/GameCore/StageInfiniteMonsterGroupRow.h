#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEINFINITEMONSTERGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17768140)
#define RPG_GAMECORE_STAGEINFINITEMONSTERGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177682A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInfiniteMonsterGroupRow_TypeDefinitionIndex = 13899;

	class StageInfiniteMonsterGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x10
		::System::UInt32 InfiniteMonsterGroupID; // 0x18
		::System::UInt32 EliteGroup; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINFINITEMONSTERGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StageInfiniteMonsterGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageInfiniteMonsterGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINFINITEMONSTERGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
