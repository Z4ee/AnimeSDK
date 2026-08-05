#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B7F6EF0)
#define MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F6F60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetAnimatorTriggerCommonNode_TypeDefinitionIndex = 65214;

	class ConfigSetAnimatorTriggerCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* ParamName; // 0x18
		::MoleMole::Config::StringUISpecialNum* AnimCompKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
