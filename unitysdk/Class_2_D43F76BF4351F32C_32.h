#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_416.h"

class Class_2_208CC9941471731A_1187;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D43F76BF4351F32C_32_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1B7351C0)
#define CLASS_2_D43F76BF4351F32C_32_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1B734DC0)
#define CLASS_2_D43F76BF4351F32C_32_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B734CF0)
#define CLASS_2_D43F76BF4351F32C_32_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1B735490)
#define CLASS_2_D43F76BF4351F32C_32_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1B735270)
#define CLASS_2_D43F76BF4351F32C_32__CTOR_OFFSET UNITYSDK_OFFSET(0x1B734D30)

inline static constexpr unsigned int Class_2_D43F76BF4351F32C_32_TypeDefinitionIndex = 88665;

class Class_2_D43F76BF4351F32C_32 : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_416 Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1187*>* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_32__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_32_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_32_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_32_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_32_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1187* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1187*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_32_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}
};
