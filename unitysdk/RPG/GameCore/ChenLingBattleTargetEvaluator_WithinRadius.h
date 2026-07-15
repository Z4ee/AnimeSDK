#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHINRADIUS_METHOD_3_8398B2BD6C1253F6_OFFSET UNITYSDK_OFFSET(0x1C37F750)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHINRADIUS_METHOD_3_A1F542D149D2FC48_OFFSET UNITYSDK_OFFSET(0x1C37F6E0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHINRADIUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37F740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_WithinRadius_TypeDefinitionIndex = 15154;

	class ChenLingBattleTargetEvaluator_WithinRadius : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Radius; // 0x18
		::System::Boolean IsAffectByOwnerScale; // 0x20
		::System::Boolean IntersectWithTargetCollsion; // 0x21
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHINRADIUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A1F542D149D2FC48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHINRADIUS_METHOD_3_A1F542D149D2FC48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8398B2BD6C1253F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHINRADIUS_METHOD_3_8398B2BD6C1253F6_OFFSET))(a1, a2);
		}
	};
}
