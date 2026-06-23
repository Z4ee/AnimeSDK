#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETENTITYACTIVEAREA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A027680)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETENTITYACTIVEAREA_START_OFFSET UNITYSDK_OFFSET(0x1A027790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETENTITYACTIVEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A027DD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetEntityActiveArea_TypeDefinitionIndex = 84716;

	class LDSetEntityActiveArea : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* flowOut; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* handleInput; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* areaIDInput; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETENTITYACTIVEAREA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETENTITYACTIVEAREA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETENTITYACTIVEAREA_START_OFFSET))(this, f);
		}
	};
}
