#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/ActionBinder_3.h"

namespace RPG::Client::LittleGame { template <typename T> class BaseEntityVisibleSystem_1; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseEntityVisibleSystem_1_VisibleCallbackCache_TypeDefinitionIndex = 42087;

	template <typename TEntity>
	class BaseEntityVisibleSystem_1_VisibleCallbackCache : public ::RPG::ActionBinder_3<::System::Single, ::RPG::Client::LittleGame::BaseEntityVisibleSystem_1<TEntity>*, ::System::Int32>
	{
	public:
	};
}
