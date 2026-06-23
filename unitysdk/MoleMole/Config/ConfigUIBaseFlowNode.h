#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseScriptableAnimationNode.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUIBASEFLOWNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x192A9A90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIBaseFlowNode_TypeDefinitionIndex = 58124;

	class ConfigUIBaseFlowNode : public ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*>* configAnimationNodeList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIBASEFLOWNODE__CTOR_OFFSET))(this);
		}
	};
}
