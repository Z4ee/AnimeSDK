#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUICOMBO_INVOKE_OFFSET UNITYSDK_OFFSET(0x13836880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUICOMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x13836A40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMusicBattleSetUICombo_TypeDefinitionIndex = 49341;

	class LDMusicBattleSetUICombo : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUICOMBO__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 comboCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUICOMBO_INVOKE_OFFSET))(this, comboCount);
		}
	};
}
