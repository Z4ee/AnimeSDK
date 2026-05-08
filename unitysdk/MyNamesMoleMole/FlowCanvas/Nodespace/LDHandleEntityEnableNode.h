#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MYNAMESMOLEMOLE_FLOWCANVAS_NODESPACE_LDHANDLEENTITYENABLENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12784BF0)
#define MYNAMESMOLEMOLE_FLOWCANVAS_NODESPACE_LDHANDLEENTITYENABLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12784D00)
#define MYNAMESMOLEMOLE_FLOWCANVAS_NODESPACE_LDHANDLEENTITYENABLENODE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x12784D40)

namespace MyNamesMoleMole::FlowCanvas::Nodespace
{
	inline static constexpr unsigned int LDHandleEntityEnableNode_TypeDefinitionIndex = 56110;

	class LDHandleEntityEnableNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xA8
		::FlowCanvas::FlowOutput* outPut; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* enableStateInput; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MYNAMESMOLEMOLE_FLOWCANVAS_NODESPACE_LDHANDLEENTITYENABLENODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MYNAMESMOLEMOLE_FLOWCANVAS_NODESPACE_LDHANDLEENTITYENABLENODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MYNAMESMOLEMOLE_FLOWCANVAS_NODESPACE_LDHANDLEENTITYENABLENODE__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
