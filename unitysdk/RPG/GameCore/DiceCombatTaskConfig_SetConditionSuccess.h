#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONDITIONSUCCESS_METHOD_3_9FB0D36A88A1E1CB_OFFSET UNITYSDK_OFFSET(0x196B4B90)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONDITIONSUCCESS_METHOD_3_A4B46ACB6A6EB974_OFFSET UNITYSDK_OFFSET(0x196B9B80)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONDITIONSUCCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x196B4B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_SetConditionSuccess_TypeDefinitionIndex = 15355;

	class DiceCombatTaskConfig_SetConditionSuccess : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONDITIONSUCCESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A4B46ACB6A6EB974(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_SetConditionSuccess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_SetConditionSuccess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONDITIONSUCCESS_METHOD_3_A4B46ACB6A6EB974_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9FB0D36A88A1E1CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_SetConditionSuccess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_SetConditionSuccess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONDITIONSUCCESS_METHOD_3_9FB0D36A88A1E1CB_OFFSET))(a1, a2);
		}
	};
}
