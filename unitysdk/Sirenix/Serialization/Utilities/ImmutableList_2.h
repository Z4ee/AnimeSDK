#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int ImmutableList_2_TypeDefinitionIndex = 7656;

	template <typename TList, typename TElement>
	class ImmutableList_2 : public ::System::Object
	{
	public:
		TList innerList; // 0x0
	};
}
