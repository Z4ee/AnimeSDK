#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_603.h"

class Class_2_208CC9941471731A_1248;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_34247B346DD1159B_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1E05A570)
#define CLASS_2_34247B346DD1159B_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1E05A470)
#define CLASS_2_34247B346DD1159B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1E059FE0)
#define CLASS_2_34247B346DD1159B_METHOD_2_DDA7E14998A3D8C3_OFFSET UNITYSDK_OFFSET(0x1E05A0B0)
#define CLASS_2_34247B346DD1159B_METHOD_2_F3058D5545FB9139_OFFSET UNITYSDK_OFFSET(0x1E05A4C0)
#define CLASS_2_34247B346DD1159B__CTOR_OFFSET UNITYSDK_OFFSET(0x1E05A020)

inline static constexpr unsigned int Class_2_34247B346DD1159B_TypeDefinitionIndex = 92186;

class Class_2_34247B346DD1159B : public ::Class_1_275515F210334D06
{
public:
	// static const ::System::Int32 Field_2_6 = 0x1; // 0x0
	// static const ::System::Int32 Field_2_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_2_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_2_11 = 0x4; // 0x0
	// static const ::System::Int32 Field_2_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_2_9 = 0x6; // 0x0
	// static const ::System::Int32 Field_2_8 = 0x7; // 0x0
	// static const ::System::Int32 Field_2_15 = 0x9; // 0x0
	// static const ::System::Int32 Field_2_14 = 0xB; // 0x0
	// static const ::System::Int32 Field_2_13 = 0xC; // 0x0
	// static const ::System::Int32 Field_2_12 = 0xD; // 0x0
	// static const ::System::Int32 Field_2_19 = 0xE; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1248*>* Field_2_7; // 0x18
	::Struct_2_1862835F8661A21F_603 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34247B346DD1159B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34247B346DD1159B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_DDA7E14998A3D8C3(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_34247B346DD1159B_METHOD_2_DDA7E14998A3D8C3_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F3058D5545FB9139(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_34247B346DD1159B_METHOD_2_F3058D5545FB9139_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_208CC9941471731A_1248* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1248*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_34247B346DD1159B_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34247B346DD1159B_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
