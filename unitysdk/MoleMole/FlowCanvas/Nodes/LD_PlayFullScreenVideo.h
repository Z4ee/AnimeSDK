#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIFullScreenVideoV2PopInNormalWindowController; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_PLAYFULLSCREENVIDEO_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D47360)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_PLAYFULLSCREENVIDEO__CTOR_OFFSET UNITYSDK_OFFSET(0x10D474E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_PLAYFULLSCREENVIDEO__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x10D47520)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_PLAYFULLSCREENVIDEO__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x10D47CD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_PLAYFULLSCREENVIDEO__REGISTERPORTS_B__6_2_OFFSET UNITYSDK_OFFSET(0x10D47A80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_PLAYFULLSCREENVIDEO__REGISTERPORTS_B__6_3_OFFSET UNITYSDK_OFFSET(0x10D47B40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_PlayFullScreenVideo_TypeDefinitionIndex = 72137;

	class LD_PlayFullScreenVideo : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* _videoPath; // 0xA8
		::FlowCanvas::FlowOutput* _stopOut; // 0xB0
		::FlowCanvas::FlowOutput* _finish; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _loop; // 0xC0
		::MoleMole::UIFullScreenVideoV2PopInNormalWindowController* _ctrler; // 0xC8
		::FlowCanvas::FlowOutput* _out; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_PLAYFULLSCREENVIDEO__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_PLAYFULLSCREENVIDEO_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_PLAYFULLSCREENVIDEO__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__6_2(::MoleMole::MultipleVideoPlayerManager* mvp)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_PLAYFULLSCREENVIDEO__REGISTERPORTS_B__6_2_OFFSET))(this, mvp);
		}

		::System::Void _RegisterPorts_b__6_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_PLAYFULLSCREENVIDEO__REGISTERPORTS_B__6_3_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_PLAYFULLSCREENVIDEO__REGISTERPORTS_B__6_1_OFFSET))(this, f);
		}
	};
}
