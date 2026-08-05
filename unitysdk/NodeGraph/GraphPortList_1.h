#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace NodeGraph
{
	inline static constexpr unsigned int GraphPortList_1_TypeDefinitionIndex = 83493;

	template <typename T>
	class GraphPortList_1 : public ::System::Object
	{
	public:
		T _first; // 0x0
		::System::Collections::Generic::List_1<T>* _others; // 0x0
	};
}
