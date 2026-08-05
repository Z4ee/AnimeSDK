#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
class Class_1_BFC2F9D5895EB2FB;
namespace MoleMole::Config { class DynamicString; }

#define MOLEMOLE_CONFIGKILLMONSTERDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x19FF8860)
#define MOLEMOLE_CONFIGKILLMONSTERDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF8940)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigKillMonsterDynamicCheckTreeNode_TypeDefinitionIndex = 85848;

	class ConfigKillMonsterDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicString* SpecialName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGKILLMONSTERDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_BFC2F9D5895EB2FB* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_BFC2F9D5895EB2FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGKILLMONSTERDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
