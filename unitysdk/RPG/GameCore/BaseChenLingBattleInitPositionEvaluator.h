#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHENLINGBATTLEINITPOSITIONEVALUATOR_METHOD_2_1DCCCD49592605B6_OFFSET UNITYSDK_OFFSET(0x1B2E9D70)
#define RPG_GAMECORE_BASECHENLINGBATTLEINITPOSITIONEVALUATOR_METHOD_2_E03EB03FC1322D92_OFFSET UNITYSDK_OFFSET(0x1B2E9B00)
#define RPG_GAMECORE_BASECHENLINGBATTLEINITPOSITIONEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E9DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattleInitPositionEvaluator_TypeDefinitionIndex = 15579;

	class BaseChenLingBattleInitPositionEvaluator : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEINITPOSITIONEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E03EB03FC1322D92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEINITPOSITIONEVALUATOR_METHOD_2_E03EB03FC1322D92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_1DCCCD49592605B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEINITPOSITIONEVALUATOR_METHOD_2_1DCCCD49592605B6_OFFSET))(a1, a2);
		}
	};
}
