#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x17E7A120)
#define MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO_START_OFFSET UNITYSDK_OFFSET(0x17E7A210)
#define MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7A3F0)
#define MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO__START_B__3_0_OFFSET UNITYSDK_OFFSET(0x17E7A430)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int PlaySummerShootingOpeningAudio_TypeDefinitionIndex = 87312;

	class PlaySummerShootingOpeningAudio : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _finish; // 0xA8
		::FlowCanvas::FlowOutput* _out; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO_START_OFFSET))(this, flow);
		}

		::System::Void _Start_b__3_0(::System::UInt32 arg1, ::System::UInt32 arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_PLAYSUMMERSHOOTINGOPENINGAUDIO__START_B__3_0_OFFSET))(this, arg1, arg2);
		}
	};
}
