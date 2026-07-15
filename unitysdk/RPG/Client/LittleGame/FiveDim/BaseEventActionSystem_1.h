#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4127FF4C06B070D3.h"
#include "unitysdk/Struct_2_DF3F1B8142DB3648.h"
#include "unitysdk/System/Object.h"

class Class_1_61FE1266BA6576AD;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client::LittleGame { template <typename T> class IEntityScaledTimeService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class BaseEventActionSystem_1_EventCallbackCache; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimEventActionService_1; }
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class IFiveDimEventService_1; }
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BaseEventActionSystem_1_TypeDefinitionIndex = 73139;

	template <typename T>
	class BaseEventActionSystem_1 : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<T>* _EventReceiverGroup; // 0x0
		::Entitas::IGroup_1<T>* _EventEmitterGroup; // 0x0
		::Entitas::ICollector_1<T>* _EventEmitterCollector; // 0x0
		::Entitas::IGroup_1<T>* _DelayedActionGroup; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::PoolDictionary_2<::RPG::GameCore::LittleGameEvent*, ::RPG::Client::LittleGame::FiveDim::BaseEventActionSystem_1_EventCallbackCache<T>*>*>* _EventCallbackCaches; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimEventService_1<T>* _EventService; // 0x0
		::RPG::Client::LittleGame::FiveDim::IFiveDimEventActionService_1<T>* _ActionService; // 0x0
		::RPG::Client::LittleGame::IEntityScaledTimeService_1<T>* _TimeService; // 0x0
	};
}
