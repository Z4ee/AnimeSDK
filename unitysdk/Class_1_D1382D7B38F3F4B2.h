#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }

inline static constexpr unsigned int Class_1_D1382D7B38F3F4B2_TypeDefinitionIndex = 47400;

template <typename D, typename T>
class Class_1_D1382D7B38F3F4B2 : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<D>* Field_1_0; // 0x0
	::System::Int32 Field_1_1; // 0x0
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1382D7B38F3F4B2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
