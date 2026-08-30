#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_52;
class Class_1_78A7ED2C7E071DF9;
class Class_1_81F1CF945D2A8B9E;
class Class_1_8278C4CB5E7C57A4;
class Class_1_C4FDE7BD2AFF1282;
class Class_3_9F40BD36E5F30CAE;
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ClientAutonomousSnapShotSendProcessor_1_TypeDefinitionIndex = 36214;

	template <typename TEntity>
	class ClientAutonomousSnapShotSendProcessor_1 : public ::System::Object
	{
	public:
		::Entitas::IContext_1<TEntity>* _Context; // 0x0
		::Class_3_9F40BD36E5F30CAE* _ClientInstance; // 0x0
		::System::Int32 _ReplicatedComponentIndex; // 0x0
		::Class_1_78A7ED2C7E071DF9* _CachedFrameSnapShotData; // 0x0
		::Class_1_8278C4CB5E7C57A4* _CachedEntitySnapshotData; // 0x0
		::Class_1_81F1CF945D2A8B9E* _ReplicationDataWriter; // 0x0
		::System::Int32 _LastCollectTick; // 0x0
	};
}
