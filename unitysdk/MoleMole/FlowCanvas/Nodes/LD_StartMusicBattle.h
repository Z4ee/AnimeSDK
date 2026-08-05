#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTMUSICBATTLE_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x1383D910)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTMUSICBATTLE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1383D7C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTMUSICBATTLE_TRYCALLFINISH_OFFSET UNITYSDK_OFFSET(0x1383DF80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTMUSICBATTLE_TRYPLAYMUSIC_OFFSET UNITYSDK_OFFSET(0x1383DD00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTMUSICBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1383E0C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_StartMusicBattle_TypeDefinitionIndex = 52915;

	class LD_StartMusicBattle : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* _customTag; // 0xA8
		::FlowCanvas::FlowOutput* _finish; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* _timelineDataKey; // 0xC0
		::FlowCanvas::ValueInput_1<::System::String*>* _soundKey; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTMUSICBATTLE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTMUSICBATTLE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void PlayTimeline(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTMUSICBATTLE_PLAYTIMELINE_OFFSET))(this, f);
		}

		::System::Void TryCallFinish(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTMUSICBATTLE_TRYCALLFINISH_OFFSET))(this, f);
		}

		::System::UInt32 TryPlayMusic(::System::String* eventName)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTMUSICBATTLE_TRYPLAYMUSIC_OFFSET))(this, eventName);
		}
	};
}
