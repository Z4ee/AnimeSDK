#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class MLinkedListNode_1; }
namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int MLinkedList_1_TypeDefinitionIndex = 33815;

	template <typename T>
	class MLinkedList_1 : public ::System::Object
	{
	public:
		::RPG::Client::MLinkedListNode_1<T>* _HeadNode; // 0x0
		::RPG::Client::MLinkedListNode_1<T>* _TailNode; // 0x0
		::RPG::Client::MLinkedListNode_1<T>* _CurrentNode; // 0x0
		::System::Boolean _IsClearCurrent; // 0x0
	};
}
