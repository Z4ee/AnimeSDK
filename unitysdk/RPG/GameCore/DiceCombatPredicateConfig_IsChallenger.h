#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_METHOD_4_06594E726F5C31B0_OFFSET UNITYSDK_OFFSET(0x1C1153D0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_METHOD_4_32AE96DEC86109A9_OFFSET UNITYSDK_OFFSET(0x1C116840)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1153C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_IsChallenger_TypeDefinitionIndex = 15499;

	class DiceCombatPredicateConfig_IsChallenger : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_32AE96DEC86109A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_METHOD_4_32AE96DEC86109A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_06594E726F5C31B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_METHOD_4_06594E726F5C31B0_OFFSET))(a1, a2);
		}
	};
}
