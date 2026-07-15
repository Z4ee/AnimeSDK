#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2_CacheOperation; }
namespace RPG::Client { template <typename T1, typename T2> class LRUEntity_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int LRUCache_2_TypeDefinitionIndex = 33856;

	template <typename TKey, typename TValue>
	class LRUCache_2 : public ::System::Object
	{
	public:
		// static const ::System::Int32 DEFAULT_CAPACITY = 0xFF; // 0x0
		::System::Int32 _capacity; // 0x0
		::RPG::Client::LRUCache_2_CacheOperation<TKey, TValue>* _putInOper; // 0x0
		::RPG::Client::LRUCache_2_CacheOperation<TKey, TValue>* _takeOutOper; // 0x0
		::RPG::Client::LRUCache_2_CacheOperation<TKey, TValue>* _discardOper; // 0x0
		::System::Collections::Generic::LinkedList_1<::RPG::Client::LRUEntity_2<TKey, TValue>*>* _linkedList; // 0x0
		::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::RPG::Client::LRUEntity_2<TKey, TValue>*>*>* _dictionary; // 0x0
	};
}
