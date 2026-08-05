#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphOwner_1.h"
#include "unitysdk/NodeCanvas/StateMachines/FSM_TransitionCallMode.h"

namespace NodeCanvas::StateMachines { class FSM; }
namespace NodeCanvas::StateMachines { class IState; }
namespace System { class String; }

#define NODECANVAS_STATEMACHINES_FSMOWNER_GETCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1E2340C0)
#define NODECANVAS_STATEMACHINES_FSMOWNER_GETPREVIOUSSTATE_OFFSET UNITYSDK_OFFSET(0x1E2343A0)
#define NODECANVAS_STATEMACHINES_FSMOWNER_GETSTATENAMES_OFFSET UNITYSDK_OFFSET(0x1E234980)
#define NODECANVAS_STATEMACHINES_FSMOWNER_GET_CURRENTDEEPSTATENAME_OFFSET UNITYSDK_OFFSET(0x1E234090)
#define NODECANVAS_STATEMACHINES_FSMOWNER_GET_CURRENTROOTSTATENAME_OFFSET UNITYSDK_OFFSET(0x1E233D90)
#define NODECANVAS_STATEMACHINES_FSMOWNER_GET_PREVIOUSDEEPSTATENAME_OFFSET UNITYSDK_OFFSET(0x1E234370)
#define NODECANVAS_STATEMACHINES_FSMOWNER_GET_PREVIOUSROOTSTATENAME_OFFSET UNITYSDK_OFFSET(0x1E233F10)
#define NODECANVAS_STATEMACHINES_FSMOWNER_TRIGGERSTATE_1_OFFSET UNITYSDK_OFFSET(0x1E234800)
#define NODECANVAS_STATEMACHINES_FSMOWNER_TRIGGERSTATE_OFFSET UNITYSDK_OFFSET(0x1E2347F0)
#define NODECANVAS_STATEMACHINES_FSMOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E234AE0)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FSMOwner_TypeDefinitionIndex = 30943;

	class FSMOwner : public ::NodeCanvas::Framework::GraphOwner_1<::NodeCanvas::StateMachines::FSM*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER__CTOR_OFFSET))(this);
		}

		::System::String* get_currentRootStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_GET_CURRENTROOTSTATENAME_OFFSET))(this);
		}

		::System::String* get_previousRootStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_GET_PREVIOUSROOTSTATENAME_OFFSET))(this);
		}

		::System::String* get_currentDeepStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_GET_CURRENTDEEPSTATENAME_OFFSET))(this);
		}

		::System::String* get_previousDeepStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_GET_PREVIOUSDEEPSTATENAME_OFFSET))(this);
		}

		::NodeCanvas::StateMachines::IState* GetCurrentState(::System::Boolean includeSubFSMs)
		{
			return ((::NodeCanvas::StateMachines::IState*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_GETCURRENTSTATE_OFFSET))(this, includeSubFSMs);
		}

		::NodeCanvas::StateMachines::IState* GetPreviousState(::System::Boolean includeSubFSMs)
		{
			return ((::NodeCanvas::StateMachines::IState*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_GETPREVIOUSSTATE_OFFSET))(this, includeSubFSMs);
		}

		::NodeCanvas::StateMachines::IState* TriggerState(::System::String* stateName)
		{
			return ((::NodeCanvas::StateMachines::IState*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_TRIGGERSTATE_OFFSET))(this, stateName);
		}

		::NodeCanvas::StateMachines::IState* TriggerState_1(::System::String* stateName, ::NodeCanvas::StateMachines::FSM_TransitionCallMode callMode)
		{
			return ((::NodeCanvas::StateMachines::IState*(*)(::PVOID, ::System::String*, ::NodeCanvas::StateMachines::FSM_TransitionCallMode))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_TRIGGERSTATE_1_OFFSET))(this, stateName, callMode);
		}

		::Il2CppArray<::System::String*>* GetStateNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMOWNER_GETSTATENAMES_OFFSET))(this);
		}
	};
}
