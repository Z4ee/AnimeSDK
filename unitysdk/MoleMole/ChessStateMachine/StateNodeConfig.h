#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/ConfigBase.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateNodeType.h"

namespace MoleMole::ChessStateMachine { class LayerConfig; }
namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHESSSTATEMACHINE_STATENODECONFIG_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0x1398E940)
#define MOLEMOLE_CHESSSTATEMACHINE_STATENODECONFIG_GET_ISINSTANTNODE_OFFSET UNITYSDK_OFFSET(0x1398E7D0)
#define MOLEMOLE_CHESSSTATEMACHINE_STATENODECONFIG_GET_NOACTIONNODE_OFFSET UNITYSDK_OFFSET(0x1398E5E0)
#define MOLEMOLE_CHESSSTATEMACHINE_STATENODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1398EC60)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int StateNodeConfig_TypeDefinitionIndex = 74957;

	class StateNodeConfig : public ::MoleMole::ChessStateMachine::ConfigBase
	{
	public:
		::MoleMole::ChessStateMachine::LayerConfig* layerconfig; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* outConnections; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::StateMachineBaseAction*>* stateMachineActions; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* inConnections; // 0x40
		::MoleMole::ChessStateMachine::StateNodeType stateNodeType; // 0x48
		::System::Boolean showDetail; // 0x4C
		::System::Boolean waitNodeActionOver; // 0x4D
		::System::Boolean isRunByOrder; // 0x4E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_STATENODECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NoActionNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_STATENODECONFIG_GET_NOACTIONNODE_OFFSET))(this);
		}

		::System::Boolean get_IsInstantNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_STATENODECONFIG_GET_ISINSTANTNODE_OFFSET))(this);
		}

		::MoleMole::ChessStateMachine::StateNodeConfig* DeepCopy(::System::Boolean isRuntime)
		{
			return ((::MoleMole::ChessStateMachine::StateNodeConfig*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_STATENODECONFIG_DEEPCOPY_OFFSET))(this, isRuntime);
		}
	};
}
