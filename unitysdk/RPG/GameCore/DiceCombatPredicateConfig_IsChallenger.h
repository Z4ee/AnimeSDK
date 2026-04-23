#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_METHOD_4_506341335BC10322_OFFSET UNITYSDK_OFFSET(0x1886E890)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_METHOD_4_69F9B635593236A8_OFFSET UNITYSDK_OFFSET(0x18870440)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1886E840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_IsChallenger_TypeDefinitionIndex = 15276;

	class DiceCombatPredicateConfig_IsChallenger : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_69F9B635593236A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_METHOD_4_69F9B635593236A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_506341335BC10322(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_METHOD_4_506341335BC10322_OFFSET))(a1, a2);
		}
	};
}
