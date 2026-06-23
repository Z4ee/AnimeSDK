#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1425.h"

class Class_2_208CC9941471731A_1162;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D43F76BF4351F32C_15_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1BD1E960)
#define CLASS_2_D43F76BF4351F32C_15_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BD1E420)
#define CLASS_2_D43F76BF4351F32C_15_METHOD_2_CFC3030A2F1B39EC_1_OFFSET UNITYSDK_OFFSET(0x1BD1EA80)
#define CLASS_2_D43F76BF4351F32C_15_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1BD1E780)
#define CLASS_2_D43F76BF4351F32C_15_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1BD1E560)
#define CLASS_2_D43F76BF4351F32C_15_METHOD_2_DDA7E14998A3D8C3_OFFSET UNITYSDK_OFFSET(0x1BD1EC60)
#define CLASS_2_D43F76BF4351F32C_15__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD1E460)

inline static constexpr unsigned int Class_2_D43F76BF4351F32C_15_TypeDefinitionIndex = 88147;

class Class_2_D43F76BF4351F32C_15 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1162*>* Field_2_2; // 0x18
	::Struct_2_1862835F8661A21F_1425 Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1162*>* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_15__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_15_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_15_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1162* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1162*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_15_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_15_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1162* Method_2_CFC3030A2F1B39EC_1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1162*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_15_METHOD_2_CFC3030A2F1B39EC_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DDA7E14998A3D8C3(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_15_METHOD_2_DDA7E14998A3D8C3_OFFSET))(this, a1);
	}
};
