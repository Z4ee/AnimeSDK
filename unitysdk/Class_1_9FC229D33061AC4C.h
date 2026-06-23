#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
template <typename T> class Class_1_9FC229D33061AC4C;

inline static constexpr unsigned int Class_1_9FC229D33061AC4C_TypeDefinitionIndex = 43498;

template <typename T>
class Class_1_9FC229D33061AC4C : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	static ::System::Object** StaticGet_Field_1_3()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9FC229D33061AC4C_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Class_1_9FC229D33061AC4C<T>** StaticGet_Field_1_4()
	{
		return (::Class_1_9FC229D33061AC4C<T>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9FC229D33061AC4C_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Stack_1<T>* Field_1_5; // 0x0
	::System::Int64 Field_1_6; // 0x0
};
