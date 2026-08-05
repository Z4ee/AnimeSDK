#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigCompositeDynamicCheckTreeNode.h"

class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
class Class_1_BFC2F9D5895EB2FB;

#define MOLEMOLE_CONFIGANDDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B92C8A0)
#define MOLEMOLE_CONFIGANDDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92CA20)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigAndDynamicCheckTreeNode_TypeDefinitionIndex = 62366;

	class ConfigAndDynamicCheckTreeNode : public ::MoleMole::ConfigCompositeDynamicCheckTreeNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANDDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_BFC2F9D5895EB2FB* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_BFC2F9D5895EB2FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANDDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
