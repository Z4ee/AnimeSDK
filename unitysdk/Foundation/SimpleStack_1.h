#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int SimpleStack_1_TypeDefinitionIndex = 78006;

	template <typename T>
	class SimpleStack_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		// static const ::System::Int32 _defaultCapacity = 0x4; // 0x0
		static ::Il2CppArray<T>** StaticGet__emptyArray()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(SimpleStack_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
