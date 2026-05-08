#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_277.h"

class Class_2_208CC9941471731A_1073;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ECB41A91C907D7B6_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1BB9CFE0)
#define CLASS_2_ECB41A91C907D7B6_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1BB9D090)
#define CLASS_2_ECB41A91C907D7B6_METHOD_2_75E0EB7A77786694_OFFSET UNITYSDK_OFFSET(0x1BB9D4A0)
#define CLASS_2_ECB41A91C907D7B6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BB9CF10)
#define CLASS_2_ECB41A91C907D7B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB9CF50)

inline static constexpr unsigned int Class_2_ECB41A91C907D7B6_TypeDefinitionIndex = 83279;

class Class_2_ECB41A91C907D7B6 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1073*>* Field_2_1; // 0x18
	::Struct_2_1862835F8661A21F_277 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1073*>* Method_2_75E0EB7A77786694(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1073*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_METHOD_2_75E0EB7A77786694_OFFSET))(this, a1);
	}
};
