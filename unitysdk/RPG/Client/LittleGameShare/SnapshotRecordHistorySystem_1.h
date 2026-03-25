#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B9F5BC78FB41D3C3;
class Class_1_DDEA15C15400616B;
class Class_1_E07782907E11788E;
class Class_3_C66DEDBB208C643C;
namespace Entitas { template <typename T> class IContext_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotRecordHistorySystem_1_TypeDefinitionIndex = 28709;

	template <typename TEntity>
	class SnapshotRecordHistorySystem_1 : public ::System::Object
	{
	public:
		::System::Boolean _IsRecordingEnabled_k__BackingField; // 0x0
		::System::Boolean _IsAutoSaveRecordOnDestroy_k__BackingField; // 0x0
		::System::Int32 _RecordFrequency_k__BackingField; // 0x0
		::Class_3_C66DEDBB208C643C* _Instance; // 0x0
		::Entitas::IContext_1<TEntity>* _Context; // 0x0
		::System::Collections::Generic::List_1<::Class_1_B9F5BC78FB41D3C3*>* _RecordHistory; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E07782907E11788E*>* _LoadedRecordCache; // 0x0
		::System::Int32 _FrameCounter; // 0x0
	};
}
