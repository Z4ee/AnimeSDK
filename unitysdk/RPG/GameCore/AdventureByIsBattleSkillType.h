#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_0E5D77B248BC52D4_OFFSET UNITYSDK_OFFSET(0x1866F100)
#define RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_6AA4D2737211964A_OFFSET UNITYSDK_OFFSET(0x1866F030)
#define RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1866F0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsBattleSkillType_TypeDefinitionIndex = 20668;

	class AdventureByIsBattleSkillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6AA4D2737211964A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsBattleSkillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsBattleSkillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_6AA4D2737211964A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0E5D77B248BC52D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsBattleSkillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsBattleSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLESKILLTYPE_METHOD_4_0E5D77B248BC52D4_OFFSET))(a1, a2);
		}
	};
}
