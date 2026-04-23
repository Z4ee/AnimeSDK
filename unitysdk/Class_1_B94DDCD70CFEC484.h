#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/System/Object.h"

class Class_1_07701BC2FDC5E4E0;
class Class_1_2E81B539DAB8D165;
class Class_1_D17272E82AE804C2_12;
class Class_1_D17272E82AE804C2_13;
class Class_1_D17272E82AE804C2_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B94DDCD70CFEC484_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1981E670)
#define CLASS_1_B94DDCD70CFEC484_CLONE_OFFSET UNITYSDK_OFFSET(0x1981DA40)
#define CLASS_1_B94DDCD70CFEC484_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1981DC80)
#define CLASS_1_B94DDCD70CFEC484_EQUALS_OFFSET UNITYSDK_OFFSET(0x1981DC50)
#define CLASS_1_B94DDCD70CFEC484_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1981DEC0)
#define CLASS_1_B94DDCD70CFEC484_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1981F0D0)
#define CLASS_1_B94DDCD70CFEC484_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1981ED90)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1981DAB0)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1981DAD0)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1981DAF0)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1981DB30)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1981DB50)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1981DB80)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1981DBA0)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1981DC00)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1981DC30)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1981DA90)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1981DBE0)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1981DBC0)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1981DA80)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1981D750)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1981DB20)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1981DB70)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1981DC20)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1981DB10)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1981DAC0)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1981DAE0)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1981DB00)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1981DB40)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1981DB60)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1981DB90)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1981DBB0)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1981DC10)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1981DC40)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1981DAA0)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1981DBF0)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1981DBD0)
#define CLASS_1_B94DDCD70CFEC484_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1981DA70)
#define CLASS_1_B94DDCD70CFEC484_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1981D780)
#define CLASS_1_B94DDCD70CFEC484_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1981E260)
#define CLASS_1_B94DDCD70CFEC484_WRITETO_OFFSET UNITYSDK_OFFSET(0x1981E2C0)
#define CLASS_1_B94DDCD70CFEC484__CCTOR_OFFSET UNITYSDK_OFFSET(0x1981F490)
#define CLASS_1_B94DDCD70CFEC484__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1981D830)
#define CLASS_1_B94DDCD70CFEC484__CTOR_OFFSET UNITYSDK_OFFSET(0x1981D790)

inline static constexpr unsigned int Class_1_B94DDCD70CFEC484_TypeDefinitionIndex = 24124;

class Class_1_B94DDCD70CFEC484 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_13*>** StaticGet_Field_1_36()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B94DDCD70CFEC484_TypeDefinitionIndex)->GetStaticField(0x34A80);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_13*>** StaticGet_Field_1_13()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B94DDCD70CFEC484_TypeDefinitionIndex)->GetStaticField(0x34A88);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_B94DDCD70CFEC484*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B94DDCD70CFEC484*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B94DDCD70CFEC484_TypeDefinitionIndex)->GetStaticField(0x34A90);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_2E81B539DAB8D165*>** StaticGet_Field_1_23()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_2E81B539DAB8D165*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B94DDCD70CFEC484_TypeDefinitionIndex)->GetStaticField(0x34A98);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_12*>** StaticGet_Field_1_16()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B94DDCD70CFEC484_TypeDefinitionIndex)->GetStaticField(0x34AA0);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_20 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_22 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_25 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_27 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_29 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_31 = 0x10; // 0x0
	// static const ::System::Int32 Field_1_33 = 0x11; // 0x0
	// static const ::System::Int32 Field_1_35 = 0x12; // 0x0
	// static const ::System::Int32 Field_1_38 = 0x13; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E81B539DAB8D165*>* Field_1_24; // 0x10
	::Class_1_07701BC2FDC5E4E0* Field_1_30; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_13*>* Field_1_14; // 0x28
	::Class_1_D17272E82AE804C2_6* Field_1_32; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_13*>* Field_1_37; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_12*>* Field_1_17; // 0x40
	::System::UInt32 Field_1_5; // 0x48
	::Enum_3_01618AD0437C8486 Field_1_3; // 0x4C
	::System::UInt32 Field_1_7; // 0x50
	::System::UInt32 Field_1_9; // 0x54
	::System::UInt32 Field_1_21; // 0x58
	::System::UInt32 Field_1_19; // 0x5C
	::System::UInt32 Field_1_34; // 0x60
	::System::UInt32 Field_1_11; // 0x64
	::System::UInt32 Field_1_28; // 0x68
	::System::UInt32 Field_1_26; // 0x6C
	::System::UInt32 Field_1_39; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B94DDCD70CFEC484* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B94DDCD70CFEC484*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B94DDCD70CFEC484*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B94DDCD70CFEC484*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B94DDCD70CFEC484* Clone()
	{
		return ((::Class_1_B94DDCD70CFEC484*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_CLONE_OFFSET))(this);
	}

	::Enum_3_01618AD0437C8486 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_01618AD0437C8486(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_01618AD0437C8486 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_13*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_13*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_12*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_12*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E81B539DAB8D165*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E81B539DAB8D165*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Class_1_07701BC2FDC5E4E0* Method_1_24748FC20F375725()
	{
		return ((::Class_1_07701BC2FDC5E4E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_07701BC2FDC5E4E0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07701BC2FDC5E4E0*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_6* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_D17272E82AE804C2_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D17272E82AE804C2_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_6*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_13*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_13*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B94DDCD70CFEC484* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B94DDCD70CFEC484*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B94DDCD70CFEC484* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B94DDCD70CFEC484*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_MERGEFROM_1_OFFSET))(this, a1);
	}
};
