#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHIDEDAMAGEDISPLAY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B19EBD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHIDEDAMAGEDISPLAY_START_OFFSET UNITYSDK_OFFSET(0x1B19ED20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHIDEDAMAGEDISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B19F090)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHideDamageDisplay_TypeDefinitionIndex = 75923;

	class LDHideDamageDisplay : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* entityInput; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* hideValueIput; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* hideBehitValueIput; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHIDEDAMAGEDISPLAY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHIDEDAMAGEDISPLAY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHIDEDAMAGEDISPLAY_START_OFFSET))(this, f);
		}
	};
}
