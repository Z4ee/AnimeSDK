#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGMODIFYPLUGIN_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xF97F570)
#define MOLEMOLE_CONFIG_CONFIGMODIFYPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xF97F630)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigModifyPlugin_TypeDefinitionIndex = 82027;

	class ConfigModifyPlugin : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMODIFYPLUGIN__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMODIFYPLUGIN_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
