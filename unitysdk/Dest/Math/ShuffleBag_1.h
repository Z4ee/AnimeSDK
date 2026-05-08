#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Dest::Math { class Rand; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Dest::Math
{
	inline static constexpr unsigned int ShuffleBag_1_TypeDefinitionIndex = 33245;

	template <typename T>
	class ShuffleBag_1 : public ::System::Object
	{
	public:
		::Dest::Math::Rand* _rand; // 0x0
		::System::Collections::Generic::List_1<T>* _items; // 0x0
		::System::Int32 _index; // 0x0
	};
}
