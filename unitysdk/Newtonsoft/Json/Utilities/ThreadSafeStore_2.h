#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ThreadSafeStore_2_TypeDefinitionIndex = 9315;

	template <typename TKey, typename TValue>
	class ThreadSafeStore_2 : public ::System::Object
	{
	public:
		::System::Object* _lock; // 0x0
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* _store; // 0x0
		::System::Func_2<TKey, TValue>* _creator; // 0x0
	};
}
