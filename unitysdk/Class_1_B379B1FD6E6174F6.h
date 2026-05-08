#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }

inline static constexpr unsigned int Class_1_B379B1FD6E6174F6_TypeDefinitionIndex = 47237;

template <typename T>
class Class_1_B379B1FD6E6174F6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<T>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Stack_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B379B1FD6E6174F6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static T* StaticGet_Field_1_1()
	{
		return (T*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B379B1FD6E6174F6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
