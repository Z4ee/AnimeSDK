#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/MDB_StateType.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARMDBTRANSITECLOTHSTATESECONDS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19124F00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARMDBTRANSITECLOTHSTATESECONDS__CTOR_OFFSET UNITYSDK_OFFSET(0x191254D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARMDBTRANSITECLOTHSTATESECONDS__PROCESS_OFFSET UNITYSDK_OFFSET(0x19125050)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARMDBTRANSITECLOTHSTATESECONDS__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x19125510)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AvatarMDBTransiteClothStateSeconds_TypeDefinitionIndex = 50282;

	class LD_AvatarMDBTransiteClothStateSeconds : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* transiteTime; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* clothIndex; // 0xB8
		::FlowCanvas::ValueInput_1<::UnityEngine::MDB_StateType>* mdbState; // 0xC0
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* entityHandle; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARMDBTRANSITECLOTHSTATESECONDS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARMDBTRANSITECLOTHSTATESECONDS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARMDBTRANSITECLOTHSTATESECONDS__PROCESS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARMDBTRANSITECLOTHSTATESECONDS__REGISTERPORTS_B__5_0_OFFSET))(this, flow);
		}
	};
}
