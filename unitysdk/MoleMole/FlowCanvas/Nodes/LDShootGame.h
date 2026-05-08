#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_C546E5BF9CD6AD69;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18A3DBF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME_START_OFFSET UNITYSDK_OFFSET(0x18A3DD60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME_WAITGAMEFINISHED_OFFSET UNITYSDK_OFFSET(0x18A3E8D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3E950)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x18A3E990)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShootGame_TypeDefinitionIndex = 46643;

	class LDShootGame : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* exitShootModeInput; // 0xA8
		::FlowCanvas::FlowInput* input; // 0xB0
		::FlowCanvas::FlowOutput* gameEndOutput; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* isStoryModeInput; // 0xC0
		::FlowCanvas::FlowOutput* output; // 0xC8
		::FlowCanvas::ValueInput_1<::System::String*>* avatarPositionInput; // 0xD0
		::UnityEngine::Coroutine* waitGameCoro; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Int32>* gameIdInput; // 0xE0
		::Class_1_C546E5BF9CD6AD69* gameModule; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME_START_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* WaitGameFinished()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME_WAITGAMEFINISHED_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__9_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOOTGAME__REGISTERPORTS_B__9_0_OFFSET))(this, f);
		}
	};
}
