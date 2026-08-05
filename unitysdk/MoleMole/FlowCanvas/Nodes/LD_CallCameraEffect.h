#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LD_CallCameraEffect_CallType.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CALLCAMERAEFFECT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1383B690)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CALLCAMERAEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1383B880)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CALLCAMERAEFFECT__REGISTERPORTS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1383B8D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CALLCAMERAEFFECT__REGISTERPORTS_B__10_1_OFFSET UNITYSDK_OFFSET(0x1383BC50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CallCameraEffect_TypeDefinitionIndex = 47398;

	class LD_CallCameraEffect : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _onStopOutput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* isOneFrameEnd; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::Config::ScreenEffectType>* effectType; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* isEndByKey; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Boolean>* isInterruptType; // 0xD0
		::FlowCanvas::ValueInput_1<::MoleMole::Config::ShaderCustomType>* shaderCustomType; // 0xD8
		::FlowCanvas::ValueInput_1<::System::String*>* effectKey; // 0xE0
		::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType callType; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CALLCAMERAEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CALLCAMERAEFFECT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__10_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CALLCAMERAEFFECT__REGISTERPORTS_B__10_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__10_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CALLCAMERAEFFECT__REGISTERPORTS_B__10_1_OFFSET))(this, flow);
		}
	};
}
