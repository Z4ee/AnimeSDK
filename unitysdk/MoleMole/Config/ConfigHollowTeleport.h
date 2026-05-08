#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWTELEPORT_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1241DEF0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWTELEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1241DF60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowTeleport_TypeDefinitionIndex = 65097;

	class ConfigHollowTeleport : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Single DelayTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTELEPORT__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTELEPORT_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
