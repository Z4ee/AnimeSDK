#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableDictionary_2_Builder; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2_Builder__get_Keys_d__18_TypeDefinitionIndex = 6999;

	template <typename TKey, typename TValue>
	class ImmutableDictionary_2_Builder__get_Keys_d__18 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		TKey __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Immutable::ImmutableDictionary_2_Builder<TKey, TValue>* __4__this; // 0x0
		::System::Collections::Immutable::ImmutableDictionary_2_Enumerator<TKey, TValue> __7__wrap1; // 0x0
	};
}
