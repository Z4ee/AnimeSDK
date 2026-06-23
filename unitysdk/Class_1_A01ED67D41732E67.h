#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

inline static constexpr unsigned int Class_1_A01ED67D41732E67_TypeDefinitionIndex = 67958;

template <typename T>
class Class_1_A01ED67D41732E67 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A01ED67D41732E67_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Queue_1<T>* Field_1_1; // 0x0
	::System::Boolean Field_1_2; // 0x0
	T Field_1_3; // 0x0
};
