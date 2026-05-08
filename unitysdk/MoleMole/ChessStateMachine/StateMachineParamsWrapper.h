#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int StateMachineParamsWrapper_TypeDefinitionIndex = 64827;

	struct alignas(8) StateMachineParamsWrapper
	{
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* intParam; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* floatParam; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* boolParam; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* triggerParam; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* triggerOnceParam; // 0x30
	};
}
