#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEATTACHEFFECTNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16CA9B40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEATTACHEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA9CC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEATTACHEFFECTNODE__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x16CA9D00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEATTACHEFFECTNODE__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x16CA9D10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CreateAttachEffectNode_TypeDefinitionIndex = 60628;

	class LD_CreateAttachEffectNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _flowOutput; // 0xA8
		::MoleMole::Battle::Entity* _effectEntity; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* attachPointName; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* attachEntity; // 0xC0
		::FlowCanvas::ValueInput_1<::System::String*>* effectName; // 0xC8
		::MoleMole::Config::ConfigPosRot* posRot; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEATTACHEFFECTNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEATTACHEFFECTNODE_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__6_0()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEATTACHEFFECTNODE__REGISTERPORTS_B__6_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEATTACHEFFECTNODE__REGISTERPORTS_B__6_1_OFFSET))(this, flow);
		}
	};
}
