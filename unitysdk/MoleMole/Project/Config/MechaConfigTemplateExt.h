#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/MechaConfigTemplate.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_209.h"

class Class_0_16E4307DCC419505_7;

#define MOLEMOLE_PROJECT_CONFIG_MECHACONFIGTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F7220)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int MechaConfigTemplateExt_TypeDefinitionIndex = 9430;

	class MechaConfigTemplateExt : public ::MoleMole::FlatBuffers::Config::MechaConfigTemplate
	{
	public:
		::System::Void _ctor(::Struct_2_3E75877A2888D88A_209 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_209, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_MECHACONFIGTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
