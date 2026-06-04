#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_METHOD_4_06594E726F5C31B0_OFFSET UNITYSDK_OFFSET(0x196AD670)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_METHOD_4_1537AD6EA4CD4026_OFFSET UNITYSDK_OFFSET(0x196AF220)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER__CTOR_OFFSET UNITYSDK_OFFSET(0x196AD620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_IsChallenger_TypeDefinitionIndex = 15335;

	class DiceCombatPredicateConfig_IsChallenger : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1537AD6EA4CD4026(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_METHOD_4_1537AD6EA4CD4026_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_06594E726F5C31B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_METHOD_4_06594E726F5C31B0_OFFSET))(a1, a2);
		}
	};
}
