#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_688;
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingStatusChangeInfo_ActiveEffectEnumerator_1_TypeDefinitionIndex = 59228;

	template <typename T>
	struct SwordTrainingStatusChangeInfo_ActiveEffectEnumerator_1
	{
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_688*>* _InternalEffectList; // 0x0
		::System::Int32 _Index; // 0x0
		::System::Boolean _CheckLimit; // 0x0
		::RPG::Client::SwordTrainingStatusChangeInfo* _Owner; // 0x0
	};
}
