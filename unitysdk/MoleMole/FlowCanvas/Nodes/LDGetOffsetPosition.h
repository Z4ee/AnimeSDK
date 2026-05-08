#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1498E7E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1498E910)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1498E970)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1498EAC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetOffsetPosition_TypeDefinitionIndex = 79442;

	class LDGetOffsetPosition : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* inputV3; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::UnityEngine::Vector3 offset; // 0xB8
		::UnityEngine::Vector3 _final; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION__REGISTERPORTS_B__4_0_OFFSET))(this, flow);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__4_1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION__REGISTERPORTS_B__4_1_OFFSET))(this);
		}
	};
}
