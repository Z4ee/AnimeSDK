#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/ActionBinderNoArg_2.h"

namespace RPG::Client::LittleGame { template <typename T> class BaseEntityLoadSystem_1; }
namespace System { class String; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseEntityLoadSystem_1_LevelVarCallbackCache_TypeDefinitionIndex = 42082;

	template <typename TEntity>
	class BaseEntityLoadSystem_1_LevelVarCallbackCache : public ::RPG::ActionBinderNoArg_2<::RPG::Client::LittleGame::BaseEntityLoadSystem_1<TEntity>*, ::System::String*>
	{
	public:
	};
}
