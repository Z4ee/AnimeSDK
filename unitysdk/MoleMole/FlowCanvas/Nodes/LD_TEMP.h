#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_TEMP_INVOKE_OFFSET UNITYSDK_OFFSET(0x154235E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TEMP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15423430)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TEMP__CTOR_OFFSET UNITYSDK_OFFSET(0x154240F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TEMP__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x15424130)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_TEMP_TypeDefinitionIndex = 41551;

	class LD_TEMP : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* bonusTime; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* OpenResult; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* v_AddExp; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* v_CurExp; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* v_CurLv; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* v_PreLv; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Int32>* v_PreExp; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Boolean>* v_isSuc; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TEMP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TEMP_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TEMP_INVOKE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__8_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TEMP__REGISTERPORTS_B__8_0_OFFSET))(this, flow);
		}
	};
}
