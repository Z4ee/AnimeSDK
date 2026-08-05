#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_259;
class Class_0_16E4307DCC419505_268;
class Class_0_16E4307DCC419505_543;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int CombineTriggerListenParam_TypeDefinitionIndex = 56145;

	struct alignas(8) CombineTriggerListenParam
	{
		::System::String* TriggerName; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* ColliderNames; // 0x18
		::Class_0_16E4307DCC419505_268* Filter; // 0x20
		::Class_0_16E4307DCC419505_259* Resolver; // 0x28
		::Class_0_16E4307DCC419505_543* Creator; // 0x30
		::System::Boolean OnceTrigger; // 0x38
		::System::Boolean KeepFloorTriggerOnSuiteChange; // 0x39
	};
}
