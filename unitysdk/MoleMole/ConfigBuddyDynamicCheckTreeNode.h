#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
class Class_1_BFC2F9D5895EB2FB;
namespace System { class String; }

#define MOLEMOLE_CONFIGBUDDYDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A4C2E60)
#define MOLEMOLE_CONFIGBUDDYDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C2EF0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBuddyDynamicCheckTreeNode_TypeDefinitionIndex = 40828;

	class ConfigBuddyDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::Il2CppArray<::System::String*>* AnimatorZoneTags; // 0x10
		::System::Int32 MonsterCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_BFC2F9D5895EB2FB* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_BFC2F9D5895EB2FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
