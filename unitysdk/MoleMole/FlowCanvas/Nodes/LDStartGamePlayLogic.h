#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Battle/GamePlayLogicKind.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTGAMEPLAYLOGIC_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x17E73C00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTGAMEPLAYLOGIC_STARTGAMEPLAYLOGIC_OFFSET UNITYSDK_OFFSET(0x17E73D20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTGAMEPLAYLOGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x17E74080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTGAMEPLAYLOGIC__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x17E740C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStartGamePlayLogic_TypeDefinitionIndex = 69771;

	class LDStartGamePlayLogic : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* configInput; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::GamePlayLogicKind>* gameTypeInput; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTGAMEPLAYLOGIC__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTGAMEPLAYLOGIC_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void StartGamePlayLogic(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTGAMEPLAYLOGIC_STARTGAMEPLAYLOGIC_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTGAMEPLAYLOGIC__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
