#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_3_3C27FB03C7F640D0_1;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18B2B5D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x18B2BA50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x18B2BA90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA__SENDEVENT_OFFSET UNITYSDK_OFFSET(0x18B2B710)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_EndArea_TypeDefinitionIndex = 49171;

	class LD_AbyssS2_EndArea : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* _delayTime; // 0xA8
		::FlowCanvas::FlowOutput* _error; // 0xB0
		::FlowCanvas::FlowOutput* _finish; // 0xB8
		::FlowCanvas::FlowOutput* _output; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* _resultKey; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _SendEvent(::System::Int32 curAreaNo, ::Class_3_3C27FB03C7F640D0_1* fightSettle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_3C27FB03C7F640D0_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA__SENDEVENT_OFFSET))(this, curAreaNo, fightSettle);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA__REGISTERPORTS_B__5_0_OFFSET))(this, flow);
		}
	};
}
