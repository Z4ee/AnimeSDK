#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDBUBBLENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1603C5F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBUBBLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1603C830)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBUBBLENODE__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x1603C870)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBUBBLENODE__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x1603D040)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDBubbleNode_TypeDefinitionIndex = 67551;

	class LDBubbleNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entity3; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* speaker2; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* speaker1; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* speaker3; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* performID; // 0xC8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entity2; // 0xD0
		::FlowCanvas::FlowOutput* output; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Single>* NPCHUDChatBubbleInterruptDistance; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Single>* NPCHUDChatBubbleDestroyDistance; // 0xE8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entity1; // 0xF0
		::System::Int32 lastPerformID; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBUBBLENODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBUBBLENODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__11_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBUBBLENODE__REGISTERPORTS_B__11_0_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__11_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBUBBLENODE__REGISTERPORTS_B__11_1_OFFSET))(this);
		}
	};
}
