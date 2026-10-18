#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/ActionBinderNoArg_2.h"

namespace RPG::Client::LittleGame { template <typename T> class BaseEntityLoadSystem_1; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseEntityLoadSystem_1_SubMissionCallbackCache_TypeDefinitionIndex = 42083;

	template <typename TEntity>
	class BaseEntityLoadSystem_1_SubMissionCallbackCache : public ::RPG::ActionBinderNoArg_2<::RPG::Client::LittleGame::BaseEntityLoadSystem_1<TEntity>*, ::System::UInt32>
	{
	public:
	};
}
