#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
class Class_1_BFC2F9D5895EB2FB;
namespace System { class String; }

#define MOLEMOLE_CONFIGMONSTERFUNCTIONTYPEDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B934A20)
#define MOLEMOLE_CONFIGMONSTERFUNCTIONTYPEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B934AB0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMonsterFunctionTypeDynamicCheckTreeNode_TypeDefinitionIndex = 67105;

	class ConfigMonsterFunctionTypeDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::Il2CppArray<::System::String*>* AnimatorZoneTags; // 0x10
		::MoleMole::Config::MonsterFunctionType MonsterFunctionType; // 0x18
		::System::Int32 MonsterCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMONSTERFUNCTIONTYPEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_BFC2F9D5895EB2FB* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_BFC2F9D5895EB2FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMONSTERFUNCTIONTYPEDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
