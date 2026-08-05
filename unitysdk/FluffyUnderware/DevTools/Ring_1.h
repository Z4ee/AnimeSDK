#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int Ring_1_TypeDefinitionIndex = 28980;

	template <typename T>
	class Ring_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* mList; // 0x0
		::System::Int32 _Size_k__BackingField; // 0x0
		::System::Int32 mIndex; // 0x0
	};
}
