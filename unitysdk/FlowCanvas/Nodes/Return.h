#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class Object; }

#define FLOWCANVAS_NODES_RETURN_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E537BF0)
#define FLOWCANVAS_NODES_RETURN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E537C90)
#define FLOWCANVAS_NODES_RETURN__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1E537CE0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Return_TypeDefinitionIndex = 29957;

	class Return : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Object*>* returnPort; // 0xA8
		::System::Boolean useReturnValue; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RETURN__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RETURN_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RETURN__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
