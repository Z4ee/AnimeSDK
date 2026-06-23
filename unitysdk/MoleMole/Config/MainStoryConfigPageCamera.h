#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPageCamera.h"

#define MOLEMOLE_CONFIG_MAINSTORYCONFIGPAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x157CDA00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MainStoryConfigPageCamera_TypeDefinitionIndex = 40780;

	class MainStoryConfigPageCamera : public ::MoleMole::Config::ConfigPageCamera
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINSTORYCONFIGPAGECAMERA__CTOR_OFFSET))(this);
		}
	};
}
