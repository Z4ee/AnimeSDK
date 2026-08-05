#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1471.h"

class Class_2_4358BE050189FB3B;
class NewByteBuffer;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_B1DD4C07A91C4E0F_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1EB39C20)
#define CLASS_2_B1DD4C07A91C4E0F_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1EB39CD0)
#define CLASS_2_B1DD4C07A91C4E0F_METHOD_2_A1E2A479D642BB13_OFFSET UNITYSDK_OFFSET(0x1EB3A500)
#define CLASS_2_B1DD4C07A91C4E0F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1EB39B50)
#define CLASS_2_B1DD4C07A91C4E0F_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1EB3A2E0)
#define CLASS_2_B1DD4C07A91C4E0F_METHOD_2_DDA7E14998A3D8C3_OFFSET UNITYSDK_OFFSET(0x1EB39EA0)
#define CLASS_2_B1DD4C07A91C4E0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB39B90)

inline static constexpr unsigned int Class_2_B1DD4C07A91C4E0F_TypeDefinitionIndex = 92892;

class Class_2_B1DD4C07A91C4E0F : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_1471 Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_4358BE050189FB3B*>* Field_2_0; // 0x30
	::Il2CppArray<::System::Byte>* Field_2_3; // 0x38
	::NewByteBuffer* Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1DD4C07A91C4E0F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1DD4C07A91C4E0F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1DD4C07A91C4E0F_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_2_4358BE050189FB3B* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_4358BE050189FB3B*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B1DD4C07A91C4E0F_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDA7E14998A3D8C3(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_B1DD4C07A91C4E0F_METHOD_2_DDA7E14998A3D8C3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1DD4C07A91C4E0F_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::Class_2_B1DD4C07A91C4E0F* Method_2_A1E2A479D642BB13()
	{
		return ((::Class_2_B1DD4C07A91C4E0F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1DD4C07A91C4E0F_METHOD_2_A1E2A479D642BB13_OFFSET))(this);
	}
};
