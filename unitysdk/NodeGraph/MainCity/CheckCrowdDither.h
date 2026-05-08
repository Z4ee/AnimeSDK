#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/MainCity/Trigger.h"

namespace NodeGraph { class NodeGraphBase; }

#define NODEGRAPH_MAINCITY_CHECKCROWDDITHER_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x16143CB0)
#define NODEGRAPH_MAINCITY_CHECKCROWDDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x16143AF0)
#define NODEGRAPH_MAINCITY_CHECKCROWDDITHER___BASE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x16144200)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int CheckCrowdDither_TypeDefinitionIndex = 75058;

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
