#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int ComponentContainer_1_TypeDefinitionIndex = 52423;

	template <typename T>
	class ComponentContainer_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int64, T>* _components; // 0x0
	};
}
