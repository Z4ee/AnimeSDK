#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGSTOPTIMELINECOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19FF2150)
#define MOLEMOLE_CONFIG_CONFIGSTOPTIMELINECOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF21C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigStopTimelineCommonNode_TypeDefinitionIndex = 56261;

	class ConfigStopTimelineCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::BoolUISpecialNum* InvokeFinishCallback; // 0x18
		::MoleMole::Config::StringUISpecialNum* TimelineKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTOPTIMELINECOMMONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTOPTIMELINECOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
