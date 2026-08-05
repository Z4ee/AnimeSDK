#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/MainCity/Trigger.h"

namespace NodeGraph { class NodeGraphBase; }

#define NODEGRAPH_MAINCITY_REPEATTIMER_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x13DFFB60)
#define NODEGRAPH_MAINCITY_REPEATTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x13DFEAC0)
#define NODEGRAPH_MAINCITY_REPEATTIMER___BASE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x13DFFBA0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int RepeatTimer_TypeDefinitionIndex = 50293;

	class RepeatTimer : public ::NodeGraph::MainCity::Trigger
	{
	public:
		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REPEATTIMER__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REPEATTIMER_CHECKCONDITION_OFFSET))(this);
		}

		::System::Boolean __base_CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REPEATTIMER___BASE_CHECKCONDITION_OFFSET))(this);
		}
	};
}
