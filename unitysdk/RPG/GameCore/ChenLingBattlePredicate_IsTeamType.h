#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattlePredicate.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }

#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_ISTEAMTYPE_METHOD_3_22685F6E7095F344_OFFSET UNITYSDK_OFFSET(0x170803B0)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_ISTEAMTYPE_METHOD_3_D63926613485D238_OFFSET UNITYSDK_OFFSET(0x17080410)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_ISTEAMTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x17080400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattlePredicate_IsTeamType_TypeDefinitionIndex = 14506;

	class ChenLingBattlePredicate_IsTeamType : public ::RPG::GameCore::BaseChenLingBattlePredicate
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x10
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_ISTEAMTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22685F6E7095F344(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattlePredicate_IsTeamType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattlePredicate_IsTeamType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_ISTEAMTYPE_METHOD_3_22685F6E7095F344_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D63926613485D238(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattlePredicate_IsTeamType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattlePredicate_IsTeamType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_ISTEAMTYPE_METHOD_3_D63926613485D238_OFFSET))(a1, a2);
		}
	};
}
