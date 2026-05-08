#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPageCamera.h"

#define MOLEMOLE_CONFIG_MAINSTORYCONFIGPAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x17545440)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MainStoryConfigPageCamera_TypeDefinitionIndex = 51142;

	class MainStoryConfigPageCamera : public ::MoleMole::Config::ConfigPageCamera
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINSTORYCONFIGPAGECAMERA__CTOR_OFFSET))(this);
		}
	};
}
