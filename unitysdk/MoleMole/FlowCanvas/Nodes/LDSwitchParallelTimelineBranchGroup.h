#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHPARALLELTIMELINEBRANCHGROUP_INVOKE_OFFSET UNITYSDK_OFFSET(0x170CA880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHPARALLELTIMELINEBRANCHGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x170CA9A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSwitchParallelTimelineBranchGroup_TypeDefinitionIndex = 70360;

	class LDSwitchParallelTimelineBranchGroup : public ::FlowCanvas::Nodes::CallableActionNode_3<::System::String*, ::System::String*, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHPARALLELTIMELINEBRANCHGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* timelineCustomTag, ::System::String* branchGroupTag, ::System::Boolean workable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHPARALLELTIMELINEBRANCHGROUP_INVOKE_OFFSET))(this, timelineCustomTag, branchGroupTag, workable);
		}
	};
}
