#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1050.h"

class Class_2_208CC9941471731A_1176;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2E1C4FD7A9CC7524_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1C3E40E0)
#define CLASS_2_2E1C4FD7A9CC7524_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1C3E3FD0)
#define CLASS_2_2E1C4FD7A9CC7524_METHOD_2_66C1FFCD87DBD8D5_OFFSET UNITYSDK_OFFSET(0x1C3E38D0)
#define CLASS_2_2E1C4FD7A9CC7524_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C3E3170)
#define CLASS_2_2E1C4FD7A9CC7524_METHOD_2_DCBEA4EC7225BC80_OFFSET UNITYSDK_OFFSET(0x1C3E4DB0)
#define CLASS_2_2E1C4FD7A9CC7524_METHOD_2_E642B53EA136AF87_OFFSET UNITYSDK_OFFSET(0x1C3E32E0)
#define CLASS_2_2E1C4FD7A9CC7524_METHOD_2_F75A3C68F789296C_OFFSET UNITYSDK_OFFSET(0x1C3E42B0)
#define CLASS_2_2E1C4FD7A9CC7524__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E31B0)

inline static constexpr unsigned int Class_2_2E1C4FD7A9CC7524_TypeDefinitionIndex = 88631;

class Class_2_2E1C4FD7A9CC7524 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_3; // 0x18
	::Struct_2_1862835F8661A21F_1050 Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1176*>* Field_2_1; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1176*>*>* Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1176* Method_2_E642B53EA136AF87(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::Class_2_208CC9941471731A_1176*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524_METHOD_2_E642B53EA136AF87_OFFSET))(this, a1);
	}

	::System::Void Method_2_66C1FFCD87DBD8D5(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524_METHOD_2_66C1FFCD87DBD8D5_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1176* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1176*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_F75A3C68F789296C(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524_METHOD_2_F75A3C68F789296C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1176*>* Method_2_DCBEA4EC7225BC80()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1176*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524_METHOD_2_DCBEA4EC7225BC80_OFFSET))(this);
	}
};
