#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWTEAMAVATAR_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1383A9B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWTEAMAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1383AAC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWTEAMAVATAR__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1383AB00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ShowTeamAvatar_TypeDefinitionIndex = 83175;

	class LD_AbyssS2_ShowTeamAvatar : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::Il2CppArray<::System::String*>*>* _spawnPoints; // 0xA8
		::FlowCanvas::FlowOutput* _out; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* _animatorTrigger; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWTEAMAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWTEAMAVATAR_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWTEAMAVATAR__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
