#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEPLAYUIHINT_INVOKE_OFFSET UNITYSDK_OFFSET(0x160419D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEPLAYUIHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x16041C30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMusicBattlePlayUIHint_TypeDefinitionIndex = 40551;

	class LDMusicBattlePlayUIHint : public ::FlowCanvas::Nodes::CallableActionNode_3<::System::Int32, ::System::Single, ::MoleMole::Config::MusicBattleMarkerNodeType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEPLAYUIHINT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 key, ::System::Single hintTime, ::MoleMole::Config::MusicBattleMarkerNodeType color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::MoleMole::Config::MusicBattleMarkerNodeType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEPLAYUIHINT_INVOKE_OFFSET))(this, key, hintTime, color);
		}
	};
}
