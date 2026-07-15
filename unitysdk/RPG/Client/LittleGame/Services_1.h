#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47EE63CB5C4DC8FC_5.h"

namespace RPG::Client::LittleGame { template <typename T> class IBillBoardService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ICameraService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ICurveService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IEffectService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IEntityScaledTimeService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IGenericEventService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IGenericViewService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IHoYoTagService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ILevelGraphService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ILevelVariableService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IMissionService_1; }
namespace RPG::Client::LittleGame { template <typename T> class INavigationService_1; }
namespace RPG::Client::LittleGame { template <typename T> class IStateTreeService_1; }
namespace RPG::Client::LittleGame { template <typename T> class ITriggerService_1; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int Services_1_TypeDefinitionIndex = 40258;

	template <typename TEntity>
	class Services_1 : public ::Class_1_47EE63CB5C4DC8FC_5
	{
	public:
		::RPG::Client::LittleGame::IGenericViewService_1<TEntity>* GenericViewService; // 0x0
		::RPG::Client::LittleGame::ICameraService_1<TEntity>* CameraService; // 0x0
		::RPG::Client::LittleGame::ITriggerService_1<TEntity>* TriggerService; // 0x0
		::RPG::Client::LittleGame::IStateTreeService_1<TEntity>* StateTreeService; // 0x0
		::RPG::Client::LittleGame::INavigationService_1<TEntity>* NavService; // 0x0
		::RPG::Client::LittleGame::IGenericEventService_1<TEntity>* EventService; // 0x0
		::RPG::Client::LittleGame::ILevelGraphService_1<TEntity>* LevelGraphService; // 0x0
		::RPG::Client::LittleGame::IHoYoTagService_1<TEntity>* HoYoTagService; // 0x0
		::RPG::Client::LittleGame::ICurveService_1<TEntity>* CurveService; // 0x0
		::RPG::Client::LittleGame::ILevelVariableService_1<TEntity>* LevelVarService; // 0x0
		::RPG::Client::LittleGame::IEffectService_1<TEntity>* EffectService; // 0x0
		::RPG::Client::LittleGame::IEntityScaledTimeService_1<TEntity>* EntityScaledTimeService; // 0x0
		::RPG::Client::LittleGame::IBillBoardService_1<TEntity>* BillBoardService; // 0x0
		::RPG::Client::LittleGame::IMissionService_1<TEntity>* MissionService; // 0x0
	};
}
