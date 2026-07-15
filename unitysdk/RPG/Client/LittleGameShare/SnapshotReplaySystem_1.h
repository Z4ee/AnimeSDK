#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_78A7ED2C7E071DF9;
class Class_3_9F40BD36E5F30CAE;
namespace Entitas { template <typename T> class IContext_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotReplaySystem_1_TypeDefinitionIndex = 35387;

	template <typename TEntity>
	class SnapshotReplaySystem_1 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_78A7ED2C7E071DF9*>* OnFullFrameSnapshot; // 0x0
		::System::Action_1<::Class_1_78A7ED2C7E071DF9*>* OnApplyFrameSnapshot; // 0x0
		::Class_3_9F40BD36E5F30CAE* _Instance; // 0x0
		::Entitas::IContext_1<TEntity>* _Context; // 0x0
		::System::Collections::Generic::List_1<::Class_1_78A7ED2C7E071DF9*>* _RecordHistory; // 0x0
		::System::Int32 _TickCount; // 0x0
	};
}
