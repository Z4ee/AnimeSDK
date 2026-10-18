#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4EA1942B65BA5BD4;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEINVASIONROGUEMONSTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAE2080)
#define RPG_GAMECORE_STAGEINVASIONROGUEMONSTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE2220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionRogueMonsterRow_TypeDefinitionIndex = 15162;

	class StageInvasionRogueMonsterRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_4EA1942B65BA5BD4*>* MonsterInvasionList; // 0x10
		::System::UInt32 StageID; // 0x18
		::System::UInt32 RogueMonsterID; // 0x1C
		::System::UInt32 InvasionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONROGUEMONSTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageInvasionRogueMonsterRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageInvasionRogueMonsterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONROGUEMONSTERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
