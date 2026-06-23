#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/SortedSet_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedSet_1__Reverse_d__94_TypeDefinitionIndex = 3990;

	template <typename T>
	class SortedSet_1__Reverse_d__94 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::SortedSet_1<T>* __4__this; // 0x0
		::System::Collections::Generic::SortedSet_1_Enumerator<T> _e_5__1; // 0x0
	};
}
