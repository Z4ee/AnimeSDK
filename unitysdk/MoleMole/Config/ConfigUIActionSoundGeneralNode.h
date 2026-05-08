#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class ConfigSoundActionGeneral; }

#define MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDGENERALNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x11CB5FE0)
#define MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDGENERALNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB6050)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIActionSoundGeneralNode_TypeDefinitionIndex = 40696;

	class ConfigUIActionSoundGeneralNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDGENERALNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDGENERALNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
