#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int SimpleStateMachine_2_TypeDefinitionIndex = 41025;

	template <typename TStateEnum, typename TState>
	class SimpleStateMachine_2 : public ::System::Object
	{
	public:
		TState CurrentState; // 0x0
		TStateEnum CurrentStateEnum; // 0x0
		::RPG::PoolDictionary_2<TStateEnum, TState>* States; // 0x0
	};
}
