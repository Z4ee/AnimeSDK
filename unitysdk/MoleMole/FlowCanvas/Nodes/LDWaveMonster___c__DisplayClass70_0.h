#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonster; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170CB160)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___C__DISPLAYCLASS70_0__MULTIPLAYERINTERNALCOROUTINE_B__0_OFFSET UNITYSDK_OFFSET(0x170CB170)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonster___c__DisplayClass70_0_TypeDefinitionIndex = 58490;

	class LDWaveMonster___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDWaveMonster* __4__this; // 0x10
		::FlowCanvas::Flow f; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::System::Void _MultiplayerInternalCoroutine_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER___C__DISPLAYCLASS70_0__MULTIPLAYERINTERNALCOROUTINE_B__0_OFFSET))(this);
		}
	};
}
