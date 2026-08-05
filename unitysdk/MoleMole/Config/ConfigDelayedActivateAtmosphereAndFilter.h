#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGDELAYEDACTIVATEATMOSPHEREANDFILTER_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x116FE5F0)
#define MOLEMOLE_CONFIG_CONFIGDELAYEDACTIVATEATMOSPHEREANDFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x116FE6B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDelayedActivateAtmosphereAndFilter_TypeDefinitionIndex = 47005;

	class ConfigDelayedActivateAtmosphereAndFilter : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDELAYEDACTIVATEATMOSPHEREANDFILTER__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDELAYEDACTIVATEATMOSPHEREANDFILTER_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
