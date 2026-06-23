#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E0707159A4819BEE.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOENTITYABILITY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A02FA20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOENTITYABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02FBD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOENTITYABILITY__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1A02FC10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SendEventToEntityAbility_TypeDefinitionIndex = 75714;

	class LD_SendEventToEntityAbility : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::Enum_3_E0707159A4819BEE>* _valueType; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* _entity; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _valueBool; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* _valueInt; // 0xC0
		::FlowCanvas::FlowOutput* _out; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Single>* _valueFloat; // 0xD0
		::FlowCanvas::ValueInput_1<::System::String*>* _eventName; // 0xD8
		::FlowCanvas::ValueInput_1<::System::String*>* _valueString; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOENTITYABILITY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOENTITYABILITY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__8_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SENDEVENTTOENTITYABILITY__REGISTERPORTS_B__8_0_OFFSET))(this, flow);
		}
	};
}
