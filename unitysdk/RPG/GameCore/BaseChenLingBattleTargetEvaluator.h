#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHENLINGBATTLETARGETEVALUATOR_METHOD_2_7B5539A683631E0E_OFFSET UNITYSDK_OFFSET(0x1A3DE350)
#define RPG_GAMECORE_BASECHENLINGBATTLETARGETEVALUATOR_METHOD_2_A2E2AEE1E7FE990A_OFFSET UNITYSDK_OFFSET(0x1A3DDC80)
#define RPG_GAMECORE_BASECHENLINGBATTLETARGETEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3DE3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattleTargetEvaluator_TypeDefinitionIndex = 15149;

	class BaseChenLingBattleTargetEvaluator : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLETARGETEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A2E2AEE1E7FE990A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLETARGETEVALUATOR_METHOD_2_A2E2AEE1E7FE990A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_7B5539A683631E0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLETARGETEVALUATOR_METHOD_2_7B5539A683631E0E_OFFSET))(a1, a2);
		}
	};
}
