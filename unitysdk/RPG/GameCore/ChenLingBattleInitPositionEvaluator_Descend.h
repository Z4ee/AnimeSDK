#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleInitPositionEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_DESCEND_METHOD_3_1C38BF54D54F8559_OFFSET UNITYSDK_OFFSET(0x187E45E0)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_DESCEND_METHOD_3_41D386E30E0E3184_OFFSET UNITYSDK_OFFSET(0x187E4540)
#define RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_DESCEND__CTOR_OFFSET UNITYSDK_OFFSET(0x187E45D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleInitPositionEvaluator_Descend_TypeDefinitionIndex = 14921;

	class ChenLingBattleInitPositionEvaluator_Descend : public ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_DESCEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_41D386E30E0E3184(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Descend*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Descend*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_DESCEND_METHOD_3_41D386E30E0E3184_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1C38BF54D54F8559(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Descend* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleInitPositionEvaluator_Descend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEINITPOSITIONEVALUATOR_DESCEND_METHOD_3_1C38BF54D54F8559_OFFSET))(a1, a2);
		}
	};
}
