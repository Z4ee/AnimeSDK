#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDPAUSENEXTUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x15817230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDPAUSENEXTUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x15817370)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedPauseNextUnit_TypeDefinitionIndex = 75030;

	class LDTurnBasedPauseNextUnit : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDPAUSENEXTUNIT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDPAUSENEXTUNIT_INVOKE_OFFSET))(this, reason);
		}
	};
}
