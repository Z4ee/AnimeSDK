#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEEMPTY_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x106CBDE0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEEMPTY__CTOR_OFFSET UNITYSDK_OFFSET(0x106CBE80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueEmpty_TypeDefinitionIndex = 65112;

	class ConfigDynamicValueEmpty : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEEMPTY__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 ToUnionValue()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEEMPTY_TOUNIONVALUE_OFFSET))(this);
		}
	};
}
