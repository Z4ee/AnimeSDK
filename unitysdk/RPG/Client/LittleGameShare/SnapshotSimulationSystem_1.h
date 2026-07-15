#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_3_9F40BD36E5F30CAE;
namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IContext_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace Entitas { template <typename T> class IMatcher_1; }
namespace RPG::Client::LittleGameShare { template <typename T> class ClientAutonomousSnapShotSendProcessor_1; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotSimulationSystem_1_TypeDefinitionIndex = 35394;

	template <typename TEntity>
	class SnapshotSimulationSystem_1 : public ::System::Object
	{
	public:
		::Class_3_9F40BD36E5F30CAE* _Instance; // 0x0
		::Entitas::IContext_1<TEntity>* _Context; // 0x0
		::Entitas::IMatcher_1<TEntity>* _ReplicatedMatcher; // 0x0
		::Entitas::IGroup_1<TEntity>* _ReplicatedGroup; // 0x0
		::System::Int32 _ReplicatedComponentIndex; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* _CurDirtyEntity2Components; // 0x0
		::RPG::Client::LittleGameShare::ClientAutonomousSnapShotSendProcessor_1<TEntity>* _clientAutonomousSnapShotSendProcessor; // 0x0
		::System::Action_2<::Entitas::IEntity*, ::Entitas::IComponent*>* OnComponentAdd; // 0x0
		::System::Action_3<::Entitas::IEntity*, ::Entitas::IComponent*, ::System::Byte>* OnComponentUpdate; // 0x0
		::System::Action_2<::Entitas::IEntity*, ::System::RuntimeTypeHandle>* OnComponentRemoved; // 0x0
		::System::Action_1<::Entitas::IEntity*>* OnEntityUpdateComplete; // 0x0
		::System::Action_1<::Entitas::IEntity*>* OnEntityLoadView; // 0x0
	};
}
