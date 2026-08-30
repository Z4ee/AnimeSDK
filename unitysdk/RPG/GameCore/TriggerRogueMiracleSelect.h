#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERROGUEMIRACLESELECT_METHOD_3_13161B47DB2DD922_OFFSET UNITYSDK_OFFSET(0x1D604620)
#define RPG_GAMECORE_TRIGGERROGUEMIRACLESELECT_METHOD_3_965F4C180C72103E_OFFSET UNITYSDK_OFFSET(0x1D604670)
#define RPG_GAMECORE_TRIGGERROGUEMIRACLESELECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D604660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRogueMiracleSelect_TypeDefinitionIndex = 20242;

	class TriggerRogueMiracleSelect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEMIRACLESELECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_13161B47DB2DD922(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueMiracleSelect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueMiracleSelect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEMIRACLESELECT_METHOD_3_13161B47DB2DD922_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_965F4C180C72103E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueMiracleSelect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueMiracleSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEMIRACLESELECT_METHOD_3_965F4C180C72103E_OFFSET))(a1, a2);
		}
	};
}
