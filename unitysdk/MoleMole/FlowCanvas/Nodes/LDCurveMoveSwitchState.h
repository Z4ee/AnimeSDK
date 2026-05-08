#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVESWITCHSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10E07C40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVESWITCHSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E07DC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCurveMoveSwitchState_TypeDefinitionIndex = 72245;

	class LDCurveMoveSwitchState : public ::FlowCanvas::Nodes::CallableActionNode_2<::MoleMole::Battle::Entity*, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVESWITCHSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* entity, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVESWITCHSTATE_INVOKE_OFFSET))(this, entity, enable);
		}
	};
}
