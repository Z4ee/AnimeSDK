#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_GetRallyQuestCondProgress_ProgressPair; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETRALLYQUESTCONDPROGRESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x11613DA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETRALLYQUESTCONDPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x116140E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetRallyQuestCondProgress_TypeDefinitionIndex = 83877;

	class LD_GetRallyQuestCondProgress : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::MoleMole::FlowCanvas::Nodes::LD_GetRallyQuestCondProgress_ProgressPair*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETRALLYQUESTCONDPROGRESS__CTOR_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::LD_GetRallyQuestCondProgress_ProgressPair* Invoke(::System::Int32 rallyQuestID)
		{
			return ((::MoleMole::FlowCanvas::Nodes::LD_GetRallyQuestCondProgress_ProgressPair*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETRALLYQUESTCONDPROGRESS_INVOKE_OFFSET))(this, rallyQuestID);
		}
	};
}
