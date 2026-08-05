#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGSTOPSEQUENCEVENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1BD63020)
#define MOLEMOLE_CONFIG_CONFIGSTOPSEQUENCEVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD630E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigStopSequenceVENode_TypeDefinitionIndex = 70059;

	class ConfigStopSequenceVENode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean isBG; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTOPSEQUENCEVENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTOPSEQUENCEVENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
