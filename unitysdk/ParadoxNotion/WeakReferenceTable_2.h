#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace ParadoxNotion
{
	inline static constexpr unsigned int WeakReferenceTable_2_TypeDefinitionIndex = 28161;

	template <typename TKey, typename TValue>
	class WeakReferenceTable_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::WeakReference_1<TKey>*>* keys; // 0x0
		::System::Collections::Generic::List_1<TValue>* values; // 0x0
	};
}
