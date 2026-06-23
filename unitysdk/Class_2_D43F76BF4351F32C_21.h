#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1209.h"

class Class_2_208CC9941471731A_1177;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D43F76BF4351F32C_21_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1C698710)
#define CLASS_2_D43F76BF4351F32C_21_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1C698BC0)
#define CLASS_2_D43F76BF4351F32C_21_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C698640)
#define CLASS_2_D43F76BF4351F32C_21_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1C6987C0)
#define CLASS_2_D43F76BF4351F32C_21_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1C6989A0)
#define CLASS_2_D43F76BF4351F32C_21__CTOR_OFFSET UNITYSDK_OFFSET(0x1C698680)

inline static constexpr unsigned int Class_2_D43F76BF4351F32C_21_TypeDefinitionIndex = 88128;

class Class_2_D43F76BF4351F32C_21 : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_1209 Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1177*>* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_21__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_21_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_21_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1177* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1177*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_21_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_21_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_21_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}
};
