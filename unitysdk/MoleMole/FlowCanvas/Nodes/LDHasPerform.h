#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/PerformType.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHASPERFORM_CHECK_OFFSET UNITYSDK_OFFSET(0x12BB3560)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASPERFORM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BB3430)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB3A90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASPERFORM__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x12BB3AD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHasPerform_TypeDefinitionIndex = 59748;

	class LDHasPerform : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::PerformType>* inputPerform; // 0xA8
		::FlowCanvas::FlowOutput* TrueOutput; // 0xB0
		::FlowCanvas::FlowOutput* FalseOutput; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* inputPerformId; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASPERFORM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASPERFORM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Check(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASPERFORM_CHECK_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASPERFORM__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
