#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int ReusableList_1_TypeDefinitionIndex = 67774;

	template <typename T>
	class ReusableList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* _Items; // 0x0
		::System::Int32 _Count; // 0x0
	};
}
