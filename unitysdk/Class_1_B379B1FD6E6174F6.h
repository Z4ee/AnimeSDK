#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
template <typename T> class Class_1_B379B1FD6E6174F6;

inline static constexpr unsigned int Class_1_B379B1FD6E6174F6_TypeDefinitionIndex = 47398;

template <typename T>
class Class_1_B379B1FD6E6174F6 : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<T>* Field_1_0; // 0x0
	static ::Class_1_B379B1FD6E6174F6<T>** StaticGet_Field_1_1()
	{
		return (::Class_1_B379B1FD6E6174F6<T>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B379B1FD6E6174F6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
