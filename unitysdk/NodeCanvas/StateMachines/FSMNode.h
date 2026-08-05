#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Node.h"
#include "unitysdk/ParadoxNotion/Alignment2x2.h"

namespace NodeCanvas::StateMachines { class FSM; }
namespace System { class Type; }

#define NODECANVAS_STATEMACHINES_FSMNODE_GET_ALLOWASPRIME_OFFSET UNITYSDK_OFFSET(0x1E72E500)
#define NODECANVAS_STATEMACHINES_FSMNODE_GET_CANSELFCONNECT_OFFSET UNITYSDK_OFFSET(0x1E72E510)
#define NODECANVAS_STATEMACHINES_FSMNODE_GET_COMMENTSALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1E72E570)
#define NODECANVAS_STATEMACHINES_FSMNODE_GET_FSM_OFFSET UNITYSDK_OFFSET(0x1E72E590)
#define NODECANVAS_STATEMACHINES_FSMNODE_GET_ICONALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1E72E580)
#define NODECANVAS_STATEMACHINES_FSMNODE_GET_MAXINCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1E72E520)
#define NODECANVAS_STATEMACHINES_FSMNODE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1E72E530)
#define NODECANVAS_STATEMACHINES_FSMNODE_GET_OUTCONNECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E72E540)
#define NODECANVAS_STATEMACHINES_FSMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E72E600)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FSMNode_TypeDefinitionIndex = 30164;

	class FSMNode : public ::NodeCanvas::Framework::Node
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_allowAsPrime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMNODE_GET_ALLOWASPRIME_OFFSET))(this);
		}

		::System::Boolean get_canSelfConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMNODE_GET_CANSELFCONNECT_OFFSET))(this);
		}

		::System::Int32 get_maxInConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMNODE_GET_MAXINCONNECTIONS_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMNODE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Type* get_outConnectionType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMNODE_GET_OUTCONNECTIONTYPE_OFFSET))(this);
		}

		::ParadoxNotion::Alignment2x2 get_commentsAlignment()
		{
			return ((::ParadoxNotion::Alignment2x2(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMNODE_GET_COMMENTSALIGNMENT_OFFSET))(this);
		}

		::ParadoxNotion::Alignment2x2 get_iconAlignment()
		{
			return ((::ParadoxNotion::Alignment2x2(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMNODE_GET_ICONALIGNMENT_OFFSET))(this);
		}

		::NodeCanvas::StateMachines::FSM* get_FSM()
		{
			return ((::NodeCanvas::StateMachines::FSM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMNODE_GET_FSM_OFFSET))(this);
		}
	};
}
