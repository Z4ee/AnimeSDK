#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/ActionClosure_2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2> class ActionByRef_2; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int ClosureEvent_2_TypeDefinitionIndex = 6825;

	template <typename T1, typename T2>
	struct ClosureEvent_2
	{
		::System::Collections::Generic::List_1<::RPG::GCFreeClosure::ActionClosure_2<T1, T2>>* _calleeList; // 0x0
		::System::Int32 _depth; // 0x0
		::System::Int32 _sparseIndex; // 0x0
	};
}
