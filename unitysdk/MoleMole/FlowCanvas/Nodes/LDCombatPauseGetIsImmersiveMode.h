#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISIMMERSIVEMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16D35580)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISIMMERSIVEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D356B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCombatPauseGetIsImmersiveMode_TypeDefinitionIndex = 41172;

	class LDCombatPauseGetIsImmersiveMode : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISIMMERSIVEMODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISIMMERSIVEMODE_INVOKE_OFFSET))(this);
		}
	};
}
