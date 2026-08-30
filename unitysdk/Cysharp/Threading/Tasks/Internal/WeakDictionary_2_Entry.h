#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal { template <typename T1, typename T2> class WeakDictionary_2_Entry; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int WeakDictionary_2_Entry_TypeDefinitionIndex = 43107;

	template <typename TKey, typename TValue>
	class WeakDictionary_2_Entry : public ::System::Object
	{
	public:
		::System::WeakReference_1<TKey>* Key; // 0x0
		TValue Value; // 0x0
		::System::Int32 Hash; // 0x0
		::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey, TValue>* Prev; // 0x0
		::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey, TValue>* Next; // 0x0
	};
}
