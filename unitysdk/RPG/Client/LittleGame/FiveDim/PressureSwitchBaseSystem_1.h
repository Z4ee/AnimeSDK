#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IEntityVarServices_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimEventService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimLevelVarService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class PressureSwitchBaseSystem_1_LevelVarCallbackCache; }
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PressureSwitchBaseSystem_1_TypeDefinitionIndex = 70850;

	template <typename T>
	class PressureSwitchBaseSystem_1 : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<T>* _PressureSwitchGroup; // 0x0
		::Entitas::ICollector_1<T>* _PressureSwitchCollector; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimEventService_1<T>* _EventService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimLevelVarService_1<T>* _LevelVarService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IEntityVarServices_1<T>* _EntityVarService; // 0x0
		::RPG::PoolDictionary_2<::System::Int32, ::RPG::Client::LittleGame::FiveDim::PressureSwitchBaseSystem_1_LevelVarCallbackCache<T>*>* _LevelVarCallbackCaches; // 0x0
	};
}
