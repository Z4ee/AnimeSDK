#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

namespace System { class String; }

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ValueDropdownList_1_TypeDefinitionIndex = 9637;

	template <typename T>
	class ValueDropdownList_1 : public ::System::Collections::Generic::List_1<::Sirenix::OdinInspector::ValueDropdownItem_1<T>>
	{
	public:
	};
}
