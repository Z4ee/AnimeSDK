#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATEUIFEVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x19121740)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATEUIFEVER__CTOR_OFFSET UNITYSDK_OFFSET(0x19121960)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMusicBattleActivateUIFever_TypeDefinitionIndex = 45135;

	class LDMusicBattleActivateUIFever : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATEUIFEVER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Single feverTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEACTIVATEUIFEVER_INVOKE_OFFSET))(this, feverTime);
		}
	};
}
