#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8278C4CB5E7C57A4;
class Class_1_B9F5BC78FB41D3C3;
class Class_3_C66DEDBB208C643C;
namespace Entitas { template <typename T> class Context_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotReceiveSystem_1_TypeDefinitionIndex = 28707;

	template <typename TEntity>
	class SnapshotReceiveSystem_1 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_B9F5BC78FB41D3C3*>* OnPredicateFilterIncrementalFrameSnapshot; // 0x0
		::System::Action_1<::Class_1_B9F5BC78FB41D3C3*>* OnFullFrameSnapshot; // 0x0
		::System::Action_1<::Class_1_B9F5BC78FB41D3C3*>* OnApplyFrameSnapshot; // 0x0
		::Class_3_C66DEDBB208C643C* _instance; // 0x0
		::Entitas::Context_1<TEntity>* _context; // 0x0
		::System::Collections::Generic::Queue_1<::Class_1_8278C4CB5E7C57A4*>* _EntitySpawnQueue; // 0x0
		::System::Collections::Generic::Queue_1<::Class_1_8278C4CB5E7C57A4*>* _EntityDespawnQueue; // 0x0
		::System::UInt32 _LatestReceiveSnapshotTick_k__BackingField; // 0x0
		::System::UInt64 _LatestReceiveSnapshotTimeStampMs_k__BackingField; // 0x0
	};
}
