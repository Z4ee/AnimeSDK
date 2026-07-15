#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class LinkableNodeList_1; }
namespace System { template <typename T> class Action_1; }

namespace RPG
{
	inline static constexpr unsigned int LinkableNodeListEnumerator_1_TypeDefinitionIndex = 6756;

	template <typename T>
	class LinkableNodeListEnumerator_1 : public ::System::Object
	{
	public:
		::RPG::LinkableNodeList_1<T>* _list; // 0x0
		::System::Boolean _isFirst; // 0x0
		T _curNode; // 0x0
		::System::Action_1<T>* _preRemoveCallback; // 0x0
	};
}
