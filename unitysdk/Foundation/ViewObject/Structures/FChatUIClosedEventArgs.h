#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FChatUIClosedEventArgs_TypeDefinitionIndex = 45901;

	struct alignas(8) FChatUIClosedEventArgs
	{
		::System::String* ChatName; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* OutputDataKeys; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* OutputDataValues; // 0x20
	};
}
