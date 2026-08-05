#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class UIBubbleTips; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1684D1C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1684D670)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1684D6D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x1684D8C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIPUPDATE__UPDATETIP_OFFSET UNITYSDK_OFFSET(0x1684D2F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowTipUpdate_TypeDefinitionIndex = 47825;

	class LDShowTipUpdate : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* tipParam; // 0xA8
		::System::String* _cacheStringParam; // 0xB0
		::System::String* _cacheString; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::UIBubbleTips*>* bubbleInput; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* tipID; // 0xC8
		::FlowCanvas::FlowOutput* output; // 0xD0

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
