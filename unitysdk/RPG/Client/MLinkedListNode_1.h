#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class MLinkedListNode_1; }
namespace RPG::Client { template <typename T> class MLinkedList_1; }
namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int MLinkedListNode_1_TypeDefinitionIndex = 33816;

	template <typename T>
	class MLinkedListNode_1 : public ::System::Object
	{
	public:
		::RPG::Client::MLinkedList_1<T>* _LinkedList; // 0x0
		::RPG::Client::MLinkedListNode_1<T>* _PreNode; // 0x0
		::RPG::Client::MLinkedListNode_1<T>* _NextNode; // 0x0
		T NodeValue; // 0x0
	};
}
