#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLEROLETRIALCHANGELINEUPLEADER_METHOD_3_DCB339A7FFF3920D_OFFSET UNITYSDK_OFFSET(0x17199D20)
#define RPG_GAMECORE_ENABLEROLETRIALCHANGELINEUPLEADER_METHOD_3_E75CC6E6AEFCAD7C_OFFSET UNITYSDK_OFFSET(0x17199CA0)
#define RPG_GAMECORE_ENABLEROLETRIALCHANGELINEUPLEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x17199CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableRoleTrialChangeLineupLeader_TypeDefinitionIndex = 22125;

	class EnableRoleTrialChangeLineupLeader : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROLETRIALCHANGELINEUPLEADER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E75CC6E6AEFCAD7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableRoleTrialChangeLineupLeader*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableRoleTrialChangeLineupLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROLETRIALCHANGELINEUPLEADER_METHOD_3_E75CC6E6AEFCAD7C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DCB339A7FFF3920D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableRoleTrialChangeLineupLeader* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableRoleTrialChangeLineupLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROLETRIALCHANGELINEUPLEADER_METHOD_3_DCB339A7FFF3920D_OFFSET))(a1, a2);
		}
	};
}
