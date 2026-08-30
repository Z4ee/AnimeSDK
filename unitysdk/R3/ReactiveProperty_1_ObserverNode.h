#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class Observer_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReactiveProperty_1_ObserverNode; }

namespace R3
{
	inline static constexpr unsigned int ReactiveProperty_1_ObserverNode_TypeDefinitionIndex = 35278;

	template <typename T>
	class ReactiveProperty_1_ObserverNode : public ::System::Object
	{
	public:
		::R3::Observer_1<T>* Observer; // 0x0
		::R3::ReactiveProperty_1<T>* parent; // 0x0
		::R3::ReactiveProperty_1_ObserverNode<T>* _Previous_k__BackingField; // 0x0
		::R3::ReactiveProperty_1_ObserverNode<T>* _Next_k__BackingField; // 0x0
	};
}
