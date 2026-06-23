#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class ConfigSoundActionIntending; }

#define MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDINTENDINGNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xE97A7A0)
#define MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDINTENDINGNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xE97A810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIActionSoundIntendingNode_TypeDefinitionIndex = 39638;

	class ConfigUIActionSoundIntendingNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ConfigSoundActionIntending* action; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDINTENDINGNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIACTIONSOUNDINTENDINGNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
