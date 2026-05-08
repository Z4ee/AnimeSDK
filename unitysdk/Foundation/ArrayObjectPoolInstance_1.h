#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Foundation
{
	inline static constexpr unsigned int ArrayObjectPoolInstance_1_TypeDefinitionIndex = 7890;

	template <typename T>
	class ArrayObjectPoolInstance_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Stack_1<::Il2CppArray<T>*>*>* dict; // 0x0
	};
}
