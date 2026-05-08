#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOADDLEVELSCOREBYMONSTERSTRENGTHTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10E0CED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOADDLEVELSCOREBYMONSTERSTRENGTHTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E0D310)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMechBooAddLevelScoreByMonsterStrengthType_TypeDefinitionIndex = 45498;

	class LDMechBooAddLevelScoreByMonsterStrengthType : public ::FlowCanvas::Nodes::CallableActionNode_1<::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOADDLEVELSCOREBYMONSTERSTRENGTHTYPE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* monster)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMECHBOOADDLEVELSCOREBYMONSTERSTRENGTHTYPE_INVOKE_OFFSET))(this, monster);
		}
	};
}
