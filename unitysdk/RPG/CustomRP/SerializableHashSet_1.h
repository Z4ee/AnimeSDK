#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/SerializableHashSetBase.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace RPG::CustomRP { template <typename T> class SerializableHashSetBase_HashSet_1; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class ISet_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SerializableHashSet_1_TypeDefinitionIndex = 49518;

	template <typename T>
	class SerializableHashSet_1 : public ::RPG::CustomRP::SerializableHashSetBase
	{
	public:
		::RPG::CustomRP::SerializableHashSetBase_HashSet_1<T>* m_hashSet; // 0x0
		::Il2CppArray<T>* m_keys; // 0x0
	};
}
