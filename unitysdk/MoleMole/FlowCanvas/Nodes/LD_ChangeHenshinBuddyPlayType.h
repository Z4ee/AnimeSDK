#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CHANGEHENSHINBUDDYPLAYTYPE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x125C70E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CHANGEHENSHINBUDDYPLAYTYPE_START_INTERACT_OFFSET UNITYSDK_OFFSET(0x125C71D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CHANGEHENSHINBUDDYPLAYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x125C73D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CHANGEHENSHINBUDDYPLAYTYPE__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x125C7410)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ChangeHenshinBuddyPlayType_TypeDefinitionIndex = 38328;

	class LD_ChangeHenshinBuddyPlayType : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Level::BangbooPlayType>* bangbooPlayType; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CHANGEHENSHINBUDDYPLAYTYPE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CHANGEHENSHINBUDDYPLAYTYPE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start_Interact(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CHANGEHENSHINBUDDYPLAYTYPE_START_INTERACT_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CHANGEHENSHINBUDDYPLAYTYPE__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
