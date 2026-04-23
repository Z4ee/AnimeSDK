#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleInitPositionEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_MIDDLE_METHOD_3_492FAF37DB438BA7_OFFSET UNITYSDK_OFFSET(0x187E4740)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_MIDDLE_METHOD_3_E161DFCCEC26BB36_OFFSET UNITYSDK_OFFSET(0x187E47E0)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_MIDDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x187E47D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleInitPositionEvaluator_Middle_TypeDefinitionIndex = 14917;

	class ChenLingBattleInitPositionEvaluator_Middle : public ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_MIDDLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_492FAF37DB438BA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Middle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Middle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_MIDDLE_METHOD_3_492FAF37DB438BA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E161DFCCEC26BB36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Middle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Middle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_MIDDLE_METHOD_3_E161DFCCEC26BB36_OFFSET))(a1, a2);
		}
	};
}
