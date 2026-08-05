#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDKILLMONSTER_PROCESS_OFFSET UNITYSDK_OFFSET(0x149D8CE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDKILLMONSTER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x149D8BD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDKILLMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x149D9040)
#define MOLEMOLE_FLOWCANVAS_NODES_LDKILLMONSTER__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x149D9080)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDKillMonster_TypeDefinitionIndex = 51229;

	class LDKillMonster : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* flowIn; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* isAllMonsterInput; // 0xB0
		::FlowCanvas::FlowOutput* flowOut; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*>* monsterInput; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDKILLMONSTER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDKILLMONSTER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDKILLMONSTER_PROCESS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDKILLMONSTER__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
