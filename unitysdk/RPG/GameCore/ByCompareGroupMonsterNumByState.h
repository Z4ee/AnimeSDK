#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE_METHOD_4_BF42AABF1BFD0B53_OFFSET UNITYSDK_OFFSET(0x1700AA00)
#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE_METHOD_4_D8A8CC0788E23D9A_OFFSET UNITYSDK_OFFSET(0x1700A930)
#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1700A9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGroupMonsterNumByState_TypeDefinitionIndex = 19459;

	class ByCompareGroupMonsterNumByState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D8A8CC0788E23D9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupMonsterNumByState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupMonsterNumByState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE_METHOD_4_D8A8CC0788E23D9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BF42AABF1BFD0B53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupMonsterNumByState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupMonsterNumByState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE_METHOD_4_BF42AABF1BFD0B53_OFFSET))(a1, a2);
		}
	};
}
