#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/SpinLock.h"

namespace R3::Internal { template <typename T1, typename T2> class WeakDictionary_2_Entry; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace R3::Internal
{
	inline static constexpr unsigned int WeakDictionary_2_TypeDefinitionIndex = 35290;

	template <typename TKey, typename TValue>
	class WeakDictionary_2 : public ::System::Object
	{
	public:
		::Il2CppArray<::R3::Internal::WeakDictionary_2_Entry<TKey, TValue>*>* buckets; // 0x0
		::System::Int32 size; // 0x0
		::System::Threading::SpinLock gate; // 0x0
		::System::Single loadFactor; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* keyEqualityComparer; // 0x0
	};
}
