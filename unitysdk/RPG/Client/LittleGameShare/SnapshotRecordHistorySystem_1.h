#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_78A7ED2C7E071DF9;
class Class_1_DDEA15C15400616B;
class Class_1_E07782907E11788E;
class Class_3_9F40BD36E5F30CAE;
namespace Entitas { template <typename T> class IContext_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotRecordHistorySystem_1_TypeDefinitionIndex = 35384;

	template <typename TEntity>
	class SnapshotRecordHistorySystem_1 : public ::System::Object
	{
	public:
		::System::Boolean _IsRecordingEnabled_k__BackingField; // 0x0
		::System::Boolean _IsAutoSaveRecordOnDestroy_k__BackingField; // 0x0
		::System::Int32 _RecordFrequency_k__BackingField; // 0x0
		::Class_3_9F40BD36E5F30CAE* _Instance; // 0x0
		::Entitas::IContext_1<TEntity>* _Context; // 0x0
		::System::Collections::Generic::List_1<::Class_1_78A7ED2C7E071DF9*>* _RecordHistory; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E07782907E11788E*>* _LoadedRecordCache; // 0x0
		::System::Int32 _FrameCounter; // 0x0
	};
}
