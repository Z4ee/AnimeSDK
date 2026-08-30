#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDITIONBACKUP2CONFIG_METHOD_4_61FBBBC2A294143F_OFFSET UNITYSDK_OFFSET(0x1D9AEBD0)
#define RPG_GAMECORE_CONDITIONBACKUP2CONFIG_METHOD_4_C31F47A7DBB58043_OFFSET UNITYSDK_OFFSET(0x1D9AEC20)
#define RPG_GAMECORE_CONDITIONBACKUP2CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AEC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionBackup2Config_TypeDefinitionIndex = 16869;

	class ConditionBackup2Config : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP2CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_61FBBBC2A294143F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionBackup2Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionBackup2Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP2CONFIG_METHOD_4_61FBBBC2A294143F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C31F47A7DBB58043(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionBackup2Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionBackup2Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP2CONFIG_METHOD_4_C31F47A7DBB58043_OFFSET))(a1, a2);
		}
	};
}
