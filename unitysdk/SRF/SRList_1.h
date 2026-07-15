#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

namespace SRF
{
	inline static constexpr unsigned int SRList_1_TypeDefinitionIndex = 33923;

	template <typename T>
	class SRList_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _buffer; // 0x0
		::System::Int32 _count; // 0x0
		::System::Collections::Generic::EqualityComparer_1<T>* _equalityComparer; // 0x0
		::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* _readOnlyWrapper; // 0x0
	};
}
