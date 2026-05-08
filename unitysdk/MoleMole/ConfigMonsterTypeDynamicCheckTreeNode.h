#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_663AFC2250EC21C9;
class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }

#define MOLEMOLE_CONFIGMONSTERTYPEDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x15A06CA0)
#define MOLEMOLE_CONFIGMONSTERTYPEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x15A06DC0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMonsterTypeDynamicCheckTreeNode_TypeDefinitionIndex = 48159;

	class ConfigMonsterTypeDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicString* CompareType; // 0x10
		::MoleMole::Config::DynamicString* SpecialName; // 0x18
		::MoleMole::Config::DynamicInt* CompareArg; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMONSTERTYPEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMONSTERTYPEDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
