#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
class Class_1_BFC2F9D5895EB2FB;
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }

#define MOLEMOLE_CONFIGMONSTERTYPEDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x19D6BF40)
#define MOLEMOLE_CONFIGMONSTERTYPEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6C060)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMonsterTypeDynamicCheckTreeNode_TypeDefinitionIndex = 59952;

	class ConfigMonsterTypeDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicInt* CompareArg; // 0x10
		::MoleMole::Config::DynamicString* SpecialName; // 0x18
		::MoleMole::Config::DynamicString* CompareType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMONSTERTYPEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_BFC2F9D5895EB2FB* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_BFC2F9D5895EB2FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMONSTERTYPEDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
