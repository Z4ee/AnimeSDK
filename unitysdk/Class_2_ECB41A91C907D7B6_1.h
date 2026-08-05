#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_528.h"

class Class_1_5DA2E7556103D5A3_342;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_ECB41A91C907D7B6_1_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1CF5E4B0)
#define CLASS_2_ECB41A91C907D7B6_1_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1CF5E730)
#define CLASS_2_ECB41A91C907D7B6_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CF5E3E0)
#define CLASS_2_ECB41A91C907D7B6_1_METHOD_2_D8CD1E413395E05E_OFFSET UNITYSDK_OFFSET(0x1CF5E560)
#define CLASS_2_ECB41A91C907D7B6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF5E420)

inline static constexpr unsigned int Class_2_ECB41A91C907D7B6_1_TypeDefinitionIndex = 92586;

class Class_2_ECB41A91C907D7B6_1 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_5DA2E7556103D5A3_342*>* Field_2_0; // 0x18
	::Struct_2_1862835F8661A21F_528 Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_1_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_1_5DA2E7556103D5A3_342* Method_2_D8CD1E413395E05E(::System::Int32 a1)
	{
		return ((::Class_1_5DA2E7556103D5A3_342*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_1_METHOD_2_D8CD1E413395E05E_OFFSET))(this, a1);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_1_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}
};
