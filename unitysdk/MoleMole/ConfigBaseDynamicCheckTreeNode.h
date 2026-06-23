#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_663AFC2250EC21C9;
class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;

#define MOLEMOLE_CONFIGBASEDYNAMICCHECKTREENODE_GETEXPAND_OFFSET UNITYSDK_OFFSET(0x1A362A10)
#define MOLEMOLE_CONFIGBASEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A362A50)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBaseDynamicCheckTreeNode_TypeDefinitionIndex = 75311;

	class ConfigBaseDynamicCheckTreeNode : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBASEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean GetExpand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBASEDYNAMICCHECKTREENODE_GETEXPAND_OFFSET))(this);
		}
	};
}
