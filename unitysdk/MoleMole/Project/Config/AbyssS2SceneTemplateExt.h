#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/AbyssS2SceneTemplate.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_207.h"

class Class_0_16E4307DCC419505_7;

#define MOLEMOLE_PROJECT_CONFIG_ABYSSS2SCENETEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC8DF0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int AbyssS2SceneTemplateExt_TypeDefinitionIndex = 16246;

	class AbyssS2SceneTemplateExt : public ::MoleMole::FlatBuffers::Config::AbyssS2SceneTemplate
	{
	public:
		::System::Void _ctor(::Struct_2_58DF5669875F2C66_207 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_207, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_ABYSSS2SCENETEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
