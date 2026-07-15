#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { template <typename T1, typename T2, typename T3, typename T4> class TableLRUCache_2_LRUEntity_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int TableLRUCache_2_TypeDefinitionIndex = 10503;

	template <typename TKey, typename TValue>
	class TableLRUCache_2 : public ::System::Object
	{
	public:
		::System::Int32 totalVisit; // 0x0
		::System::Int32 hitVisit; // 0x0
		// static const ::System::Int32 DEFAULT_CAPACITY = 0xFF; // 0x0
		::System::Int32 _capacity; // 0x0
		::RPG::GameCore::TableLRUCache_2_CacheOperation<TKey, TValue>* _putInOper; // 0x0
		::RPG::GameCore::TableLRUCache_2_CacheOperation<TKey, TValue>* _takeOutOper; // 0x0
		::RPG::GameCore::TableLRUCache_2_CacheOperation<TKey, TValue>* _discardOper; // 0x0
		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::TableLRUCache_2_LRUEntity_2<TKey, TValue, TKey, TValue>*>* _linkedList; // 0x0
		::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::TableLRUCache_2_LRUEntity_2<TKey, TValue, TKey, TValue>*>*>* _dictionary; // 0x0
	};
}
