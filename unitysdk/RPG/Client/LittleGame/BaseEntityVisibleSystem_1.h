#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_188;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client::LittleGame { template <typename T> class BaseEntityVisibleSystem_1_LevelVarCallbackCache; }
namespace RPG::Client::LittleGame { template <typename T> class BaseEntityVisibleSystem_1_VisibleCallbackCache; }
namespace RPG::Client::LittleGame { template <typename T> class IEntityVisibleService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ILevelVariableService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IQueryEntityService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IEntityVarServices_1; }
namespace System { class String; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseEntityVisibleSystem_1_TypeDefinitionIndex = 42085;

	template <typename TEntity>
	class BaseEntityVisibleSystem_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::IQueryEntityService_1<TEntity>* _QueryService; // 0x0
		::RPG::Client::LittleGame::IEntityVisibleService_1<TEntity>* _VisibleService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IEntityVarServices_1<TEntity>* _EntityVarService; // 0x0
		::RPG::Client::LittleGame::ILevelVariableService_1<TEntity>* _LevelVarService; // 0x0
		::Class_0_16E4307DCC419505_188* _LogService; // 0x0
		::Entitas::IGroup_1<TEntity>* _VisibilityGroup; // 0x0
		::Entitas::IGroup_1<TEntity>* _DitherChangeGroup; // 0x0
		::RPG::PoolDictionary_2<::System::String*, ::RPG::PoolList_1<::System::Int32>*>* _LevelVarToEntities; // 0x0
		::RPG::PoolDictionary_2<::System::Int32, ::RPG::Client::LittleGame::BaseEntityVisibleSystem_1_LevelVarCallbackCache<TEntity>*>* _LevelVarCallbackCaches; // 0x0
		::RPG::PoolDictionary_2<::System::Int32, ::RPG::Client::LittleGame::BaseEntityVisibleSystem_1_VisibleCallbackCache<TEntity>*>* _VisibleCallbackCaches; // 0x0
		::RPG::PoolList_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>* _PendingInvisibleEntities; // 0x0
	};
}
