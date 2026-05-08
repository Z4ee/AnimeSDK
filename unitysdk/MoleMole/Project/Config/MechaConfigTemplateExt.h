#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/MechaConfigTemplate.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_167.h"

class Class_0_16E4307DCC419505_13;

#define MOLEMOLE_PROJECT_CONFIG_MECHACONFIGTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x193270A0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int MechaConfigTemplateExt_TypeDefinitionIndex = 16880;

	class MechaConfigTemplateExt : public ::MoleMole::FlatBuffers::Config::MechaConfigTemplate
	{
	public:
		::System::Void _ctor(::Struct_2_3E75877A2888D88A_167 data, ::Class_0_16E4307DCC419505_13* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_167, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_MECHACONFIGTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
