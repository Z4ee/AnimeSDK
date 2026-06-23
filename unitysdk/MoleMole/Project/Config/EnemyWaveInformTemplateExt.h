#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/EnemyWaveInformTemplate.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_160.h"

class Class_0_16E4307DCC419505_7;

#define MOLEMOLE_PROJECT_CONFIG_ENEMYWAVEINFORMTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3B99E0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int EnemyWaveInformTemplateExt_TypeDefinitionIndex = 15801;

	class EnemyWaveInformTemplateExt : public ::MoleMole::FlatBuffers::Config::EnemyWaveInformTemplate
	{
	public:
		::System::Void _ctor(::Struct_2_58DF5669875F2C66_160 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_160, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_ENEMYWAVEINFORMTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
