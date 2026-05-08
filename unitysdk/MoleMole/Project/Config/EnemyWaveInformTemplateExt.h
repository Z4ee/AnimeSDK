#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/EnemyWaveInformTemplate.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_89.h"

class Class_0_16E4307DCC419505_13;

#define MOLEMOLE_PROJECT_CONFIG_ENEMYWAVEINFORMTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16701C70)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int EnemyWaveInformTemplateExt_TypeDefinitionIndex = 10542;

	class EnemyWaveInformTemplateExt : public ::MoleMole::FlatBuffers::Config::EnemyWaveInformTemplate
	{
	public:
		::System::Void _ctor(::Struct_2_58DF5669875F2C66_89 data, ::Class_0_16E4307DCC419505_13* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_89, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_ENEMYWAVEINFORMTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
