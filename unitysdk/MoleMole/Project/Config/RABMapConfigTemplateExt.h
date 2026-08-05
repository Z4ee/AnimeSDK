#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/RABMapConfigTemplate.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_784.h"

class Class_0_16E4307DCC419505_7;

#define MOLEMOLE_PROJECT_CONFIG_RABMAPCONFIGTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x169935B0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int RABMapConfigTemplateExt_TypeDefinitionIndex = 11834;

	class RABMapConfigTemplateExt : public ::MoleMole::FlatBuffers::Config::RABMapConfigTemplate
	{
	public:
		::System::Void _ctor(::Struct_2_3E75877A2888D88A_784 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_784, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_RABMAPCONFIGTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
