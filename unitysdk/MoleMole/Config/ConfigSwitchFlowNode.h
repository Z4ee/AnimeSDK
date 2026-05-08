#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseFlowNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSWITCHFLOWNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFB0C040)
#define MOLEMOLE_CONFIG_CONFIGSWITCHFLOWNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFB0C130)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSwitchFlowNode_TypeDefinitionIndex = 56968;

	class ConfigSwitchFlowNode : public ::MoleMole::Config::ConfigUIBaseFlowNode
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* Conditions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSWITCHFLOWNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSWITCHFLOWNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
