#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_87.h"

class Class_2_208CC9941471731A_1168;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_34247B346DD1159B_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1BD62480)
#define CLASS_2_34247B346DD1159B_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1BD62650)
#define CLASS_2_34247B346DD1159B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BD623B0)
#define CLASS_2_34247B346DD1159B_METHOD_2_DDA7E14998A3D8C3_OFFSET UNITYSDK_OFFSET(0x1BD626A0)
#define CLASS_2_34247B346DD1159B_METHOD_2_F3058D5545FB9139_OFFSET UNITYSDK_OFFSET(0x1BD4F1E0)
#define CLASS_2_34247B346DD1159B__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD623F0)

inline static constexpr unsigned int Class_2_34247B346DD1159B_TypeDefinitionIndex = 88055;

class Class_2_34247B346DD1159B : public ::Class_1_275515F210334D06
{
public:
	// static const ::System::Int32 Field_2_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_2_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_2_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_2_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_2_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_2_7 = 0x6; // 0x0
	// static const ::System::Int32 Field_2_8 = 0x7; // 0x0
	// static const ::System::Int32 Field_2_9 = 0x9; // 0x0
	// static const ::System::Int32 Field_2_10 = 0xB; // 0x0
	// static const ::System::Int32 Field_2_11 = 0xC; // 0x0
	// static const ::System::Int32 Field_2_12 = 0xD; // 0x0
	// static const ::System::Int32 Field_2_13 = 0xE; // 0x0
	::Struct_2_1862835F8661A21F_87 Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1168*>* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34247B346DD1159B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34247B346DD1159B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_2_F3058D5545FB9139(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_34247B346DD1159B_METHOD_2_F3058D5545FB9139_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34247B346DD1159B_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_DDA7E14998A3D8C3(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_34247B346DD1159B_METHOD_2_DDA7E14998A3D8C3_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1168* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1168*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_34247B346DD1159B_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}
};
