#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class TeamGroupDataItem; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE_NEW_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A99BB20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE_NEW__CHECKREADY_OFFSET UNITYSDK_OFFSET(0x1A99BC90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE_NEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A99BE40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE_NEW__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A99BE80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE_NEW__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1A99C240)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE_NEW___CHECKREADY_G____CHECKREADYCOROTINE_6_0_OFFSET UNITYSDK_OFFSET(0x1A99BDF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateTeamNode_New_TypeDefinitionIndex = 76168;

	class LDCreateTeamNode_New : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::TeamGroupDataItem*>* teamGroupDataItem; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* bornPos; // 0xB8
		::FlowCanvas::FlowOutput* _onReady; // 0xC0
		::System::Boolean _isSuc; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE_NEW__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE_NEW_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _CheckReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE_NEW__CHECKREADY_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE_NEW__REGISTERPORTS_B__5_0_OFFSET))(this, flow);
		}

		::System::Boolean _RegisterPorts_b__5_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE_NEW__REGISTERPORTS_B__5_1_OFFSET))(this);
		}

		::System::Collections::IEnumerator* __CheckReady_g____CheckReadyCorotine_6_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE_NEW___CHECKREADY_G____CHECKREADYCOROTINE_6_0_OFFSET))(this);
		}
	};
}
