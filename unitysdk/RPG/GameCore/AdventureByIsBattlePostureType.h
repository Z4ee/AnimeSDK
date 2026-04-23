#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattlePostureType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_METHOD_4_A5D82A43A570235F_OFFSET UNITYSDK_OFFSET(0x1866EEB0)
#define RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_METHOD_4_CB850505568C4A81_OFFSET UNITYSDK_OFFSET(0x1866EDE0)
#define RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1866EE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsBattlePostureType_TypeDefinitionIndex = 20667;

	class AdventureByIsBattlePostureType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::BattlePostureType PostureType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CB850505568C4A81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsBattlePostureType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsBattlePostureType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_METHOD_4_CB850505568C4A81_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A5D82A43A570235F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsBattlePostureType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsBattlePostureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_METHOD_4_A5D82A43A570235F_OFFSET))(a1, a2);
		}
	};
}
