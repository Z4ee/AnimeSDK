#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_400.h"

class Class_2_208CC9941471731A_1215;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D43F76BF4351F32C_19_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1CF5B610)
#define CLASS_2_D43F76BF4351F32C_19_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CF5B4D0)
#define CLASS_2_D43F76BF4351F32C_19_METHOD_2_CFC3030A2F1B39EC_1_OFFSET UNITYSDK_OFFSET(0x1CF5BD40)
#define CLASS_2_D43F76BF4351F32C_19_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1CF5BB60)
#define CLASS_2_D43F76BF4351F32C_19_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1CF5BF20)
#define CLASS_2_D43F76BF4351F32C_19_METHOD_2_DDA7E14998A3D8C3_OFFSET UNITYSDK_OFFSET(0x1CF5B730)
#define CLASS_2_D43F76BF4351F32C_19__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF5B510)

inline static constexpr unsigned int Class_2_D43F76BF4351F32C_19_TypeDefinitionIndex = 92437;

class Class_2_D43F76BF4351F32C_19 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1215*>* Field_2_7; // 0x18
	::Struct_2_1862835F8661A21F_400 Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1215*>* Field_2_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_19__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_19_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_19_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_DDA7E14998A3D8C3(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_19_METHOD_2_DDA7E14998A3D8C3_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1215* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1215*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_19_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::Class_2_208CC9941471731A_1215* Method_2_CFC3030A2F1B39EC_1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1215*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_19_METHOD_2_CFC3030A2F1B39EC_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D43F76BF4351F32C_19_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}
};
