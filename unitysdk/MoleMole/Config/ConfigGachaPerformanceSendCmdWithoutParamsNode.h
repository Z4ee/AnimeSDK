#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigConditionPredicateNode.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESENDCMDWITHOUTPARAMSNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x11709B80)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESENDCMDWITHOUTPARAMSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11709BF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceSendCmdWithoutParamsNode_TypeDefinitionIndex = 70237;

	class ConfigGachaPerformanceSendCmdWithoutParamsNode : public ::MoleMole::Config::ConfigConditionPredicateNode
	{
	public:
		::MoleMole::Config::ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType CmdType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESENDCMDWITHOUTPARAMSNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESENDCMDWITHOUTPARAMSNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
