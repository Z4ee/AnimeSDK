#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_663AFC2250EC21C9;
class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
namespace System { class String; }

#define MOLEMOLE_CONFIGENEMYMONSTERDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x17D31400)
#define MOLEMOLE_CONFIGENEMYMONSTERDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D31490)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigEnemyMonsterDynamicCheckTreeNode_TypeDefinitionIndex = 54951;

	class ConfigEnemyMonsterDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::Il2CppArray<::System::String*>* AnimatorZoneTags; // 0x10
		::System::Int32 MonsterCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENEMYMONSTERDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENEMYMONSTERDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
