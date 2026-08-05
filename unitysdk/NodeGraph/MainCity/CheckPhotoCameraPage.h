#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/MainCity/Trigger.h"

namespace NodeGraph { class NodeGraphBase; }

#define NODEGRAPH_MAINCITY_CHECKPHOTOCAMERAPAGE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x13DFF9B0)
#define NODEGRAPH_MAINCITY_CHECKPHOTOCAMERAPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x13DFEC60)
#define NODEGRAPH_MAINCITY_CHECKPHOTOCAMERAPAGE___BASE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x13DFFAD0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int CheckPhotoCameraPage_TypeDefinitionIndex = 40972;

	class CheckPhotoCameraPage : public ::NodeGraph::MainCity::Trigger
	{
	public:
		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPHOTOCAMERAPAGE__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPHOTOCAMERAPAGE_CHECKCONDITION_OFFSET))(this);
		}

		::System::Boolean __base_CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPHOTOCAMERAPAGE___BASE_CHECKCONDITION_OFFSET))(this);
		}
	};
}
