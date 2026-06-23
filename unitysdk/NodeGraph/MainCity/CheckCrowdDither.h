#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/MainCity/Trigger.h"

namespace NodeGraph { class NodeGraphBase; }

#define NODEGRAPH_MAINCITY_CHECKCROWDDITHER_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x13A0AE50)
#define NODEGRAPH_MAINCITY_CHECKCROWDDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0AD60)
#define NODEGRAPH_MAINCITY_CHECKCROWDDITHER___BASE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x13A0B3A0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int CheckCrowdDither_TypeDefinitionIndex = 81559;

	class CheckCrowdDither : public ::NodeGraph::MainCity::Trigger
	{
	public:
		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKCROWDDITHER__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKCROWDDITHER_CHECKCONDITION_OFFSET))(this);
		}

		::System::Boolean __base_CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKCROWDDITHER___BASE_CHECKCONDITION_OFFSET))(this);
		}
	};
}
