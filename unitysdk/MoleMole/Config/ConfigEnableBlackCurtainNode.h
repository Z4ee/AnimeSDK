#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigConditionPredicate.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGENABLEBLACKCURTAINNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1146F580)
#define MOLEMOLE_CONFIG_CONFIGENABLEBLACKCURTAINNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1146F5F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEnableBlackCurtainNode_TypeDefinitionIndex = 82129;

	class ConfigEnableBlackCurtainNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ConfigConditionPredicate Predicate; // 0x18
		::System::Single Duration; // 0x28
		::System::Boolean Enable; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENABLEBLACKCURTAINNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENABLEBLACKCURTAINNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
