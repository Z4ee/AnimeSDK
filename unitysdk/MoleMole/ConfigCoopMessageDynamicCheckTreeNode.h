#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_663AFC2250EC21C9;
class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
namespace MoleMole::Config { class DynamicInt; }

#define MOLEMOLE_CONFIGCOOPMESSAGEDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x18F45240)
#define MOLEMOLE_CONFIGCOOPMESSAGEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F45310)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigCoopMessageDynamicCheckTreeNode_TypeDefinitionIndex = 69191;

	class ConfigCoopMessageDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicInt* EmojiType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCOOPMESSAGEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCOOPMESSAGEDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
