#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Node.h"
#include "unitysdk/ParadoxNotion/Alignment2x2.h"

namespace NodeCanvas::DialogueTrees { class DialogueTree; }
namespace NodeCanvas::DialogueTrees { class IDialogueActor; }
namespace System { class String; }
namespace System { class Type; }

#define NODECANVAS_DIALOGUETREES_DTNODE_GET_ACTORNAME_OFFSET UNITYSDK_OFFSET(0x1DAE32F0)
#define NODECANVAS_DIALOGUETREES_DTNODE_GET_ALLOWASPRIME_OFFSET UNITYSDK_OFFSET(0x1DAE33E0)
#define NODECANVAS_DIALOGUETREES_DTNODE_GET_CANSELFCONNECT_OFFSET UNITYSDK_OFFSET(0x1DAE33F0)
#define NODECANVAS_DIALOGUETREES_DTNODE_GET_COMMENTSALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1DAE3400)
#define NODECANVAS_DIALOGUETREES_DTNODE_GET_DLGTREE_OFFSET UNITYSDK_OFFSET(0x1DAE3280)
#define NODECANVAS_DIALOGUETREES_DTNODE_GET_FINALACTOR_OFFSET UNITYSDK_OFFSET(0x1DAE3550)
#define NODECANVAS_DIALOGUETREES_DTNODE_GET_ICONALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1DAE3410)
#define NODECANVAS_DIALOGUETREES_DTNODE_GET_MAXINCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1DAE3390)
#define NODECANVAS_DIALOGUETREES_DTNODE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1DAE33A0)
#define NODECANVAS_DIALOGUETREES_DTNODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DAE3030)
#define NODECANVAS_DIALOGUETREES_DTNODE_GET_OUTCONNECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1DAE33B0)
#define NODECANVAS_DIALOGUETREES_DTNODE_GET_REQUIREACTORSELECTION_OFFSET UNITYSDK_OFFSET(0x1DAE3380)
#define NODECANVAS_DIALOGUETREES_DTNODE_SET_ACTORNAME_OFFSET UNITYSDK_OFFSET(0x1DAE3420)
#define NODECANVAS_DIALOGUETREES_DTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE3660)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DTNode_TypeDefinitionIndex = 30895;

	class DTNode : public ::NodeCanvas::Framework::Node
	{
	public:
		::System::String* _actorName; // 0x78
		::System::String* _actorParameterID; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNODE__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNODE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_requireActorSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNODE_GET_REQUIREACTORSELECTION_OFFSET))(this);
		}

		::System::Int32 get_maxInConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNODE_GET_MAXINCONNECTIONS_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNODE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Type* get_outConnectionType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNODE_GET_OUTCONNECTIONTYPE_OFFSET))(this);
		}

		::System::Boolean get_allowAsPrime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNODE_GET_ALLOWASPRIME_OFFSET))(this);
		}

		::System::Boolean get_canSelfConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNODE_GET_CANSELFCONNECT_OFFSET))(this);
		}

		::ParadoxNotion::Alignment2x2 get_commentsAlignment()
		{
			return ((::ParadoxNotion::Alignment2x2(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNODE_GET_COMMENTSALIGNMENT_OFFSET))(this);
		}

		::ParadoxNotion::Alignment2x2 get_iconAlignment()
		{
			return ((::ParadoxNotion::Alignment2x2(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNODE_GET_ICONALIGNMENT_OFFSET))(this);
		}

		::NodeCanvas::DialogueTrees::DialogueTree* get_DLGTree()
		{
			return ((::NodeCanvas::DialogueTrees::DialogueTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNODE_GET_DLGTREE_OFFSET))(this);
		}

		::System::String* get_actorName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNODE_GET_ACTORNAME_OFFSET))(this);
		}

		::System::Void set_actorName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNODE_SET_ACTORNAME_OFFSET))(this, value);
		}

		::NodeCanvas::DialogueTrees::IDialogueActor* get_finalActor()
		{
			return ((::NodeCanvas::DialogueTrees::IDialogueActor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNODE_GET_FINALACTOR_OFFSET))(this);
		}
	};
}
