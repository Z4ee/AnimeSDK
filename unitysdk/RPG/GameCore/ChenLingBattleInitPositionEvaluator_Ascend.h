#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleInitPositionEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ASCEND_METHOD_3_3E0D779ACC19F617_OFFSET UNITYSDK_OFFSET(0x1C37C390)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ASCEND_METHOD_3_A34093599AA068A6_OFFSET UNITYSDK_OFFSET(0x1C37C2F0)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ASCEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37C380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleInitPositionEvaluator_Ascend_TypeDefinitionIndex = 15147;

	class ChenLingBattleInitPositionEvaluator_Ascend : public ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ASCEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A34093599AA068A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Ascend*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Ascend*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ASCEND_METHOD_3_A34093599AA068A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3E0D779ACC19F617(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Ascend* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Ascend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_ASCEND_METHOD_3_3E0D779ACC19F617_OFFSET))(a1, a2);
		}
	};
}
