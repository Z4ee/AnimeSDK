#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleInitPositionEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_BACK_METHOD_3_9047DCD8033A38AC_OFFSET UNITYSDK_OFFSET(0x187E44E0)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_BACK_METHOD_3_F3962536F48242C1_OFFSET UNITYSDK_OFFSET(0x187E4440)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_BACK__CTOR_OFFSET UNITYSDK_OFFSET(0x187E44D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleInitPositionEvaluator_Back_TypeDefinitionIndex = 14918;

	class ChenLingBattleInitPositionEvaluator_Back : public ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_BACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F3962536F48242C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Back*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Back*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_BACK_METHOD_3_F3962536F48242C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9047DCD8033A38AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Back* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Back*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_BACK_METHOD_3_9047DCD8033A38AC_OFFSET))(a1, a2);
		}
	};
}
