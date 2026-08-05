#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPREINITBUDDYTOWERDEFENSESCENE_INITBUDDYTOWERDEFENSESCENE_OFFSET UNITYSDK_OFFSET(0x1B1A17D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPREINITBUDDYTOWERDEFENSESCENE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B1A1710)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPREINITBUDDYTOWERDEFENSESCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A1EB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPREINITBUDDYTOWERDEFENSESCENE__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B1A1EF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPreInitBuddyTowerDefenseScene_TypeDefinitionIndex = 75624;

	class LDPreInitBuddyTowerDefenseScene : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPREINITBUDDYTOWERDEFENSESCENE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPREINITBUDDYTOWERDEFENSESCENE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void InitBuddyTowerDefenseScene(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPREINITBUDDYTOWERDEFENSESCENE_INITBUDDYTOWERDEFENSESCENE_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPREINITBUDDYTOWERDEFENSESCENE__REGISTERPORTS_B__1_0_OFFSET))(this, f);
		}
	};
}
