#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController_RecyclePool_1_TypeDefinitionIndex = 46621;

	template <typename T>
	class UIComicPageController_RecyclePool_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<T>* _pool; // 0x0
	};
}
