#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1377.h"

class Class_2_06116593F7C9AA0E;
class Class_2_AA2DF3435829EFF0_3;
class Class_2_ECB41A91C907D7B6_1;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_8570C0790CFECF4E_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1D136D00)
#define CLASS_2_8570C0790CFECF4E_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1D12D640)
#define CLASS_2_8570C0790CFECF4E_METHOD_2_4349549E16B7C3A0_OFFSET UNITYSDK_OFFSET(0x1D136620)
#define CLASS_2_8570C0790CFECF4E_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1D136DB0)
#define CLASS_2_8570C0790CFECF4E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1D1364E0)
#define CLASS_2_8570C0790CFECF4E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1365B0)
#define CLASS_2_8570C0790CFECF4E__CTOR_OFFSET UNITYSDK_OFFSET(0x1D136520)

inline static constexpr unsigned int Class_2_8570C0790CFECF4E_TypeDefinitionIndex = 91883;

class Class_2_8570C0790CFECF4E : public ::Class_1_275515F210334D06
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_Field_2_6()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8570C0790CFECF4E_TypeDefinitionIndex)->GetStaticField(0x51FD0);
	}
	::Struct_2_1862835F8661A21F_1377 Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_06116593F7C9AA0E*>* Field_2_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8570C0790CFECF4E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8570C0790CFECF4E__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8570C0790CFECF4E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_06116593F7C9AA0E* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_06116593F7C9AA0E*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8570C0790CFECF4E_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Void Method_2_4349549E16B7C3A0(::Class_2_AA2DF3435829EFF0_3* a1, ::Class_2_ECB41A91C907D7B6_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AA2DF3435829EFF0_3*, ::Class_2_ECB41A91C907D7B6_1*))((::PBYTE)hIl2Cpp + CLASS_2_8570C0790CFECF4E_METHOD_2_4349549E16B7C3A0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8570C0790CFECF4E_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_8570C0790CFECF4E_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}
};
