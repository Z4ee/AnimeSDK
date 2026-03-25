#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B304C8FFCA7A1C6A.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1374DD187FE6CB9A_METHOD_1_2BD18DCDB6281447_OFFSET UNITYSDK_OFFSET(0x104F5C80)
#define CLASS_1_1374DD187FE6CB9A__CCTOR_OFFSET UNITYSDK_OFFSET(0x104F5CF0)

inline static constexpr unsigned int Class_1_1374DD187FE6CB9A_TypeDefinitionIndex = 45234;

class Class_1_1374DD187FE6CB9A : public ::System::Object
{
public:
	static ::Struct_2_B304C8FFCA7A1C6A* StaticGet_Field_1_0()
	{
		return (::Struct_2_B304C8FFCA7A1C6A*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1374DD187FE6CB9A_TypeDefinitionIndex)->GetStaticField(0x6880);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1374DD187FE6CB9A__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_2BD18DCDB6281447(::Struct_2_B304C8FFCA7A1C6A a1, ::Struct_2_B304C8FFCA7A1C6A a2)
	{
		return ((::System::Int32(*)(::Struct_2_B304C8FFCA7A1C6A, ::Struct_2_B304C8FFCA7A1C6A))((::PBYTE)hIl2Cpp + CLASS_1_1374DD187FE6CB9A_METHOD_1_2BD18DCDB6281447_OFFSET))(a1, a2);
	}
};
