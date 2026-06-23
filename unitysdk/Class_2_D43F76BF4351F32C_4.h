#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_144.h"

class Class_2_94EDEFF9AE3C046E;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D43F76BF4351F32C_4_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1C2762F0)
#define CLASS_2_D43F76BF4351F32C_4_METHOD_2_5D6624A62F65B989_OFFSET UNITYSDK_OFFSET(0x1C2763A0)
#define CLASS_2_D43F76BF4351F32C_4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C2760D0)
#define CLASS_2_D43F76BF4351F32C_4_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1C276110)
#define CLASS_2_D43F76BF4351F32C_4_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1C26AF90)
#define CLASS_2_D43F76BF4351F32C_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C26BF30)

inline static constexpr unsigned int Class_2_D43F76BF4351F32C_4_TypeDefinitionIndex = 88685;

class Class_2_D43F76BF4351F32C_4 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_94EDEFF9AE3C046E*>* Field_2_1; // 0x18
	::Struct_2_1862835F8661A21F_144 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_94EDEFF9AE3C046E* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_94EDEFF9AE3C046E*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_4_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_4_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_4_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_5D6624A62F65B989(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_4_METHOD_2_5D6624A62F65B989_OFFSET))(this, a1);
	}
};
