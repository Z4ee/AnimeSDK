#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int CloneCollection_1_EnumerableCollection_TypeDefinitionIndex = 28652;

	template <typename T>
	class CloneCollection_1_EnumerableCollection : public ::System::Object
	{
	public:
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 count; // 0x0
	};
}
