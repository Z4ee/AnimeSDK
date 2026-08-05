#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEMONSTERAI_PROCESSCHANGEAI_OFFSET UNITYSDK_OFFSET(0x1B19AFD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEMONSTERAI_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B19AEB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEMONSTERAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B19B3D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEMONSTERAI__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1B19B410)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDChangeMonsterAI_TypeDefinitionIndex = 87145;

	class LDChangeMonsterAI : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* inputAIID; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* inputEntity; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEMONSTERAI__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEMONSTERAI_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void ProcessChangeAI(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEMONSTERAI_PROCESSCHANGEAI_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEMONSTERAI__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
