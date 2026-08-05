#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/MainCity/Trigger.h"

namespace NodeGraph { class NodeGraphBase; }

#define NODEGRAPH_MAINCITY_CHECKFAIRY_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x112B2070)
#define NODEGRAPH_MAINCITY_CHECKFAIRY__CTOR_OFFSET UNITYSDK_OFFSET(0x112B2060)
#define NODEGRAPH_MAINCITY_CHECKFAIRY___BASE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x112B23F0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int CheckFairy_TypeDefinitionIndex = 63190;

	class CheckFairy : public ::NodeGraph::MainCity::Trigger
	{
	public:
		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKFAIRY__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKFAIRY_CHECKCONDITION_OFFSET))(this);
		}

		::System::Boolean __base_CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKFAIRY___BASE_CHECKCONDITION_OFFSET))(this);
		}
	};
}
