#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVBYISELITEMONSTER_METHOD_4_7EB9179B438D3085_OFFSET UNITYSDK_OFFSET(0x18649600)
#define RPG_GAMECORE_ADVBYISELITEMONSTER_METHOD_4_9D8271B0F7D7BCE3_OFFSET UNITYSDK_OFFSET(0x18649530)
#define RPG_GAMECORE_ADVBYISELITEMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x186495B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByIsEliteMonster_TypeDefinitionIndex = 20664;

	class AdvByIsEliteMonster : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISELITEMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9D8271B0F7D7BCE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByIsEliteMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByIsEliteMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISELITEMONSTER_METHOD_4_9D8271B0F7D7BCE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7EB9179B438D3085(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByIsEliteMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByIsEliteMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISELITEMONSTER_METHOD_4_7EB9179B438D3085_OFFSET))(a1, a2);
		}
	};
}
