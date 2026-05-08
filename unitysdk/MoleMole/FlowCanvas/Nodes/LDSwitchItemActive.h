#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHITEMACTIVE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x125B8690)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHITEMACTIVE_SETMONSTERENTITYACTIVE_OFFSET UNITYSDK_OFFSET(0x125B87A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHITEMACTIVE_START_OFFSET UNITYSDK_OFFSET(0x125B92B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHITEMACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x125B97C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSwitchItemActive_TypeDefinitionIndex = 62531;

	class LDSwitchItemActive : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* entityTargetInput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* targetStateInput; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHITEMACTIVE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHITEMACTIVE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void SetMonsterEntityActive(::MoleMole::Battle::Entity* entity, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHITEMACTIVE_SETMONSTERENTITYACTIVE_OFFSET))(this, entity, active);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHITEMACTIVE_START_OFFSET))(this, f);
		}
	};
}
