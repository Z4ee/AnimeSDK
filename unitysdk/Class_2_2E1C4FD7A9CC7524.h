#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_937.h"

class Class_2_208CC9941471731A_1252;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2E1C4FD7A9CC7524_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1D7C2AA0)
#define CLASS_2_2E1C4FD7A9CC7524_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1D7C3E40)
#define CLASS_2_2E1C4FD7A9CC7524_METHOD_2_66C1FFCD87DBD8D5_OFFSET UNITYSDK_OFFSET(0x1D7C3740)
#define CLASS_2_2E1C4FD7A9CC7524_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1D7C28A0)
#define CLASS_2_2E1C4FD7A9CC7524_METHOD_2_D10214B45E9B4826_OFFSET UNITYSDK_OFFSET(0x1D7C3F50)
#define CLASS_2_2E1C4FD7A9CC7524_METHOD_2_DCBEA4EC7225BC80_OFFSET UNITYSDK_OFFSET(0x1D7C2A10)
#define CLASS_2_2E1C4FD7A9CC7524_METHOD_2_F75A3C68F789296C_OFFSET UNITYSDK_OFFSET(0x1D7C2C70)
#define CLASS_2_2E1C4FD7A9CC7524__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C28E0)

inline static constexpr unsigned int Class_2_2E1C4FD7A9CC7524_TypeDefinitionIndex = 92424;

class Class_2_2E1C4FD7A9CC7524 : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_937 Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1252*>* Field_2_0; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1252*>*>* Field_2_7; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1252*>* Method_2_DCBEA4EC7225BC80()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1252*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524_METHOD_2_DCBEA4EC7225BC80_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1252* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1252*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_F75A3C68F789296C(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524_METHOD_2_F75A3C68F789296C_OFFSET))(this, a1);
	}

	::System::Void Method_2_66C1FFCD87DBD8D5(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524_METHOD_2_66C1FFCD87DBD8D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1252* Method_2_D10214B45E9B4826(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::Class_2_208CC9941471731A_1252*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_2E1C4FD7A9CC7524_METHOD_2_D10214B45E9B4826_OFFSET))(this, a1);
	}
};
