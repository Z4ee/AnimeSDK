#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1526.h"

class Class_2_208CC9941471731A_1204;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8AFAEFC86AF51D7D_1_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x100E3930)
#define CLASS_2_8AFAEFC86AF51D7D_1_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x100E3390)
#define CLASS_2_8AFAEFC86AF51D7D_1_METHOD_2_6AD339F282AC5D0C_OFFSET UNITYSDK_OFFSET(0x100E2CE0)
#define CLASS_2_8AFAEFC86AF51D7D_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x100E2BA0)
#define CLASS_2_8AFAEFC86AF51D7D_1_METHOD_2_CEB5A1666EAB8324_OFFSET UNITYSDK_OFFSET(0x100E34B0)
#define CLASS_2_8AFAEFC86AF51D7D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x100E2BE0)

inline static constexpr unsigned int Class_2_8AFAEFC86AF51D7D_1_TypeDefinitionIndex = 91642;

class Class_2_8AFAEFC86AF51D7D_1 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1204*>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1204*>*>* Field_2_7; // 0x20
	::Struct_2_1862835F8661A21F_1526 Field_2_3; // 0x28
	::System::Int32 Field_2_2; // 0x40
	::System::Int32 Field_2_1; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFAEFC86AF51D7D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFAEFC86AF51D7D_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_6AD339F282AC5D0C(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_8AFAEFC86AF51D7D_1_METHOD_2_6AD339F282AC5D0C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1204*>* Method_2_CEB5A1666EAB8324(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1204*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8AFAEFC86AF51D7D_1_METHOD_2_CEB5A1666EAB8324_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFAEFC86AF51D7D_1_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1204* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1204*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8AFAEFC86AF51D7D_1_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}
};
