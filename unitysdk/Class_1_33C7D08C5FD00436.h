#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }

inline static constexpr unsigned int Class_1_33C7D08C5FD00436_TypeDefinitionIndex = 91871;

template <typename T>
class Class_1_33C7D08C5FD00436 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<T>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Stack_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33C7D08C5FD00436_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	// static const ::System::Int32 Field_1_0 = 0x80; // 0x0
};
