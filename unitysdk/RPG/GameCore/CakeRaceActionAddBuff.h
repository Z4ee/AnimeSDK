#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }
namespace RPG::GameCore { class CakeRaceBuffConfig; }

#define RPG_GAMECORE_CAKERACEACTIONADDBUFF_METHOD_3_43207A52B475162D_OFFSET UNITYSDK_OFFSET(0x195E3F70)
#define RPG_GAMECORE_CAKERACEACTIONADDBUFF_METHOD_3_92FEF29ACB880746_OFFSET UNITYSDK_OFFSET(0x195E3FE0)
#define RPG_GAMECORE_CAKERACEACTIONADDBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x195E3FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionAddBuff_TypeDefinitionIndex = 17428;

	class CakeRaceActionAddBuff : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeRaceBuffConfig*>* AddBuffs; // 0x10
		::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* TargetSelector; // 0x18
		::RPG::GameCore::CakeRaceBasePredicateConfig* Predicate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONADDBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_43207A52B475162D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionAddBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionAddBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONADDBUFF_METHOD_3_43207A52B475162D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_92FEF29ACB880746(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionAddBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionAddBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONADDBUFF_METHOD_3_92FEF29ACB880746_OFFSET))(a1, a2);
		}
	};
}
