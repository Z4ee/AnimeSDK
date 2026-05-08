#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETENTITYPOS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18A46360)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETENTITYPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x18A46470)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETENTITYPOS__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x18A464B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SetEntityPos_TypeDefinitionIndex = 51100;

	class LD_SetEntityPos : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* _pos; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* _entityHandle; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETENTITYPOS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETENTITYPOS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETENTITYPOS__REGISTERPORTS_B__3_0_OFFSET))(this, flow);
		}
	};
}
