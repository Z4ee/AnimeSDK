#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE_METHOD_4_3FCB8A56B7D10165_OFFSET UNITYSDK_OFFSET(0x196ADA50)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE_METHOD_4_7F055CF15FC5D6EE_OFFSET UNITYSDK_OFFSET(0x196AF340)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE__CTOR_OFFSET UNITYSDK_OFFSET(0x196ADA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_IsPVE_TypeDefinitionIndex = 15344;

	class DiceCombatPredicateConfig_IsPVE : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7F055CF15FC5D6EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE_METHOD_4_7F055CF15FC5D6EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3FCB8A56B7D10165(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE_METHOD_4_3FCB8A56B7D10165_OFFSET))(a1, a2);
		}
	};
}
