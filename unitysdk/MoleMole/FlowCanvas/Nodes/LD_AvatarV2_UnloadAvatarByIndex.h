#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_UNLOADAVATARBYINDEX_PROCESS_OFFSET UNITYSDK_OFFSET(0x19DB8440)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_UNLOADAVATARBYINDEX_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19DB8350)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_UNLOADAVATARBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB8720)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_UNLOADAVATARBYINDEX__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x19DB8760)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AvatarV2_UnloadAvatarByIndex_TypeDefinitionIndex = 49560;

	class LD_AvatarV2_UnloadAvatarByIndex : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* targetAvatarIndex; // 0xA8
		::FlowCanvas::FlowOutput* flowOut; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_UNLOADAVATARBYINDEX__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_UNLOADAVATARBYINDEX_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_UNLOADAVATARBYINDEX_PROCESS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATARV2_UNLOADAVATARBYINDEX__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
