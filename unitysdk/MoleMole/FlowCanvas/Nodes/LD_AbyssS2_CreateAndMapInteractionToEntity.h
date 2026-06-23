#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEANDMAPINTERACTIONTOENTITY_CREATEANDINITP2PINTERACTION_OFFSET UNITYSDK_OFFSET(0x182DCD30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEANDMAPINTERACTIONTOENTITY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x182DCC00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEANDMAPINTERACTIONTOENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x182DCF40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEANDMAPINTERACTIONTOENTITY__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x182DCF80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_CreateAndMapInteractionToEntity_TypeDefinitionIndex = 72956;

	class LD_AbyssS2_CreateAndMapInteractionToEntity : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* _suddenEventKey; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* _interactionPool; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _interactionObject; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEANDMAPINTERACTIONTOENTITY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEANDMAPINTERACTIONTOENTITY_REGISTERPORTS_OFFSET))(this);
		}

		static ::System::Boolean CreateAndInitP2PInteraction(::MoleMole::Battle::Entity*& entity, ::System::Int32 interactionPool, ::System::String* suddenEventKey)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEANDMAPINTERACTIONTOENTITY_CREATEANDINITP2PINTERACTION_OFFSET))(entity, interactionPool, suddenEventKey);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CREATEANDMAPINTERACTIONTOENTITY__REGISTERPORTS_B__4_0_OFFSET))(this, flow);
		}
	};
}
