#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMETERBACKUP3CONFIG_METHOD_4_2DCB0C1582DA87CC_OFFSET UNITYSDK_OFFSET(0x18BD47F0)
#define RPG_GAMECORE_PARAMETERBACKUP3CONFIG_METHOD_4_E5C5FAFDC07DCC26_OFFSET UNITYSDK_OFFSET(0x18BD4920)
#define RPG_GAMECORE_PARAMETERBACKUP3CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD48A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParameterBackup3Config_TypeDefinitionIndex = 16152;

	class ParameterBackup3Config : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP3CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2DCB0C1582DA87CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParameterBackup3Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParameterBackup3Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP3CONFIG_METHOD_4_2DCB0C1582DA87CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E5C5FAFDC07DCC26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParameterBackup3Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParameterBackup3Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP3CONFIG_METHOD_4_E5C5FAFDC07DCC26_OFFSET))(a1, a2);
		}
	};
}
