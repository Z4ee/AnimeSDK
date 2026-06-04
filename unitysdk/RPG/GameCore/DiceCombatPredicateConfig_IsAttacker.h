#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER_METHOD_4_B519913715840E90_OFFSET UNITYSDK_OFFSET(0x196AF100)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER_METHOD_4_F617AECF70825622_OFFSET UNITYSDK_OFFSET(0x196AD290)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x196AD240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_IsAttacker_TypeDefinitionIndex = 15332;

	class DiceCombatPredicateConfig_IsAttacker : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B519913715840E90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER_METHOD_4_B519913715840E90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F617AECF70825622(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER_METHOD_4_F617AECF70825622_OFFSET))(a1, a2);
		}
	};
}
