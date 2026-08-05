#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1280.h"

class Class_2_208CC9941471731A_1223;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ECB41A91C907D7B6_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1D7D2A70)
#define CLASS_2_ECB41A91C907D7B6_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1D7D2B20)
#define CLASS_2_ECB41A91C907D7B6_METHOD_2_75E0EB7A77786694_OFFSET UNITYSDK_OFFSET(0x1D7D2F40)
#define CLASS_2_ECB41A91C907D7B6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1D7D29A0)
#define CLASS_2_ECB41A91C907D7B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D29E0)

inline static constexpr unsigned int Class_2_ECB41A91C907D7B6_TypeDefinitionIndex = 91798;

class Class_2_ECB41A91C907D7B6 : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_1280 Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1223*>* Field_2_0; // 0x30

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

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1223*>* Method_2_75E0EB7A77786694(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1223*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_METHOD_2_75E0EB7A77786694_OFFSET))(this, a1);
	}
};
