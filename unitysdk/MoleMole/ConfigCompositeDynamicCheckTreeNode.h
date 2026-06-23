#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

#define MOLEMOLE_CONFIGCOMPOSITEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x115EB0E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigCompositeDynamicCheckTreeNode_TypeDefinitionIndex = 72041;

	class ConfigCompositeDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::Il2CppArray<::MoleMole::ConfigBaseDynamicCheckTreeNode*>* ChildConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCOMPOSITEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}
	};
}
