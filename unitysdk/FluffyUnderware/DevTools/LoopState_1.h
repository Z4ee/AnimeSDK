#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int LoopState_1_TypeDefinitionIndex = 25854;

	template <typename T>
	class LoopState_1 : public ::System::Object
	{
	public:
		::System::Int16 _StartIndex_k__BackingField; // 0x0
		::System::Int16 _EndIndex_k__BackingField; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* _Items_k__BackingField; // 0x0
		::System::Int32 _ItemsCount_k__BackingField; // 0x0
		::System::Action_3<T, ::System::Int32, ::System::Int32>* _Action_k__BackingField; // 0x0
	};
}
