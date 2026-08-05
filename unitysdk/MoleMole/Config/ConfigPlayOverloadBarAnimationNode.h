#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGPLAYOVERLOADBARANIMATIONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x135053F0)
#define MOLEMOLE_CONFIG_CONFIGPLAYOVERLOADBARANIMATIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x135054B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayOverloadBarAnimationNode_TypeDefinitionIndex = 71962;

	class ConfigPlayOverloadBarAnimationNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean IsPlay; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYOVERLOADBARANIMATIONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYOVERLOADBARANIMATIONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
