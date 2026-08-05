#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigCompositeDynamicCheckTreeNode.h"

class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
class Class_1_BFC2F9D5895EB2FB;

#define MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x19BB7880)
#define MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB7A00)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigOrDynamicCheckTreeNode_TypeDefinitionIndex = 84661;

	class ConfigOrDynamicCheckTreeNode : public ::MoleMole::ConfigCompositeDynamicCheckTreeNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_BFC2F9D5895EB2FB* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_BFC2F9D5895EB2FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
