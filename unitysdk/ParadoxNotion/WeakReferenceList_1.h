#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion { template <typename T> class WeakReferenceList_1; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace ParadoxNotion
{
	inline static constexpr unsigned int WeakReferenceList_1_TypeDefinitionIndex = 29936;

	template <typename T>
	class WeakReferenceList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::WeakReference_1<T>*>* list; // 0x0
		::System::Collections::Generic::List_1<T>* referenceList; // 0x0
	};
}
