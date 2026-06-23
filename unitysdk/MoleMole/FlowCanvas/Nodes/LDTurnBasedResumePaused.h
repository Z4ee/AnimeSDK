#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDRESUMEPAUSED_INVOKE_OFFSET UNITYSDK_OFFSET(0x191245C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDRESUMEPAUSED__CTOR_OFFSET UNITYSDK_OFFSET(0x19124700)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedResumePaused_TypeDefinitionIndex = 77077;

	class LDTurnBasedResumePaused : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDRESUMEPAUSED__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDRESUMEPAUSED_INVOKE_OFFSET))(this, reason);
		}
	};
}
