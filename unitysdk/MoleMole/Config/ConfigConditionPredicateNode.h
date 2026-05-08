#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigConditionPredicate.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

#define MOLEMOLE_CONFIG_CONFIGCONDITIONPREDICATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x139A0BA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigConditionPredicateNode_TypeDefinitionIndex = 56482;

	class ConfigConditionPredicateNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ConfigConditionPredicate Predicate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCONDITIONPREDICATENODE__CTOR_OFFSET))(this);
		}
	};
}
