#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
class Class_1_BFC2F9D5895EB2FB;
namespace System { class String; }

#define MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x16271D40)
#define MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16271DD0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLocalAvatarDynamicCheckTreeNode_TypeDefinitionIndex = 60740;

	class ConfigLocalAvatarDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		// static const ::System::Int32 LocalAvatarCount = 0x1; // 0x0
		::Il2CppArray<::System::String*>* AnimatorZoneTags; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_BFC2F9D5895EB2FB* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_BFC2F9D5895EB2FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
