#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_CHECK_OFFSET UNITYSDK_OFFSET(0x125AE330)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_HASCGBEFORE_OFFSET UNITYSDK_OFFSET(0x125AE410)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x125AE250)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE__CTOR_OFFSET UNITYSDK_OFFSET(0x125AE600)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCGBEFORE__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x125AE640)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHasCGBefore_TypeDefinitionIndex = 46215;

	class LDHasCGBefore : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* TrueOutput; // 0xA8
		::FlowCanvas::FlowOutput* FalseOutput; // 0xB0

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
