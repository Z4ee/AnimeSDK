#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrimmedSingleItemArray_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TrimmedSingleItemArrayEnumerator_1_TypeDefinitionIndex = 33905;

	template <typename T>
	class TrimmedSingleItemArrayEnumerator_1 : public ::System::Object
	{
	public:
		::RPG::Client::TrimmedSingleItemArray_1<T> _array; // 0x0
		::System::Int32 _index; // 0x0
	};
}
