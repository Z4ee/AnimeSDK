#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Common { template <typename T> class IState_1; }

namespace RPG::Common
{
	inline static constexpr unsigned int StateMachine_1_TypeDefinitionIndex = 6795;

	template <typename T>
	class StateMachine_1 : public ::System::Object
	{
	public:
		T _Owner; // 0x0
		::RPG::Common::IState_1<T>* _CurrentState; // 0x0
		::RPG::Common::IState_1<T>* _PreviousState; // 0x0
	};
}
