#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGWAITINLEVELPOPNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x177E5160)
#define MOLEMOLE_CONFIG_CONFIGWAITINLEVELPOPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x177E51D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWaitInLevelPopNode_TypeDefinitionIndex = 52730;

	class ConfigWaitInLevelPopNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Single MaxSeconds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAITINLEVELPOPNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAITINLEVELPOPNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
