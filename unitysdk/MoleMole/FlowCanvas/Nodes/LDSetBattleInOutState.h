#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETBATTLEINOUTSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1684B1A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETBATTLEINOUTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1684B350)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetBattleInOutState_TypeDefinitionIndex = 48273;

	class LDSetBattleInOutState : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETBATTLEINOUTSTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean isInBattle, ::System::Boolean isImmediatelyCameraStateIn)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETBATTLEINOUTSTATE_INVOKE_OFFSET))(this, isInBattle, isImmediatelyCameraStateIn);
		}
	};
}
