#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI_PROCESS_OFFSET UNITYSDK_OFFSET(0x16D3EF00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16D3EE10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI__CTOR_OFFSET UNITYSDK_OFFSET(0x16D3F190)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x16D3F1D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReplaceGlobalAI_TypeDefinitionIndex = 56249;

	class LDReplaceGlobalAI : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* paramInput; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI_PROCESS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEGLOBALAI__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
