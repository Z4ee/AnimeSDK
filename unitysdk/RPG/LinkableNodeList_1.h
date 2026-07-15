#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class LinkableNodeListEnumerator_1; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }

namespace RPG
{
	inline static constexpr unsigned int LinkableNodeList_1_TypeDefinitionIndex = 6755;

	template <typename T>
	class LinkableNodeList_1 : public ::System::Object
	{
	public:
		::System::Action_1<T>* PreRemoveCallback; // 0x0
		T _first; // 0x0
		T _last; // 0x0
	};
}
