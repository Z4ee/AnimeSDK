#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE_COMMITVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B556B30)
#define MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B556B80)
#define MOLEMOLE_CONFIG_CONFIGOPENLEVELRESULTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B556BF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigOpenLevelResultNode_TypeDefinitionIndex = 91055;

	class ConfigOpenLevelResultNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean IsAutoCommit; // 0x18
		::System::Boolean IsCommitLater; // 0x19
		::System::Boolean IsWarmupUI; // 0x1A

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
