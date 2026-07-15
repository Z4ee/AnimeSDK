#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT_METHOD_4_442FC20162D44F9B_OFFSET UNITYSDK_OFFSET(0x1C112740)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT_METHOD_4_8359766D5A823EC5_OFFSET UNITYSDK_OFFSET(0x1C116110)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C112730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint_TypeDefinitionIndex = 15500;

	class DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8359766D5A823EC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT_METHOD_4_8359766D5A823EC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_442FC20162D44F9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT_METHOD_4_442FC20162D44F9B_OFFSET))(a1, a2);
		}
	};
}
