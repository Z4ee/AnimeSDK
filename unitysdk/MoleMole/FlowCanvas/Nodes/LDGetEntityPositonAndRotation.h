#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYPOSITONANDROTATION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A397850)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYPOSITONANDROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3979D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYPOSITONANDROTATION__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A397A10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYPOSITONANDROTATION__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1A397CC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYPOSITONANDROTATION__REGISTERPORTS_B__4_2_OFFSET UNITYSDK_OFFSET(0x1A397CE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetEntityPositonAndRotation_TypeDefinitionIndex = 64367;

	class LDGetEntityPositonAndRotation : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entity; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::UnityEngine::Vector3 rotation; // 0xB8
		::UnityEngine::Vector3 worldPosition; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYPOSITONANDROTATION__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYPOSITONANDROTATION_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYPOSITONANDROTATION__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__4_1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYPOSITONANDROTATION__REGISTERPORTS_B__4_1_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__4_2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYPOSITONANDROTATION__REGISTERPORTS_B__4_2_OFFSET))(this);
		}
	};
}
