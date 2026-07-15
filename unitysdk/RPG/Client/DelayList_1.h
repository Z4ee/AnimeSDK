#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class DelayList_1_FuncEnumItems; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int DelayList_1_TypeDefinitionIndex = 56973;

	template <typename T>
	class DelayList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* Items; // 0x0
		::RPG::Client::DelayList_1_FuncEnumItems<T>* _FuncEnumItems; // 0x0
	};
}
