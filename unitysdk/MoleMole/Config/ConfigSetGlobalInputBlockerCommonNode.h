#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGSETGLOBALINPUTBLOCKERCOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x18F39030)
#define MOLEMOLE_CONFIG_CONFIGSETGLOBALINPUTBLOCKERCOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F390A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetGlobalInputBlockerCommonNode_TypeDefinitionIndex = 65226;

	class ConfigSetGlobalInputBlockerCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::BoolUISpecialNum* IsBlockInput; // 0x18
		::MoleMole::Config::BoolUISpecialNum* UICtrlForceSet; // 0x20
		::MoleMole::Config::StringUISpecialNum* UIControllerKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETGLOBALINPUTBLOCKERCOMMONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETGLOBALINPUTBLOCKERCOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
