#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion { class HierarchyTree_Element; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ParadoxNotion
{
	inline static constexpr unsigned int HierarchyTree_Element__GetAllChildrenReferencesOfType_d__15_1_TypeDefinitionIndex = 27208;

	template <typename T>
	class HierarchyTree_Element__GetAllChildrenReferencesOfType_d__15_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::ParadoxNotion::HierarchyTree_Element* __4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0
		::ParadoxNotion::HierarchyTree_Element* _element_5__3; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* __7__wrap3; // 0x0
	};
}
