#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_63;
class Class_1_C66F08F6BAF5805C_7;
class Class_1_EFF6ABE3B36522D9;
class Class_1_FA4F4A67B1C04320_959;
class Class_1_FA4F4A67B1C04320_960;
class Class_1_FA4F4A67B1C04320_961;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_CD010263573232AE_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F7EE20)
#define CLASS_1_CD010263573232AE_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17F79D10)
#define CLASS_1_CD010263573232AE_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F7E710)
#define CLASS_1_CD010263573232AE_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F7E6B0)
#define CLASS_1_CD010263573232AE_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F79FD0)
#define CLASS_1_CD010263573232AE_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F7F480)
#define CLASS_1_CD010263573232AE_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F7A8A0)
#define CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17F7E540)
#define CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17F7E580)
#define CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17F7E5B0)
#define CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17F7E5D0)
#define CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x17F7E5F0)
#define CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x17F7E610)
#define CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x17F7E680)
#define CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F7E520)
#define CLASS_1_CD010263573232AE_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17F7E510)
#define CLASS_1_CD010263573232AE_1_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x17F7E5A0)
#define CLASS_1_CD010263573232AE_1_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x17F7E630)
#define CLASS_1_CD010263573232AE_1_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x17F7E660)
#define CLASS_1_CD010263573232AE_1_METHOD_1_6E1EC2DF63D7020F_5_OFFSET UNITYSDK_OFFSET(0x17F7E670)
#define CLASS_1_CD010263573232AE_1_METHOD_1_6E1EC2DF63D7020F_6_OFFSET UNITYSDK_OFFSET(0x17F7E6A0)
#define CLASS_1_CD010263573232AE_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17F7E4E0)
#define CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17F7E550)
#define CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17F7E590)
#define CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17F7E5C0)
#define CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17F7E5E0)
#define CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x17F7E600)
#define CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x17F7E620)
#define CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x17F7E690)
#define CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F7E530)
#define CLASS_1_CD010263573232AE_1_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17F7E570)
#define CLASS_1_CD010263573232AE_1_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x17F7E650)
#define CLASS_1_CD010263573232AE_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17F7E500)
#define CLASS_1_CD010263573232AE_1_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17F7E560)
#define CLASS_1_CD010263573232AE_1_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x17F7E640)
#define CLASS_1_CD010263573232AE_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17F7E4F0)
#define CLASS_1_CD010263573232AE_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F7E330)
#define CLASS_1_CD010263573232AE_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F7E960)
#define CLASS_1_CD010263573232AE_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F7E9C0)
#define CLASS_1_CD010263573232AE_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F7F8E0)
#define CLASS_1_CD010263573232AE_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F7E340)
#define CLASS_1_CD010263573232AE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F7A770)

inline static constexpr unsigned int Class_1_CD010263573232AE_1_TypeDefinitionIndex = 27529;

class Class_1_CD010263573232AE_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C66F08F6BAF5805C_7*>** StaticGet_Field_1_18()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C66F08F6BAF5805C_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE_1_TypeDefinitionIndex)->GetStaticField(0x2A2D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C66F08F6BAF5805C_7*>** StaticGet_Field_1_42()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C66F08F6BAF5805C_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE_1_TypeDefinitionIndex)->GetStaticField(0x2A2D8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_959*>** StaticGet_Field_1_37()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_959*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE_1_TypeDefinitionIndex)->GetStaticField(0x2A2E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_EFF6ABE3B36522D9*>** StaticGet_Field_1_34()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_EFF6ABE3B36522D9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE_1_TypeDefinitionIndex)->GetStaticField(0x2A2E8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_960*>** StaticGet_Field_1_29()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_960*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE_1_TypeDefinitionIndex)->GetStaticField(0x2A2F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_63*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_63*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE_1_TypeDefinitionIndex)->GetStaticField(0x2A2F8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_961*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_961*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD010263573232AE_1_TypeDefinitionIndex)->GetStaticField(0x2A300);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4B1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7D7; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x1C6; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x4BA; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x530; // 0x0
	// static const ::System::Int32 Field_1_26 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_28 = 0x5C1; // 0x0
	// static const ::System::Int32 Field_1_31 = 0x16; // 0x0
	// static const ::System::Int32 Field_1_33 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_36 = 0x170; // 0x0
	// static const ::System::Int32 Field_1_39 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_41 = 0x163; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_959*>* Field_1_38; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_7*>* Field_1_43; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_960*>* Field_1_30; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EFF6ABE3B36522D9*>* Field_1_35; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_961*>* Field_1_8; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_7*>* Field_1_19; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_63*>* Field_1_3; // 0x40
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x48
	::System::UInt32 Field_1_10; // 0x50
	::System::UInt32 Field_1_27; // 0x54
	::System::UInt32 Field_1_25; // 0x58
	::System::UInt32 Field_1_12; // 0x5C
	::System::UInt32 Field_1_21; // 0x60
	::System::UInt32 Field_1_40; // 0x64
	::System::UInt32 Field_1_23; // 0x68
	::System::UInt32 Field_1_16; // 0x6C
	::System::Boolean Field_1_32; // 0x70
	::System::Boolean Field_1_14; // 0x71
	::System::Boolean Field_1_5; // 0x72

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_CD010263573232AE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD010263573232AE_1*))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_CD010263573232AE_1* Clone()
	{
		return ((::Class_1_CD010263573232AE_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_63*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_63*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_961*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_961*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_7*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_960*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_960*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EFF6ABE3B36522D9*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EFF6ABE3B36522D9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_959*>* Method_1_6E1EC2DF63D7020F_5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_959*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_6E1EC2DF63D7020F_5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_7*>* Method_1_6E1EC2DF63D7020F_6()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C66F08F6BAF5805C_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_METHOD_1_6E1EC2DF63D7020F_6_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_CD010263573232AE_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CD010263573232AE_1*))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_CD010263573232AE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD010263573232AE_1*))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CD010263573232AE_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
