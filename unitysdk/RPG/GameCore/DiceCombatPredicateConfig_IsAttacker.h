#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER_METHOD_4_32015C2B300523BE_OFFSET UNITYSDK_OFFSET(0x18870320)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER_METHOD_4_AC0DBC0E841D84B0_OFFSET UNITYSDK_OFFSET(0x1886E4B0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1886E460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_IsAttacker_TypeDefinitionIndex = 15273;

	class DiceCombatPredicateConfig_IsAttacker : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_32015C2B300523BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER_METHOD_4_32015C2B300523BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AC0DBC0E841D84B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER_METHOD_4_AC0DBC0E841D84B0_OFFSET))(a1, a2);
		}
	};
}
