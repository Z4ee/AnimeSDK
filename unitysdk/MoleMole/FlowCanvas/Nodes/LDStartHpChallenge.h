#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTHPCHALLENGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1710EBF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTHPCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1710EED0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStartHpChallenge_TypeDefinitionIndex = 66170;

	class LDStartHpChallenge : public ::FlowCanvas::Nodes::CallableActionNode_3<::System::Int32, ::MoleMole::Battle::Entity*, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTHPCHALLENGE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 ChallengeID, ::MoleMole::Battle::Entity* entity, ::System::Boolean IsRoundDown)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTHPCHALLENGE_INVOKE_OFFSET))(this, ChallengeID, entity, IsRoundDown);
		}
	};
}
