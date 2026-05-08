#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject::Container { template <typename T> class ComponentContainer_1; }
namespace System { class Object; }

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int ComponentContainer_1_ComponentContainerIterator_TypeDefinitionIndex = 68209;

	template <typename T>
	struct ComponentContainer_1_ComponentContainerIterator
	{
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::Int64, T> _enumerator; // 0x0
	};
}
