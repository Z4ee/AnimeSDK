#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_10841FDE58E9B286.h"
#include "unitysdk/Struct_2_D0FCEBDAF981FB27.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4F54BF4C6B55D9A9;
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OpenWorldSimpleTriggerBatchBase_1_TypeDefinitionIndex = 73867;

	template <typename TTrigger>
	class OpenWorldSimpleTriggerBatchBase_1 : public ::System::Object
	{
	public:
		::System::Int32 SourceEffectType; // 0x0
		::System::Collections::Generic::List_1<TTrigger>* _Triggers; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _EmptyTriggerIdList; // 0x0
		::System::Collections::Generic::List_1<TTrigger>* _PendingTriggers; // 0x0
		::System::Collections::Generic::List_1<::Class_1_4F54BF4C6B55D9A9*>* _PendingHandlers; // 0x0
	};
}
