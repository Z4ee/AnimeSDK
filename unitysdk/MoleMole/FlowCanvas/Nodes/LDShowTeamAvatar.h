#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTEAMAVATAR_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D430B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTEAMAVATAR_SHOWAVATAR_OFFSET UNITYSDK_OFFSET(0x10D431A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTEAMAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x10D43530)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTEAMAVATAR__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x10D43570)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowTeamAvatar_TypeDefinitionIndex = 82471;

	class LDShowTeamAvatar : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8
		::FlowCanvas::ValueInput_1<::Il2CppArray<::System::Int32>*>* _indices; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTEAMAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTEAMAVATAR_REGISTERPORTS_OFFSET))(this);
		}

		static ::System::Void ShowAvatar(::MoleMole::Battle::Entity* entity, ::System::Boolean withSummoned)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTEAMAVATAR_SHOWAVATAR_OFFSET))(entity, withSummoned);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTEAMAVATAR__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
