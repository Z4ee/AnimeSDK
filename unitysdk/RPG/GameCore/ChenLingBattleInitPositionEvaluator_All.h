#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleInitPositionEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ALL_METHOD_3_0E8DFDDB02A8F8EF_OFFSET UNITYSDK_OFFSET(0x196218B0)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ALL_METHOD_3_AA84CF7CF03D37FE_OFFSET UNITYSDK_OFFSET(0x19621950)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ALL__CTOR_OFFSET UNITYSDK_OFFSET(0x19621940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleInitPositionEvaluator_All_TypeDefinitionIndex = 14982;

	class ChenLingBattleInitPositionEvaluator_All : public ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ALL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E8DFDDB02A8F8EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_All*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_All*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ALL_METHOD_3_0E8DFDDB02A8F8EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA84CF7CF03D37FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_All* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_All*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ALL_METHOD_3_AA84CF7CF03D37FE_OFFSET))(a1, a2);
		}
	};
}
