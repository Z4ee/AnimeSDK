#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_KILLEDENEMY_METHOD_3_1D6DF2D29B0E0CE2_OFFSET UNITYSDK_OFFSET(0x17081A00)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_KILLEDENEMY_METHOD_3_BB6247D173E65363_OFFSET UNITYSDK_OFFSET(0x17081960)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_KILLEDENEMY__CTOR_OFFSET UNITYSDK_OFFSET(0x170819F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_KilledEnemy_TypeDefinitionIndex = 14463;

	class ChenLingBattleTargetEvaluator_KilledEnemy : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_KILLEDENEMY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB6247D173E65363(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_KilledEnemy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_KilledEnemy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_KILLEDENEMY_METHOD_3_BB6247D173E65363_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D6DF2D29B0E0CE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_KilledEnemy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_KilledEnemy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_KILLEDENEMY_METHOD_3_1D6DF2D29B0E0CE2_OFFSET))(a1, a2);
		}
	};
}
