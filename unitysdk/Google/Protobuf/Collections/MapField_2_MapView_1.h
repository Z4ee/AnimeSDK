#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace System { class Array; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2_MapView_1_TypeDefinitionIndex = 5587;

	template <typename TKey, typename TValue, typename T>
	class MapField_2_MapView_1 : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<TKey, TValue>* parent; // 0x0
		::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, T>* projection; // 0x0
		::System::Func_2<T, ::System::Boolean>* containsCheck; // 0x0
	};
}
