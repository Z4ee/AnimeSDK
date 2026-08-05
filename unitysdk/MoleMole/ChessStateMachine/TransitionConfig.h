#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/ConfigBase.h"

namespace MoleMole::ChessStateMachine { class ConditionGroup; }
namespace MoleMole::ChessStateMachine { class ConnectionSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONCONFIG_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0xF12C630)
#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF12C670)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TransitionConfig_TypeDefinitionIndex = 41860;

	class TransitionConfig : public ::MoleMole::ChessStateMachine::ConfigBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ConditionGroup*>* conditionGroups; // 0x28
		::MoleMole::ChessStateMachine::ConnectionSetting* settings; // 0x30
		::System::String* outNodeGuid; // 0x38
		::System::String* inNodeGuid; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONCONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::ChessStateMachine::TransitionConfig* DeepCopy()
		{
			return ((::MoleMole::ChessStateMachine::TransitionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONCONFIG_DEEPCOPY_OFFSET))(this);
		}
	};
}
