#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Utils
{
	inline static constexpr unsigned int SerializableArray_1_TypeDefinitionIndex = 37255;

	template <typename T>
	class SerializableArray_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* Array; // 0x0
	};
}
