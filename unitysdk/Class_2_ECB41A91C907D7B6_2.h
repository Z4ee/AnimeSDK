#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1203.h"

class Class_2_E6512DD60E63A44C;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ECB41A91C907D7B6_2_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1CA23310)
#define CLASS_2_ECB41A91C907D7B6_2_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1CA233C0)
#define CLASS_2_ECB41A91C907D7B6_2_METHOD_2_C4297EFF013E4E78_OFFSET UNITYSDK_OFFSET(0x1CA23230)
#define CLASS_2_ECB41A91C907D7B6_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CA23160)
#define CLASS_2_ECB41A91C907D7B6_2_METHOD_2_DCBEA4EC7225BC80_OFFSET UNITYSDK_OFFSET(0x1CA237E0)
#define CLASS_2_ECB41A91C907D7B6_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA231A0)

inline static constexpr unsigned int Class_2_ECB41A91C907D7B6_2_TypeDefinitionIndex = 92569;

class Class_2_ECB41A91C907D7B6_2 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_E6512DD60E63A44C*>* Field_2_0; // 0x18
	::Struct_2_1862835F8661A21F_1203 Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_E6512DD60E63A44C* Method_2_C4297EFF013E4E78(::System::Int32 a1)
	{
		return ((::Class_2_E6512DD60E63A44C*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_2_METHOD_2_C4297EFF013E4E78_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_2_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_2_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_E6512DD60E63A44C*>* Method_2_DCBEA4EC7225BC80()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_E6512DD60E63A44C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB41A91C907D7B6_2_METHOD_2_DCBEA4EC7225BC80_OFFSET))(this);
	}
};
