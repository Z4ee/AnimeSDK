#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IContext_1; }
namespace RPG::Client::LittleGame { template <typename T> class Services_1; }
namespace RPG::GameCore { class LittleGameBillboardConfig; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BillBoardService_1_TypeDefinitionIndex = 62239;

	template <typename TEntity>
	class BillBoardService_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::Services_1<TEntity>* _Services; // 0x0
		::Entitas::IContext_1<TEntity>* _Contexts; // 0x0
	};
}
