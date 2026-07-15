#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int CollectionWrapper_1_TypeDefinitionIndex = 9325;

	template <typename T>
	class CollectionWrapper_1 : public ::System::Object
	{
	public:
		::System::Collections::IList* _list; // 0x0
		::System::Collections::Generic::ICollection_1<T>* _genericCollection; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
