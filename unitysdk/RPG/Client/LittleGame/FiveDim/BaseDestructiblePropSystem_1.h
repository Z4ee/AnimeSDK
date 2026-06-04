#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame { template <typename T> class IEntityScaledTimeService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimDestructibleService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimEventService_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BaseDestructiblePropSystem_1_TypeDefinitionIndex = 71607;

	template <typename T>
	class BaseDestructiblePropSystem_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FiveDim::IFiveDimDestructibleService_1<T>* _DestructibleService; // 0x0
		::RPG::Client::LittleGame::IEntityScaledTimeService_1<T>* _TimeService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimEventService_1<T>* _EventService; // 0x0
		::Entitas::IGroup_1<T>* _DestructibleGroup; // 0x0
		::Entitas::ICollector_1<T>* _DestructibleCollector; // 0x0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _DestructingProps; // 0x0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _RebuildingProps; // 0x0
	};
}
