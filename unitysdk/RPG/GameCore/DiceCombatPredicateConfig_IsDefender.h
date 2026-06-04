#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISDEFENDER_METHOD_4_14A52BAFE3E3C9AE_OFFSET UNITYSDK_OFFSET(0x196AD860)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISDEFENDER_METHOD_4_F90F44BAC885D17C_OFFSET UNITYSDK_OFFSET(0x196AF2B0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISDEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x196AD810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_IsDefender_TypeDefinitionIndex = 15333;

	class DiceCombatPredicateConfig_IsDefender : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISDEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F90F44BAC885D17C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsDefender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISDEFENDER_METHOD_4_F90F44BAC885D17C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_14A52BAFE3E3C9AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsDefender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISDEFENDER_METHOD_4_14A52BAFE3E3C9AE_OFFSET))(a1, a2);
		}
	};
}
