#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigCompositeDynamicCheckTreeNode.h"

class Class_1_663AFC2250EC21C9;
class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;

#define MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x17E46830)
#define MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E469B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigOrDynamicCheckTreeNode_TypeDefinitionIndex = 76131;

	class ConfigOrDynamicCheckTreeNode : public ::MoleMole::ConfigCompositeDynamicCheckTreeNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
