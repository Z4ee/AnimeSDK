#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class Observer_1; }
namespace R3 { template <typename T> class Subject_1; }
namespace R3 { template <typename T> class Subject_1_ObserverNode; }

namespace R3
{
	inline static constexpr unsigned int Subject_1_ObserverNode_TypeDefinitionIndex = 35286;

	template <typename T>
	class Subject_1_ObserverNode : public ::System::Object
	{
	public:
		::R3::Observer_1<T>* Observer; // 0x0
		::R3::Subject_1<T>* parent; // 0x0
		::R3::Subject_1_ObserverNode<T>* _Previous_k__BackingField; // 0x0
		::R3::Subject_1_ObserverNode<T>* _Next_k__BackingField; // 0x0
		::System::UInt64 Version; // 0x0
	};
}
