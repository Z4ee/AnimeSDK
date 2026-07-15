#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/System/Object.h"

class Class_1_07701BC2FDC5E4E0;
class Class_1_27DCDC5CAB14C7C7;
class Class_1_D17272E82AE804C2_15;
class Class_1_D17272E82AE804C2_16;
class Class_1_D17272E82AE804C2_9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CEAADC0)
#define CLASS_1_C9DFE5EE7107C629_CLONE_OFFSET UNITYSDK_OFFSET(0x1CEAA290)
#define CLASS_1_C9DFE5EE7107C629_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CEAA4D0)
#define CLASS_1_C9DFE5EE7107C629_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CEAA4A0)
#define CLASS_1_C9DFE5EE7107C629_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CEAA680)
#define CLASS_1_C9DFE5EE7107C629_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CEAB820)
#define CLASS_1_C9DFE5EE7107C629_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CEAB4E0)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CEAA300)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1CEAA320)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1CEAA340)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1CEAA380)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1CEAA3A0)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1CEAA3D0)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1CEAA3F0)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1CEAA450)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1CEAA480)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CEAA2E0)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1CEAA430)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CEAA410)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1CEAA2D0)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CEA9FA0)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1CEAA370)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1CEAA3C0)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1CEAA470)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CEAA360)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CEAA310)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1CEAA330)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1CEAA350)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1CEAA390)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1CEAA3B0)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1CEAA3E0)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1CEAA400)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1CEAA460)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1CEAA490)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CEAA2F0)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1CEAA440)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CEAA420)
#define CLASS_1_C9DFE5EE7107C629_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CEAA2C0)
#define CLASS_1_C9DFE5EE7107C629_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CEA9FD0)
#define CLASS_1_C9DFE5EE7107C629_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CEAA7D0)
#define CLASS_1_C9DFE5EE7107C629_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CEAA830)
#define CLASS_1_C9DFE5EE7107C629__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEABBE0)
#define CLASS_1_C9DFE5EE7107C629__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CEAA080)
#define CLASS_1_C9DFE5EE7107C629__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA9FE0)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_TypeDefinitionIndex = 24478;

class Class_1_C9DFE5EE7107C629 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_TypeDefinitionIndex)->GetStaticField(0x1B3D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_27DCDC5CAB14C7C7*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_27DCDC5CAB14C7C7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_TypeDefinitionIndex)->GetStaticField(0x1B3D8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_16*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_TypeDefinitionIndex)->GetStaticField(0x1B3E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_16*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_TypeDefinitionIndex)->GetStaticField(0x1B3E8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_15*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_TypeDefinitionIndex)->GetStaticField(0x1B3F0);
	}
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_14 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_17 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x10; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x11; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x12; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x13; // 0x0
	::Class_1_D17272E82AE804C2_9* Field_1_22; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_15*>* Field_1_23; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_16*>* Field_1_24; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_27DCDC5CAB14C7C7*>* Field_1_25; // 0x28
	::Class_1_07701BC2FDC5E4E0* Field_1_26; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_16*>* Field_1_27; // 0x38
	::Google::Protobuf::UnknownFieldSet* Field_1_28; // 0x40
	::System::UInt32 Field_1_29; // 0x48
	::System::UInt32 Field_1_30; // 0x4C
	::System::UInt32 Field_1_31; // 0x50
	::System::UInt32 Field_1_32; // 0x54
	::System::UInt32 Field_1_33; // 0x58
	::Enum_3_01618AD0437C8486 Field_1_34; // 0x5C
	::System::UInt32 Field_1_35; // 0x60
	::System::UInt32 Field_1_36; // 0x64
	::System::UInt32 Field_1_37; // 0x68
	::System::UInt32 Field_1_38; // 0x6C
	::System::UInt32 Field_1_39; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_CLONE_OFFSET))(this);
	}

	::Enum_3_01618AD0437C8486 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_01618AD0437C8486(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_01618AD0437C8486 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_16*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_16*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_15*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_15*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_27DCDC5CAB14C7C7*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_27DCDC5CAB14C7C7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Class_1_07701BC2FDC5E4E0* Method_1_24748FC20F375725()
	{
		return ((::Class_1_07701BC2FDC5E4E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_07701BC2FDC5E4E0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07701BC2FDC5E4E0*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_9* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_D17272E82AE804C2_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D17272E82AE804C2_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_9*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_16*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_16*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_MERGEFROM_1_OFFSET))(this, a1);
	}
};
