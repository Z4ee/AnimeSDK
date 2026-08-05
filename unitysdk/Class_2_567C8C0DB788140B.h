#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1507.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_1217;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_567C8C0DB788140B_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1CF6C8B0)
#define CLASS_2_567C8C0DB788140B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CF6C6F0)
#define CLASS_2_567C8C0DB788140B_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1CF6D150)
#define CLASS_2_567C8C0DB788140B_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1CF6CF30)
#define CLASS_2_567C8C0DB788140B_METHOD_2_DDA7E14998A3D8C3_OFFSET UNITYSDK_OFFSET(0x1CF6C9D0)
#define CLASS_2_567C8C0DB788140B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF6C730)

inline static constexpr unsigned int Class_2_567C8C0DB788140B_TypeDefinitionIndex = 92153;

class Class_2_567C8C0DB788140B : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1217*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1217*>* Field_2_2; // 0x20
	::Struct_2_1862835F8661A21F_1507 Field_2_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::Class_2_208CC9941471731A_1217*>* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_567C8C0DB788140B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_567C8C0DB788140B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_567C8C0DB788140B_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_DDA7E14998A3D8C3(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_567C8C0DB788140B_METHOD_2_DDA7E14998A3D8C3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_567C8C0DB788140B_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1217* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1217*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_567C8C0DB788140B_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}
};
