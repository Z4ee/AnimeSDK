#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGSETSECTION_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x135056B0)
#define MOLEMOLE_CONFIG_CONFIGSETSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x13505770)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetSection_TypeDefinitionIndex = 44928;

	class ConfigSetSection : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETSECTION__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETSECTION_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
