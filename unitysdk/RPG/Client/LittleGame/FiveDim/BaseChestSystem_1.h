#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimChestState.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T1, typename T2> class ActionBinderNoArg_2; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class BaseChestSystem_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IEntityVarServices_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimEventService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimLevelVarService_1; }
namespace RPG::GameCore { class FiveDimChestConfig; }
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BaseChestSystem_1_TypeDefinitionIndex = 73119;

	template <typename T>
	class BaseChestSystem_1 : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<T>* _ChestGroup; // 0x0
		::Entitas::ICollector_1<T>* _ChestCollector; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimEventService_1<T>* _EventService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimLevelVarService_1<T>* _LevelVarService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IEntityVarServices_1<T>* _EntityVarService; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::ActionBinderNoArg_2<::RPG::Client::LittleGame::FiveDim::BaseChestSystem_1<T>*, T>*>* _LevelVarCallbackCaches; // 0x0
	};
}
