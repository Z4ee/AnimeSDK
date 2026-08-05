#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDISCHESSBOARDBATTLE_ISCHESSBOARDBATTLE_OFFSET UNITYSDK_OFFSET(0x118B6950)
#define MOLEMOLE_FLOWCANVAS_NODES_LDISCHESSBOARDBATTLE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x118B6830)
#define MOLEMOLE_FLOWCANVAS_NODES_LDISCHESSBOARDBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x118B6AF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDISCHESSBOARDBATTLE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x118B6B30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDIsChessboardBattle_TypeDefinitionIndex = 63113;

	class LDIsChessboardBattle : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* enableInput; // 0xA8
		::FlowCanvas::FlowOutput* trueOutput; // 0xB0
		::FlowCanvas::FlowOutput* falseOutput; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISCHESSBOARDBATTLE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISCHESSBOARDBATTLE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsChessBoardBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISCHESSBOARDBATTLE_ISCHESSBOARDBATTLE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISCHESSBOARDBATTLE__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
