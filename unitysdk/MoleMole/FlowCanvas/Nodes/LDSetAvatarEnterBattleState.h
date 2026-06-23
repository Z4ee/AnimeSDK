#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARENTERBATTLESTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13009C90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARENTERBATTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x13009E50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetAvatarEnterBattleState_TypeDefinitionIndex = 53039;

	class LDSetAvatarEnterBattleState : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::System::Boolean, ::System::String*, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARENTERBATTLESTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean isEnterBattle, ::System::String* tag, ::System::Boolean isPush)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETAVATARENTERBATTLESTATE_INVOKE_OFFSET))(this, isEnterBattle, tag, isPush);
		}
	};
}
