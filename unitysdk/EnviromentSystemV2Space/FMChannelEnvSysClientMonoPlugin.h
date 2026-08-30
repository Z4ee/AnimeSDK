#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_F31A2435CC277CB4;

#define ENVIROMENTSYSTEMV2SPACE_FMCHANNELENVSYSCLIENTMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x106E7CC0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int FMChannelEnvSysClientMonoPlugin_TypeDefinitionIndex = 49992;

	class FMChannelEnvSysClientMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::Class_3_F31A2435CC277CB4*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FMCHANNELENVSYSCLIENTMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
