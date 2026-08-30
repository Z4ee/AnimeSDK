#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE_METHOD_4_BF42AABF1BFD0B53_OFFSET UNITYSDK_OFFSET(0x1CEC9870)
#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE_METHOD_4_C80BEEB98FE78B8F_OFFSET UNITYSDK_OFFSET(0x1CEC9820)
#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC9860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGroupMonsterNumByState_TypeDefinitionIndex = 20915;

	class ByCompareGroupMonsterNumByState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C80BEEB98FE78B8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupMonsterNumByState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupMonsterNumByState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE_METHOD_4_C80BEEB98FE78B8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BF42AABF1BFD0B53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupMonsterNumByState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupMonsterNumByState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE_METHOD_4_BF42AABF1BFD0B53_OFFSET))(a1, a2);
		}
	};
}
