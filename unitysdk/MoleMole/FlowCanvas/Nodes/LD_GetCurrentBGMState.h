#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::FlowCanvas::Nodes { class LDSetInLevelStateGroupV2_StateGroupKeyValue; }
namespace MoleMole::FlowCanvas::Nodes { class LD_GetCurrentBGMState_StateGroupWrapper; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETCURRENTBGMSTATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15420930)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETCURRENTBGMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15420A60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETCURRENTBGMSTATE__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x15420B90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETCURRENTBGMSTATE__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x15420EF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetCurrentBGMState_TypeDefinitionIndex = 71416;

	class LD_GetCurrentBGMState : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _states; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroupV2_StateGroupKeyValue*>*>* _stateGroupPairsOutput; // 0xB0
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroupV2_StateGroupKeyValue*>* _stateGroupKeyValues; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LD_GetCurrentBGMState_StateGroupWrapper*>*>* _stateGroupInput; // 0xC0
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::System::String*>*>* _statesOutput; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETCURRENTBGMSTATE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETCURRENTBGMSTATE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroupV2_StateGroupKeyValue*>* _RegisterPorts_b__6_0()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroupV2_StateGroupKeyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETCURRENTBGMSTATE__REGISTERPORTS_B__6_0_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* _RegisterPorts_b__6_1()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETCURRENTBGMSTATE__REGISTERPORTS_B__6_1_OFFSET))(this);
		}
	};
}
