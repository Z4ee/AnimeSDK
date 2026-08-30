#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMETERBACKUP1CONFIG_METHOD_4_5EF6ED989B030EDC_OFFSET UNITYSDK_OFFSET(0x1D30B6E0)
#define RPG_GAMECORE_PARAMETERBACKUP1CONFIG_METHOD_4_DB5B476663425C18_OFFSET UNITYSDK_OFFSET(0x1D30B730)
#define RPG_GAMECORE_PARAMETERBACKUP1CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30B720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParameterBackup1Config_TypeDefinitionIndex = 16871;

	class ParameterBackup1Config : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP1CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5EF6ED989B030EDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParameterBackup1Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParameterBackup1Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP1CONFIG_METHOD_4_5EF6ED989B030EDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DB5B476663425C18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParameterBackup1Config* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParameterBackup1Config*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMETERBACKUP1CONFIG_METHOD_4_DB5B476663425C18_OFFSET))(a1, a2);
		}
	};
}
