#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_44A8FD5EE475BAE7.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FAvatarInOutAreaCategory_TypeDefinitionIndex = 57926;

	struct alignas(8) FAvatarInOutAreaCategory
	{
		::Enum_3_44A8FD5EE475BAE7 AreaCategoryType; // 0x10
		::System::String* SceneNameId; // 0x18
		::System::Boolean IsEntering; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* AreaTagList; // 0x28
	};
}
