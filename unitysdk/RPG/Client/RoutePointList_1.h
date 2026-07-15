#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int RoutePointList_1_TypeDefinitionIndex = 59559;

	template <typename T>
	class RoutePointList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* _Items; // 0x0
		::System::Collections::Generic::Dictionary_2<T, ::System::Collections::Generic::List_1<::System::Int32>*>* _ItemIndex; // 0x0
	};
}
