#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_188;
class Class_1_71DE60ADB4655B5B;
class Class_1_936F4381B4CBAB18;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client::LittleGame { template <typename T> class BaseEntityLoadSystem_1_LevelVarCallbackCache; }
namespace RPG::Client::LittleGame { template <typename T> class BaseEntityLoadSystem_1_SubMissionCallbackCache; }
namespace RPG::Client::LittleGame { template <typename T> class IEventActionService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ILevelConfigService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ILevelVariableService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IMissionService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IQueryEntityService_1; }
namespace RPG::GameCore { class LittleGameBaseEventAction; }
namespace System { class String; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseEntityLoadSystem_1_TypeDefinitionIndex = 42081;

	template <typename TEntity>
	class BaseEntityLoadSystem_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ILevelConfigService_1<TEntity>* _LevelConfigService; // 0x0
		::RPG::Client::LittleGame::ILevelVariableService_1<TEntity>* _LevelVarService; // 0x0
		::RPG::Client::LittleGame::IMissionService_1<TEntity>* _MissionService; // 0x0
		::RPG::Client::LittleGame::IEventActionService_1<TEntity>* _ActionService; // 0x0
		::RPG::Client::LittleGame::IQueryEntityService_1<TEntity>* _QueryService; // 0x0
		::Class_0_16E4307DCC419505_188* _LogService; // 0x0
		::RPG::PoolDictionary_2<::System::String*, ::RPG::Client::LittleGame::BaseEntityLoadSystem_1_LevelVarCallbackCache<TEntity>*>* _LevelVarCallbacks; // 0x0
		::RPG::PoolDictionary_2<::System::UInt32, ::RPG::Client::LittleGame::BaseEntityLoadSystem_1_SubMissionCallbackCache<TEntity>*>* _SubMissionCallbacks; // 0x0
		::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>* _DyingEntities; // 0x0
	};
}
