#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT_METHOD_4_1227512C515ABA89_OFFSET UNITYSDK_OFFSET(0x1886B600)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT_METHOD_4_37E38C08337CC53A_OFFSET UNITYSDK_OFFSET(0x1886F7D0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1886B5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint_TypeDefinitionIndex = 15277;

	class DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_37E38C08337CC53A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT_METHOD_4_37E38C08337CC53A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1227512C515ABA89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT_METHOD_4_1227512C515ABA89_OFFSET))(a1, a2);
		}
	};
}
