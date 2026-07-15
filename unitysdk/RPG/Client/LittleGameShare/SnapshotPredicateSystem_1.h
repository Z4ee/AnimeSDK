#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_42;
class Class_1_68567FA2484DF545;
class Class_1_78A7ED2C7E071DF9;
class Class_3_9F40BD36E5F30CAE;
namespace Entitas { template <typename T> class Context_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotPredicateSystem_1_TypeDefinitionIndex = 35374;

	template <typename TEntity>
	class SnapshotPredicateSystem_1 : public ::System::Object
	{
	public:
		::Class_3_9F40BD36E5F30CAE* _instance; // 0x0
		::Class_0_16E4307DCC419505_42* _SnapshotPredicationHistorySystemRef; // 0x0
		::Entitas::Context_1<TEntity>* _context; // 0x0
		::System::Collections::Generic::Queue_1<::Class_1_78A7ED2C7E071DF9*>* _PredictionCheckFrameSnapshotQueue; // 0x0
		::System::Action_1<::Class_1_78A7ED2C7E071DF9*>* OnApplyFrameSnapshot; // 0x0
	};
}
