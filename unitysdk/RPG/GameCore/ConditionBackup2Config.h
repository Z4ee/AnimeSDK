#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDITIONBACKUP2CONFIG_METHOD_4_C31F47A7DBB58043_OFFSET UNITYSDK_OFFSET(0x196721A0)
#define RPG_GAMECORE_CONDITIONBACKUP2CONFIG_METHOD_4_DC9135D47F032921_OFFSET UNITYSDK_OFFSET(0x19672070)
#define RPG_GAMECORE_CONDITIONBACKUP2CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19672120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionBackup2Config_TypeDefinitionIndex = 16197;

	class ConditionBackup2Config : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP2CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DC9135D47F032921(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionBackup2Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionBackup2Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP2CONFIG_METHOD_4_DC9135D47F032921_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C31F47A7DBB58043(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionBackup2Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionBackup2Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONBACKUP2CONFIG_METHOD_4_C31F47A7DBB58043_OFFSET))(a1, a2);
		}
	};
}
