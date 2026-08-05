#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int DictionaryList_2_TypeDefinitionIndex = 37941;

	template <typename TKey, typename TValue>
	class DictionaryList_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<TValue>* _list; // 0x0
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dict; // 0x0
	};
}
