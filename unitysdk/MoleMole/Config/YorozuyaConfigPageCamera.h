#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPageCamera.h"

#define MOLEMOLE_CONFIG_YOROZUYACONFIGPAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F4ED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int YorozuyaConfigPageCamera_TypeDefinitionIndex = 53567;

	class YorozuyaConfigPageCamera : public ::MoleMole::Config::ConfigPageCamera
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_YOROZUYACONFIGPAGECAMERA__CTOR_OFFSET))(this);
		}
	};
}
