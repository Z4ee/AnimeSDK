#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleAttributeName.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHATTRIBUTERANK_METHOD_3_5A62B5EF45517B2E_OFFSET UNITYSDK_OFFSET(0x187E7820)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHATTRIBUTERANK_METHOD_3_8F0D95823DFEB9CC_OFFSET UNITYSDK_OFFSET(0x187E77C0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHATTRIBUTERANK__CTOR_OFFSET UNITYSDK_OFFSET(0x187E7810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_WithAttributeRank_TypeDefinitionIndex = 14936;

	class ChenLingBattleTargetEvaluator_WithAttributeRank : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x10
		::RPG::GameCore::ChenLingBattleAttributeName AttributeName; // 0x14
		::System::Boolean IsDescending; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* Number; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHATTRIBUTERANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8F0D95823DFEB9CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHATTRIBUTERANK_METHOD_3_8F0D95823DFEB9CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A62B5EF45517B2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHATTRIBUTERANK_METHOD_3_5A62B5EF45517B2E_OFFSET))(a1, a2);
		}
	};
}
