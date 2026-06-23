#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHIDETEAMAVATAR_HIDEAVATAR_OFFSET UNITYSDK_OFFSET(0x12BB3BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHIDETEAMAVATAR_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BB3B00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHIDETEAMAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB3F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHIDETEAMAVATAR__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x12BB3FC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHideTeamAvatar_TypeDefinitionIndex = 45225;

	class LDHideTeamAvatar : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8
		::FlowCanvas::ValueInput_1<::Il2CppArray<::System::Int32>*>* _indices; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHIDETEAMAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHIDETEAMAVATAR_REGISTERPORTS_OFFSET))(this);
		}

		static ::System::Void HideAvatar(::MoleMole::Battle::Entity* entity, ::System::Boolean withSummoned)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHIDETEAMAVATAR_HIDEAVATAR_OFFSET))(entity, withSummoned);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHIDETEAMAVATAR__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
