#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/ABMapConfigTemplate.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_534.h"

class Class_0_16E4307DCC419505_13;

#define MOLEMOLE_PROJECT_CONFIG_ABMAPCONFIGTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164DC2F0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int ABMapConfigTemplateExt_TypeDefinitionIndex = 14006;

	class ABMapConfigTemplateExt : public ::MoleMole::FlatBuffers::Config::ABMapConfigTemplate
	{
	public:
		::System::Void _ctor(::Struct_2_3E75877A2888D88A_534 data, ::Class_0_16E4307DCC419505_13* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_534, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_ABMAPCONFIGTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
