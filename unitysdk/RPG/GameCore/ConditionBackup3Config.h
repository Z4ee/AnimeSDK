#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDITIONBACKUP3CONFIG_METHOD_4_116F11B377EBBC9A_OFFSET UNITYSDK_OFFSET(0x18832480)
#define RPG_GAMECORE_CONDITIONBACKUP3CONFIG_METHOD_4_47F719A9E2A59FC8_OFFSET UNITYSDK_OFFSET(0x188325B0)
#define RPG_GAMECORE_CONDITIONBACKUP3CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18832530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionBackup3Config_TypeDefinitionIndex = 16149;

	class ConditionBackup3Config : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP3CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_116F11B377EBBC9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionBackup3Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionBackup3Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP3CONFIG_METHOD_4_116F11B377EBBC9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_47F719A9E2A59FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionBackup3Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionBackup3Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP3CONFIG_METHOD_4_47F719A9E2A59FC8_OFFSET))(a1, a2);
		}
	};
}
