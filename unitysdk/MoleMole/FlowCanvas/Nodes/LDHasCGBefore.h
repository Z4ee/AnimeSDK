#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_CHECK_OFFSET UNITYSDK_OFFSET(0x130020B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_HASCGBEFORE_OFFSET UNITYSDK_OFFSET(0x13002190)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13001FC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE__CTOR_OFFSET UNITYSDK_OFFSET(0x13002380)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x130023C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHasCGBefore_TypeDefinitionIndex = 46826;

	class LDHasCGBefore : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* FalseOutput; // 0xA8
		::FlowCanvas::FlowOutput* TrueOutput; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Check(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_CHECK_OFFSET))(this, f);
		}

		::System::Boolean HasCGBefore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_HASCGBEFORE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
