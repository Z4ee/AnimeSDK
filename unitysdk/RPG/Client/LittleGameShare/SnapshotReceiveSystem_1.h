#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_78A7ED2C7E071DF9;
class Class_1_8278C4CB5E7C57A4;
class Class_3_9F40BD36E5F30CAE;
namespace Entitas { template <typename T> class Context_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotReceiveSystem_1_TypeDefinitionIndex = 35382;

	template <typename TEntity>
	class SnapshotReceiveSystem_1 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_78A7ED2C7E071DF9*>* OnPredicateFilterIncrementalFrameSnapshot; // 0x0
		::System::Action_1<::Class_1_78A7ED2C7E071DF9*>* OnFullFrameSnapshot; // 0x0
		::System::Action_1<::Class_1_78A7ED2C7E071DF9*>* OnApplyFrameSnapshot; // 0x0
		::Class_3_9F40BD36E5F30CAE* _instance; // 0x0
		::Entitas::Context_1<TEntity>* _context; // 0x0
		::System::Collections::Generic::Queue_1<::Class_1_8278C4CB5E7C57A4*>* _EntitySpawnQueue; // 0x0
		::System::Collections::Generic::Queue_1<::Class_1_8278C4CB5E7C57A4*>* _EntityDespawnQueue; // 0x0
		::System::UInt32 _LatestReceiveSnapshotTick_k__BackingField; // 0x0
		::System::UInt64 _LatestReceiveSnapshotTimeStampMs_k__BackingField; // 0x0
	};
}
