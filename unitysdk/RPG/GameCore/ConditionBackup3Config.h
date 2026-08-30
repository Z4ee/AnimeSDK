#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDITIONBACKUP3CONFIG_METHOD_4_47F719A9E2A59FC8_OFFSET UNITYSDK_OFFSET(0x1D9AEC80)
#define RPG_GAMECORE_CONDITIONBACKUP3CONFIG_METHOD_4_D344A70764F0864C_OFFSET UNITYSDK_OFFSET(0x1D9AEC30)
#define RPG_GAMECORE_CONDITIONBACKUP3CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AEC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionBackup3Config_TypeDefinitionIndex = 16870;

	class ConditionBackup3Config : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP3CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D344A70764F0864C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionBackup3Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionBackup3Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP3CONFIG_METHOD_4_D344A70764F0864C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_47F719A9E2A59FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionBackup3Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionBackup3Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP3CONFIG_METHOD_4_47F719A9E2A59FC8_OFFSET))(a1, a2);
		}
	};
}
