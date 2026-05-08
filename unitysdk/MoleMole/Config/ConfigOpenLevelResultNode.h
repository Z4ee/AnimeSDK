#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE_COMMITVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x183C7900)
#define MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x183C7950)
#define MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x183C79C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigOpenLevelResultNode_TypeDefinitionIndex = 73237;

	class ConfigOpenLevelResultNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean IsWarmupUI; // 0x18
		::System::Boolean IsAutoCommit; // 0x19
		::System::Boolean IsCommitLater; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE__CTOR_OFFSET))(this);
		}

		::System::Void CommitValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE_COMMITVALUECHANGED_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
