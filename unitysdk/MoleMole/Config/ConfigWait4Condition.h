#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGWAIT4CONDITION_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A35D470)
#define MOLEMOLE_CONFIG_CONFIGWAIT4CONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35D4E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWait4Condition_TypeDefinitionIndex = 66215;

	class ConfigWait4Condition : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* ConditionKey; // 0x18
		::System::Boolean InstantPlayNext; // 0x20
		::System::Single MaxWaitTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAIT4CONDITION__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAIT4CONDITION_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
