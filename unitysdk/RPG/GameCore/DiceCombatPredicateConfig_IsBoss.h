#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS_METHOD_4_0D1F1AA7A6A14236_OFFSET UNITYSDK_OFFSET(0x196AF190)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS_METHOD_4_6E58652D7E2AD280_OFFSET UNITYSDK_OFFSET(0x196AD480)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS__CTOR_OFFSET UNITYSDK_OFFSET(0x196AD430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_IsBoss_TypeDefinitionIndex = 15334;

	class DiceCombatPredicateConfig_IsBoss : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0D1F1AA7A6A14236(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS_METHOD_4_0D1F1AA7A6A14236_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6E58652D7E2AD280(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS_METHOD_4_6E58652D7E2AD280_OFFSET))(a1, a2);
		}
	};
}
