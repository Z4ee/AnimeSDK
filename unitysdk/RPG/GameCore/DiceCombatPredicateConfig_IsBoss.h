#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS_METHOD_4_341A0B8F3E6EA339_OFFSET UNITYSDK_OFFSET(0x1D033480)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS_METHOD_4_6E58652D7E2AD280_OFFSET UNITYSDK_OFFSET(0x1D031EB0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D031EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_IsBoss_TypeDefinitionIndex = 15935;

	class DiceCombatPredicateConfig_IsBoss : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_341A0B8F3E6EA339(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS_METHOD_4_341A0B8F3E6EA339_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6E58652D7E2AD280(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS_METHOD_4_6E58652D7E2AD280_OFFSET))(a1, a2);
		}
	};
}
