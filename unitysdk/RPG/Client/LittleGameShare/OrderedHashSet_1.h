#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int OrderedHashSet_1_TypeDefinitionIndex = 35512;

	template <typename T>
	class OrderedHashSet_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<T>* _Set; // 0x0
		::System::Collections::Generic::List_1<T>* _List; // 0x0
	};
}
