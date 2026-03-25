#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_34;
class Class_1_A4840B12D5CF2C00;
class Class_1_B9F5BC78FB41D3C3;
class Class_3_C66DEDBB208C643C;
namespace Entitas { template <typename T> class Context_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotPredicateSystem_1_TypeDefinitionIndex = 28699;

	template <typename TEntity>
	class SnapshotPredicateSystem_1 : public ::System::Object
	{
	public:
		::Class_3_C66DEDBB208C643C* _instance; // 0x0
		::Class_0_16E4307DCC419505_34* _SnapshotPredicationHistorySystemRef; // 0x0
		::Entitas::Context_1<TEntity>* _context; // 0x0
		::System::Collections::Generic::Queue_1<::Class_1_B9F5BC78FB41D3C3*>* _PredictionCheckFrameSnapshotQueue; // 0x0
		::System::Action_1<::Class_1_B9F5BC78FB41D3C3*>* OnApplyFrameSnapshot; // 0x0
	};
}
