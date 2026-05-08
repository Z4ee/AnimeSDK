#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A2C3F3308DEC30C.h"
#include "unitysdk/Struct_2_EB8B7F5FFB953B6C.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_2_6C0682E92F2BC91B_TypeDefinitionIndex = 62440;

template <typename T>
class Class_2_6C0682E92F2BC91B : public ::Class_1_8A2C3F3308DEC30C
{
public:
	static T* StaticGet_Field_2_0()
	{
		return (T*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C0682E92F2BC91B_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::Class_1_8A2C3F3308DEC30C*>* Field_2_1; // 0x0
};
