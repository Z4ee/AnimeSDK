#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/ActionBinderNoArg_3.h"

namespace RPG::Client::LittleGame::FiveDim { template <typename T> class BaseEventActionSystem_1; }
namespace RPG::GameCore { class LittleGameEvent; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BaseEventActionSystem_1_EventCallbackCache_TypeDefinitionIndex = 62773;

	template <typename T>
	class BaseEventActionSystem_1_EventCallbackCache : public ::RPG::ActionBinderNoArg_3<::RPG::Client::LittleGame::FiveDim::BaseEventActionSystem_1<T>*, ::System::Int32, ::RPG::GameCore::LittleGameEvent*>
	{
	public:
	};
}
