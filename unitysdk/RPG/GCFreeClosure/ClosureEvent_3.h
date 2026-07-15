#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/ActionClosure_3.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2, typename T3> class ActionByRef_3; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int ClosureEvent_3_TypeDefinitionIndex = 6826;

	template <typename T1, typename T2, typename T3>
	struct ClosureEvent_3
	{
		::System::Collections::Generic::List_1<::RPG::GCFreeClosure::ActionClosure_3<T1, T2, T3>>* _calleeList; // 0x0
		::System::Int32 _depth; // 0x0
		::System::Int32 _sparseIndex; // 0x0
	};
}
