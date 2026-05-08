#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_114.h"

class Class_2_208CC9941471731A_1072;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_114D2BF5C0137977_1_OFFSET UNITYSDK_OFFSET(0x1BCB8270)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_114D2BF5C0137977_OFFSET UNITYSDK_OFFSET(0x1BCB8150)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1BCB7B20)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_4BFD22BA064FDA06_OFFSET UNITYSDK_OFFSET(0x1BCB80D0)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_66C1FFCD87DBD8D5_OFFSET UNITYSDK_OFFSET(0x1BCB6EE0)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_B5936D614C5B0573_OFFSET UNITYSDK_OFFSET(0x1BCB7C40)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BCB6C80)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1BCB7CD0)
#define CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1BCB7EB0)
#define CLASS_2_1FF0D69CFD6F7C6D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB6CC0)

inline static constexpr unsigned int Class_2_1FF0D69CFD6F7C6D_TypeDefinitionIndex = 83216;

class Class_2_1FF0D69CFD6F7C6D : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_2_2; // 0x20
	::Struct_2_1862835F8661A21F_114 Field_2_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1072*>* Field_2_1; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_66C1FFCD87DBD8D5(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_66C1FFCD87DBD8D5_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1072* Method_2_B5936D614C5B0573(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1072*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_B5936D614C5B0573_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Int32 Method_2_4BFD22BA064FDA06(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_4BFD22BA064FDA06_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_114D2BF5C0137977(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_114D2BF5C0137977_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1072* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1072*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_114D2BF5C0137977_1(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1FF0D69CFD6F7C6D_METHOD_2_114D2BF5C0137977_1_OFFSET))(this, a1);
	}
};
