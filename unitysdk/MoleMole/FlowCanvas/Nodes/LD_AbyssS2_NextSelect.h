#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTSELECT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1301A550)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTSELECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1301A840)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTSELECT__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1301A880)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTSELECT__REGISTERPORTS_B__3_1_OFFSET UNITYSDK_OFFSET(0x1301AAE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTSELECT__SENDEVENT_OFFSET UNITYSDK_OFFSET(0x1301A650)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_NextSelect_TypeDefinitionIndex = 77106;

	class LD_AbyssS2_NextSelect : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _error; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* nextSelectAreaID; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTSELECT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTSELECT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _SendEvent(::System::Int32 curAreaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTSELECT__SENDEVENT_OFFSET))(this, curAreaID);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTSELECT__REGISTERPORTS_B__3_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__3_1(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTSELECT__REGISTERPORTS_B__3_1_OFFSET))(this, isOk);
		}
	};
}
