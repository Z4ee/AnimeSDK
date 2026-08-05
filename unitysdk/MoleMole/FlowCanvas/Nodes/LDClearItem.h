#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCLEARITEM_CLEARALLITEM_OFFSET UNITYSDK_OFFSET(0x1368DDB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLEARITEM_CLEARITEM_OFFSET UNITYSDK_OFFSET(0x1368D970)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLEARITEM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1368D860)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLEARITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1368E0E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDClearItem_TypeDefinitionIndex = 72907;

	class LDClearItem : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* isAllInput; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::UInt32>*>* itemListInput; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLEARITEM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLEARITEM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void ClearItem(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLEARITEM_CLEARITEM_OFFSET))(this, f);
		}

		::System::Void ClearAllItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLEARITEM_CLEARALLITEM_OFFSET))(this);
		}
	};
}
