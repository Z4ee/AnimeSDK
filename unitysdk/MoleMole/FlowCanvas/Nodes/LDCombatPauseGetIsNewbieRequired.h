#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISNEWBIEREQUIRED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B52FA50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISNEWBIEREQUIRED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52FA90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCombatPauseGetIsNewbieRequired_TypeDefinitionIndex = 54661;

	class LDCombatPauseGetIsNewbieRequired : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISNEWBIEREQUIRED__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETISNEWBIEREQUIRED_INVOKE_OFFSET))(this);
		}
	};
}
