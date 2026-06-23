#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigConditionPredicateNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGPLAYGACHAPERFORMANCETIMELINENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12B3D990)
#define MOLEMOLE_CONFIG_CONFIGPLAYGACHAPERFORMANCETIMELINENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3DA00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayGachaPerformanceTimelineNode_TypeDefinitionIndex = 40464;

	class ConfigPlayGachaPerformanceTimelineNode : public ::MoleMole::Config::ConfigConditionPredicateNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYGACHAPERFORMANCETIMELINENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYGACHAPERFORMANCETIMELINENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
