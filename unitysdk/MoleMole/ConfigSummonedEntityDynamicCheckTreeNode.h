#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_663AFC2250EC21C9;
class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }

#define MOLEMOLE_CONFIGSUMMONEDENTITYDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0xE985D70)
#define MOLEMOLE_CONFIGSUMMONEDENTITYDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xE985E20)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigSummonedEntityDynamicCheckTreeNode_TypeDefinitionIndex = 73882;

	class ConfigSummonedEntityDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicInt* IsSummoned; // 0x10
		::MoleMole::Config::DynamicString* SpecialName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSUMMONEDENTITYDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSUMMONEDENTITYDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
