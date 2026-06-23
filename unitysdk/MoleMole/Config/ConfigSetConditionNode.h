#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSETCONDITIONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x18AD7650)
#define MOLEMOLE_CONFIG_CONFIGSETCONDITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD76C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetConditionNode_TypeDefinitionIndex = 71011;

	class ConfigSetConditionNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* ConditionKey; // 0x18
		::System::Boolean ConditionValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCONDITIONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCONDITIONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
