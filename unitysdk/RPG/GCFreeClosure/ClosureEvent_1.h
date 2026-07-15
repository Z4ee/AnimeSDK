#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/ActionClosure_1.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GCFreeClosure { template <typename T> class ActionByRef_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int ClosureEvent_1_TypeDefinitionIndex = 6824;

	template <typename T>
	struct ClosureEvent_1
	{
		::System::Collections::Generic::List_1<::RPG::GCFreeClosure::ActionClosure_1<T>>* _calleeList; // 0x0
		::System::Int32 _depth; // 0x0
		::System::Int32 _sparseIndex; // 0x0
	};
}
