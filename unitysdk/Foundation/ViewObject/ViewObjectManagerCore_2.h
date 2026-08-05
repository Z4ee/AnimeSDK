#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Container/SparseElementHandle_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Container { template <typename T> class TSparseList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManagerCore_2_TypeDefinitionIndex = 43912;

	template <typename TViewObjectHandle, typename TViewObject>
	class ViewObjectManagerCore_2 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::Container::TSparseList_1<TViewObject>* ViewObjectContainer; // 0x0
		::System::Collections::Generic::List_1<TViewObjectHandle>* WaitDestroyViewObject; // 0x0
	};
}
