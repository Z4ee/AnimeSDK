#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class FloatUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGWAITACTIONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x192AA360)
#define MOLEMOLE_CONFIG_CONFIGWAITACTIONNODE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x192AA430)
#define MOLEMOLE_CONFIG_CONFIGWAITACTIONNODE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x192AA4F0)
#define MOLEMOLE_CONFIG_CONFIGWAITACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x192AA530)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWaitActionNode_TypeDefinitionIndex = 42710;

	class ConfigWaitActionNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::FloatUISpecialNum* WaitSeconds; // 0x18
		::MoleMole::Config::BoolUISpecialNum* EnableRandomOffset; // 0x20
		::MoleMole::Config::FloatUISpecialNum* RandomOffsetMax; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAITACTIONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAITACTIONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAITACTIONNODE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAITACTIONNODE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
