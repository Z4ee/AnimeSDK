#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATESKILLBUTTON_INVOKE_OFFSET UNITYSDK_OFFSET(0x10E0D330)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATESKILLBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x10E0D540)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMusicBattleActivateSkillButton_TypeDefinitionIndex = 42768;

	class LDMusicBattleActivateSkillButton : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATESKILLBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isAttackMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATESKILLBUTTON_INVOKE_OFFSET))(this, isAttackMode);
		}
	};
}
