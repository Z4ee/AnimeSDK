#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE_METHOD_4_4AC2A4303CEB3BBF_OFFSET UNITYSDK_OFFSET(0x1886EC70)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE_METHOD_4_CEA2378995498ACC_OFFSET UNITYSDK_OFFSET(0x18870560)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1886EC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_IsPVE_TypeDefinitionIndex = 15285;

	class DiceCombatPredicateConfig_IsPVE : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CEA2378995498ACC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE_METHOD_4_CEA2378995498ACC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4AC2A4303CEB3BBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE_METHOD_4_4AC2A4303CEB3BBF_OFFSET))(a1, a2);
		}
	};
}
