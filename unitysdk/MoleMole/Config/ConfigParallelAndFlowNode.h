#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseFlowNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGPARALLELANDFLOWNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x18F38E20)
#define MOLEMOLE_CONFIG_CONFIGPARALLELANDFLOWNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F38F10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigParallelAndFlowNode_TypeDefinitionIndex = 61386;

	class ConfigParallelAndFlowNode : public ::MoleMole::Config::ConfigUIBaseFlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARALLELANDFLOWNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARALLELANDFLOWNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
