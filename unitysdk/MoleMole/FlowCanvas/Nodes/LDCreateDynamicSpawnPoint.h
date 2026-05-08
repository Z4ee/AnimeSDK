#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEDYNAMICSPAWNPOINT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18415080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEDYNAMICSPAWNPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x184151F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEDYNAMICSPAWNPOINT__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x18415230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEDYNAMICSPAWNPOINT__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x18415240)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateDynamicSpawnPoint_TypeDefinitionIndex = 77558;

	class LDCreateDynamicSpawnPoint : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* rotationInput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* spawnNameInput; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* positionInput; // 0xC0
		::System::Boolean result; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEDYNAMICSPAWNPOINT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEDYNAMICSPAWNPOINT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__5_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEDYNAMICSPAWNPOINT__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__5_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEDYNAMICSPAWNPOINT__REGISTERPORTS_B__5_1_OFFSET))(this, f);
		}
	};
}
