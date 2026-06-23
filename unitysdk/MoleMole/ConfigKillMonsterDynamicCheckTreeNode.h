#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_663AFC2250EC21C9;
class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
namespace MoleMole::Config { class DynamicString; }

#define MOLEMOLE_CONFIGKILLMONSTERDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A077F70)
#define MOLEMOLE_CONFIGKILLMONSTERDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A078050)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigKillMonsterDynamicCheckTreeNode_TypeDefinitionIndex = 73474;

	class ConfigKillMonsterDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicString* SpecialName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGKILLMONSTERDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGKILLMONSTERDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
