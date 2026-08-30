#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D0FCEBDAF981FB27.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1189;
class Class_1_22FD99E7B63D26F6;
class Class_1_4F54BF4C6B55D9A9;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int TriggerShapeController_2_TypeDefinitionIndex = 73869;

	template <typename TTrigger, typename TBatch>
	class TriggerShapeController_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_22FD99E7B63D26F6*>* _BatchesByType; // 0x0
		::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_1189*>* _UpdateBatchSet; // 0x0
		// static const ::System::Int32 c_MaxTriggersPerBatch = 0x100; // 0x0
	};
}
