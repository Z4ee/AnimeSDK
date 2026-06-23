#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1581FAB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1581FC70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1581FCB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x15820000)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__REGISTERPORTS_B__5_2_OFFSET UNITYSDK_OFFSET(0x15820010)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__REGISTERPORTS_B__5_3_OFFSET UNITYSDK_OFFSET(0x15820020)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_EntityGetSceneArea_TypeDefinitionIndex = 82720;

	class LD_EntityGetSceneArea : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::String* _lastAreaInfo; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* _entityHandle; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8
		::System::Int32 _lastBattleRegionIndex; // 0xC0
		::System::Boolean _lastIsValid; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__REGISTERPORTS_B__5_0_OFFSET))(this, f);
		}

		::System::Boolean _RegisterPorts_b__5_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__REGISTERPORTS_B__5_1_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__5_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__REGISTERPORTS_B__5_2_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__5_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__REGISTERPORTS_B__5_3_OFFSET))(this);
		}
	};
}
