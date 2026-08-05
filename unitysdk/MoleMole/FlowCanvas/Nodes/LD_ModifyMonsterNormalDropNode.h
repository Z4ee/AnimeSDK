#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_2_5CF5B10B7AB13A38;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x136A0250)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x136A05A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__GETENTITYFIGHTERDATA_OFFSET UNITYSDK_OFFSET(0x136A03C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x136A05E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x136A0860)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ModifyMonsterNormalDropNode_TypeDefinitionIndex = 43532;

	class LD_ModifyMonsterNormalDropNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _flowOutput; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _inputEntity; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* _modifyNormalDrop; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isReplace; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE_REGISTERPORTS_OFFSET))(this);
		}

		::Class_2_5CF5B10B7AB13A38* _GetEntityFighterData()
		{
			return ((::Class_2_5CF5B10B7AB13A38*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__GETENTITYFIGHTERDATA_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__REGISTERPORTS_B__4_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__4_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MODIFYMONSTERNORMALDROPNODE__REGISTERPORTS_B__4_1_OFFSET))(this, flow);
		}
	};
}
