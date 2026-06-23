#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArrayOptions.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

inline static constexpr unsigned int Class_1_5A101950313A38F2_TypeDefinitionIndex = 86614;

template <typename T>
class Class_1_5A101950313A38F2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x2; // 0x0
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A101950313A38F2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Unity::Collections::NativeArray_1<T> Field_1_2; // 0x0
	::System::Boolean Field_1_3; // 0x0
};
