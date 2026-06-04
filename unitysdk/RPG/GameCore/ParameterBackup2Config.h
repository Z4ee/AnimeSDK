#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMETERBACKUP2CONFIG_METHOD_4_BE793D4672609589_OFFSET UNITYSDK_OFFSET(0x199E63A0)
#define RPG_GAMECORE_PARAMETERBACKUP2CONFIG_METHOD_4_C72EC9FCB5B9D20B_OFFSET UNITYSDK_OFFSET(0x199E6270)
#define RPG_GAMECORE_PARAMETERBACKUP2CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199E6320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParameterBackup2Config_TypeDefinitionIndex = 16200;

	class ParameterBackup2Config : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP2CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C72EC9FCB5B9D20B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParameterBackup2Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParameterBackup2Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP2CONFIG_METHOD_4_C72EC9FCB5B9D20B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BE793D4672609589(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParameterBackup2Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParameterBackup2Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP2CONFIG_METHOD_4_BE793D4672609589_OFFSET))(a1, a2);
		}
	};
}
