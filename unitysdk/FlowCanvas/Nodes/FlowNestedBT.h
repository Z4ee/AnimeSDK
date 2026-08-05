#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowNestedBase_1.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::BehaviourTrees { class BehaviourTree; }

#define FLOWCANVAS_NODES_FLOWNESTEDBT_ONAFTERUPDATECALL_OFFSET UNITYSDK_OFFSET(0x1EB7DED0)
#define FLOWCANVAS_NODES_FLOWNESTEDBT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB7DE40)
#define FLOWCANVAS_NODES_FLOWNESTEDBT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7DF00)
#define FLOWCANVAS_NODES_FLOWNESTEDBT__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x1EB7DF90)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FlowNestedBT_TypeDefinitionIndex = 30303;

	class FlowNestedBT : public ::FlowCanvas::Nodes::FlowNestedBase_1<::NodeCanvas::BehaviourTrees::BehaviourTree*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDBT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDBT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnAfterUpdateCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDBT_ONAFTERUPDATECALL_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status _RegisterPorts_b__0_0()
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDBT__REGISTERPORTS_B__0_0_OFFSET))(this);
		}
	};
}
