#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/MechaConfigTemplate.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_819.h"

class Class_0_16E4307DCC419505_7;

#define MOLEMOLE_PROJECT_CONFIG_MECHACONFIGTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1608C0A0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int MechaConfigTemplateExt_TypeDefinitionIndex = 12942;

	class MechaConfigTemplateExt : public ::MoleMole::FlatBuffers::Config::MechaConfigTemplate
	{
	public:
		::System::Void _ctor(::Struct_2_3E75877A2888D88A_819 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_819, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_MECHACONFIGTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
