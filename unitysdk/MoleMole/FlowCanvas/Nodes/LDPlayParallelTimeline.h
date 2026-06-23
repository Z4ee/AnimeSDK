#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x130091B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13008F00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE_TRYCALLFINISH_OFFSET UNITYSDK_OFFSET(0x13009090)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE_TRYCALLOUTPUT_OFFSET UNITYSDK_OFFSET(0x13009120)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x13009620)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x13009660)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlayParallelTimeline_TypeDefinitionIndex = 62586;

	class LDPlayParallelTimeline : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* _customTag; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _muteInLevelInput; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _hideInLevelUIAndMuteInput; // 0xC0
		::FlowCanvas::ValueInput_1<::System::String*>* _timelineDataKey; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isSyncLoad; // 0xD0
		::FlowCanvas::FlowOutput* _finish; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void TryCallFinish(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE_TRYCALLFINISH_OFFSET))(this, f);
		}

		::System::Void TryCallOutput(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE_TRYCALLOUTPUT_OFFSET))(this, f);
		}

		::System::Void PlayTimeline(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE_PLAYTIMELINE_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__7_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE__REGISTERPORTS_B__7_0_OFFSET))(this, f);
		}
	};
}
