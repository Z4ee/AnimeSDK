#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class UIBubbleTips; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D43A20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D43EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x10D43F40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x10D44130)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE__UPDATETIP_OFFSET UNITYSDK_OFFSET(0x10D43B50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowTipUpdate_TypeDefinitionIndex = 74926;

	class LDShowTipUpdate : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::String* _cacheStringParam; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* tipID; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::System::String* _cacheString; // 0xC0
		::FlowCanvas::ValueInput_1<::System::String*>* tipParam; // 0xC8
		::FlowCanvas::ValueInput_1<::MoleMole::UIBubbleTips*>* bubbleInput; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _UpdateTip(::MoleMole::UIBubbleTips* tipObj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBubbleTips*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE__UPDATETIP_OFFSET))(this, tipObj);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE__REGISTERPORTS_B__6_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE__REGISTERPORTS_B__6_1_OFFSET))(this);
		}
	};
}
