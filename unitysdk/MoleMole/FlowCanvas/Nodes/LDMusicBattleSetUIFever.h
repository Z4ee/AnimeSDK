#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUIFEVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x13008CC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUIFEVER__CTOR_OFFSET UNITYSDK_OFFSET(0x13008EE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMusicBattleSetUIFever_TypeDefinitionIndex = 74985;

	class LDMusicBattleSetUIFever : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUIFEVER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Single feverPercentage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLESETUIFEVER_INVOKE_OFFSET))(this, feverPercentage);
		}
	};
}
