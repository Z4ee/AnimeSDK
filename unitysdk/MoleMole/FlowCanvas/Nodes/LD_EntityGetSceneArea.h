#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1299ED80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1299EF40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1299EF80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1299F2E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__REGISTERPORTS_B__5_2_OFFSET UNITYSDK_OFFSET(0x1299F2F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTITYGETSCENEAREA__REGISTERPORTS_B__5_3_OFFSET UNITYSDK_OFFSET(0x1299F300)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_EntityGetSceneArea_TypeDefinitionIndex = 60857;

	class LD_EntityGetSceneArea : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* _entityHandle; // 0xA8
		::System::String* _lastAreaInfo; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8
		::System::Boolean _lastIsValid; // 0xC0
		::System::Int32 _lastBattleRegionIndex; // 0xC4

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
