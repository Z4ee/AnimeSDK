#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ChangeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_78A7ED2C7E071DF9;
class Class_1_81F1CF945D2A8B9E;
class Class_1_8278C4CB5E7C57A4;
class Class_1_D64959CBBD533335_1;
class Class_3_49128057410E0DBC;
namespace Entitas { template <typename T> class IContext_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace Entitas { template <typename T> class IMatcher_1; }
namespace RPG::Client::LittleGameShare { template <typename T> class OrderedHashSet_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class MemoryStream; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotSendSystem_1_TypeDefinitionIndex = 35390;

	template <typename TEntity>
	class SnapshotSendSystem_1 : public ::System::Object
	{
	public:
		::Class_3_49128057410E0DBC* _Instance; // 0x0
		::Entitas::IContext_1<TEntity>* _Context; // 0x0
		::Entitas::IMatcher_1<TEntity>* _ReplicatedMatcher; // 0x0
		::Entitas::IGroup_1<TEntity>* _ReplicatedGroup; // 0x0
		::System::Int32 _ReplicatedComponentIndex; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::LittleGameShare::OrderedHashSet_1<::System::Int32>*>* _PendingFullSyncPlayer2Entities; // 0x0
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>* _CurFullSyncedEntities; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* _CurDirtyEntity2Components; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_D64959CBBD533335_1*>*>* _CurSendSnapShotData; // 0x0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _CurOnlinePlayers; // 0x0
		::System::IO::MemoryStream* _SerializeBuffer; // 0x0
		::Class_1_81F1CF945D2A8B9E* _SerializeWriter; // 0x0
		// static const ::System::Int32 MAX_FULL_SYNC_ENTITIES_PER_FRAME = 0x32; // 0x0
		// static const ::System::Int32 MAX_SINGLE_SNAPSHOT_DATA_SIZE = 0x19000; // 0x0
		// static const ::System::Int32 COMPONENT_SNAPSHOT_HEADER_SIZE = 0x8; // 0x0
		// static const ::System::Int32 ENTITY_SNAPSHOT_HEADER_SIZE = 0x14; // 0x0
		// static const ::System::UInt32 SEND_QUEUE_BUSY_LOG_INTERVAL_TICKS = 0x64; // 0x0
		::System::UInt32 _LastSendQueueBusyLogTick; // 0x0
		::System::Int32 _SuppressedSendQueueBusyLogCount; // 0x0
	};
}
