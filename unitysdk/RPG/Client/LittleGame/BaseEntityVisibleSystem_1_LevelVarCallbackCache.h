#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/ActionBinderNoArg_2.h"

namespace RPG::Client::LittleGame { template <typename T> class BaseEntityVisibleSystem_1; }
namespace System { class String; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseEntityVisibleSystem_1_LevelVarCallbackCache_TypeDefinitionIndex = 42086;

	template <typename TEntity>
	class BaseEntityVisibleSystem_1_LevelVarCallbackCache : public ::RPG::ActionBinderNoArg_2<::RPG::Client::LittleGame::BaseEntityVisibleSystem_1<TEntity>*, ::System::String*>
	{
	public:
	};
}
