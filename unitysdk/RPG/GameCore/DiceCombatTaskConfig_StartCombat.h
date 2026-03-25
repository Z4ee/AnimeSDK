#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCOMBAT_METHOD_3_0E1B114957FAC104_OFFSET UNITYSDK_OFFSET(0x17171330)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCOMBAT_METHOD_3_7B528D6D94253EDB_OFFSET UNITYSDK_OFFSET(0x1716E280)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCOMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1716E230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_StartCombat_TypeDefinitionIndex = 14738;

	class DiceCombatTaskConfig_StartCombat : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCOMBAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E1B114957FAC104(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_StartCombat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_StartCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCOMBAT_METHOD_3_0E1B114957FAC104_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7B528D6D94253EDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_StartCombat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_StartCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STARTCOMBAT_METHOD_3_7B528D6D94253EDB_OFFSET))(a1, a2);
		}
	};
}
