#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_663AFC2250EC21C9;
class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
namespace System { class String; }

#define MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x110368C0)
#define MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11036950)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLocalAvatarDynamicCheckTreeNode_TypeDefinitionIndex = 62384;

	class ConfigLocalAvatarDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		// static const ::System::Int32 LocalAvatarCount = 0x1; // 0x0
		::Il2CppArray<::System::String*>* AnimatorZoneTags; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
