#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATEWEAPON_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xE96B680)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATEWEAPON__CTOR_OFFSET UNITYSDK_OFFSET(0xE96B6F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceRotateWeapon_TypeDefinitionIndex = 47416;

	class ConfigGachaPerformanceRotateWeapon : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATEWEAPON__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATEWEAPON_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
