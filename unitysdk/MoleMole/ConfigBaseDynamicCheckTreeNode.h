#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
class Class_1_BFC2F9D5895EB2FB;

#define MOLEMOLE_CONFIGBASEDYNAMICCHECKTREENODE_GETEXPAND_OFFSET UNITYSDK_OFFSET(0x1B56A880)
#define MOLEMOLE_CONFIGBASEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56A8C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBaseDynamicCheckTreeNode_TypeDefinitionIndex = 50905;

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
