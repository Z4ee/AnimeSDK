#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_7.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_2.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_3.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_10;
class Class_1_23C1B7E6B450FFB8;
class Class_1_3C6018135E54E36D;
class Class_1_E0BAE492EF64CE43;
class Class_1_EBB10EC01CCC4716_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1D0B4E25DB90BF59_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A3CF160)
#define CLASS_1_1D0B4E25DB90BF59_CLONE_OFFSET UNITYSDK_OFFSET(0x1A3CD5A0)
#define CLASS_1_1D0B4E25DB90BF59_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A3CD9A0)
#define CLASS_1_1D0B4E25DB90BF59_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A3CD970)
#define CLASS_1_1D0B4E25DB90BF59_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A3CE0A0)
#define CLASS_1_1D0B4E25DB90BF59_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A3D0210)
#define CLASS_1_1D0B4E25DB90BF59_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A3CFCA0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_10_OFFSET UNITYSDK_OFFSET(0x1A3CD870)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_11_OFFSET UNITYSDK_OFFSET(0x1A3CD890)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_12_OFFSET UNITYSDK_OFFSET(0x1A3CD8E0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A3CD5F0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A3CD610)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A3CD630)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1A3CD670)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1A3CD730)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1A3CD750)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1A3CD770)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1A3CD7B0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1A3CD830)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A3CD5D0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A3CD650)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x1A3CD8C0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_3DACC45AC8150727_2_OFFSET UNITYSDK_OFFSET(0x1A3CD960)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A3CD820)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A3CD210)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1A3CD7A0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1A3CD8D0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1A3CD900)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A3CD790)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_10_OFFSET UNITYSDK_OFFSET(0x1A3CD880)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_11_OFFSET UNITYSDK_OFFSET(0x1A3CD8A0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_12_OFFSET UNITYSDK_OFFSET(0x1A3CD8F0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A3CD600)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A3CD620)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A3CD640)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1A3CD680)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1A3CD740)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1A3CD760)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1A3CD780)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1A3CD7C0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1A3CD840)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A3CD5E0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_1_OFFSET UNITYSDK_OFFSET(0x1A3CD6C0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_2_OFFSET UNITYSDK_OFFSET(0x1A3CD6E0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_3_OFFSET UNITYSDK_OFFSET(0x1A3CD700)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_4_OFFSET UNITYSDK_OFFSET(0x1A3CD720)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_5_OFFSET UNITYSDK_OFFSET(0x1A3CD7E0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_6_OFFSET UNITYSDK_OFFSET(0x1A3CD800)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_7_OFFSET UNITYSDK_OFFSET(0x1A3CD920)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_8_OFFSET UNITYSDK_OFFSET(0x1A3CD940)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1A3CD6A0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A3CD660)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x1A3CD8B0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_A96DCA30C6927810_2_OFFSET UNITYSDK_OFFSET(0x1A3CD950)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A3CD810)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1A3CD860)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x1A3CD6B0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_2_OFFSET UNITYSDK_OFFSET(0x1A3CD6D0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_3_OFFSET UNITYSDK_OFFSET(0x1A3CD6F0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_4_OFFSET UNITYSDK_OFFSET(0x1A3CD710)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_5_OFFSET UNITYSDK_OFFSET(0x1A3CD7D0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_6_OFFSET UNITYSDK_OFFSET(0x1A3CD7F0)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_7_OFFSET UNITYSDK_OFFSET(0x1A3CD910)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_8_OFFSET UNITYSDK_OFFSET(0x1A3CD930)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1A3CD690)
#define CLASS_1_1D0B4E25DB90BF59_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A3CD850)
#define CLASS_1_1D0B4E25DB90BF59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A3CD240)
#define CLASS_1_1D0B4E25DB90BF59_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A3CE920)
#define CLASS_1_1D0B4E25DB90BF59_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A3CE980)
#define CLASS_1_1D0B4E25DB90BF59__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3D0790)
#define CLASS_1_1D0B4E25DB90BF59__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3CD2F0)
#define CLASS_1_1D0B4E25DB90BF59__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3CD250)

inline static constexpr unsigned int Class_1_1D0B4E25DB90BF59_TypeDefinitionIndex = 24058;

class Class_1_1D0B4E25DB90BF59 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3C6018135E54E36D*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3C6018135E54E36D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D0B4E25DB90BF59_TypeDefinitionIndex)->GetStaticField(0x5B450);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E0BAE492EF64CE43*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E0BAE492EF64CE43*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D0B4E25DB90BF59_TypeDefinitionIndex)->GetStaticField(0x5B458);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_1D0B4E25DB90BF59*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1D0B4E25DB90BF59*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D0B4E25DB90BF59_TypeDefinitionIndex)->GetStaticField(0x5B460);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_10*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D0B4E25DB90BF59_TypeDefinitionIndex)->GetStaticField(0x5B468);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_23C1B7E6B450FFB8*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_23C1B7E6B450FFB8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D0B4E25DB90BF59_TypeDefinitionIndex)->GetStaticField(0x5B470);
	}
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_14 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_17 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_19 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x10; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x11; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x12; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x13; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x14; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x15; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x16; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x17; // 0x0
	// static const ::System::Int32 Field_1_28 = 0x18; // 0x0
	// static const ::System::Int32 Field_1_29 = 0x19; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x1A; // 0x0
	// static const ::System::Int32 Field_1_31 = 0x1B; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x1C; // 0x0
	// static const ::System::Int32 Field_1_33 = 0x1D; // 0x0
	// static const ::System::Int32 Field_1_34 = 0x1E; // 0x0
	// static const ::System::Int32 Field_1_35 = 0x1F; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_10*>* Field_1_36; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_23C1B7E6B450FFB8*>* Field_1_37; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_38; // 0x20
	::Class_1_EBB10EC01CCC4716_2* Field_1_39; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E0BAE492EF64CE43*>* Field_1_40; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D*>* Field_1_41; // 0x38
	::System::Double Field_1_42; // 0x40
	::System::UInt32 Field_1_43; // 0x48
	::System::UInt32 Field_1_44; // 0x4C
	::System::UInt32 Field_1_45; // 0x50
	::System::UInt32 Field_1_46; // 0x54
	::System::Double Field_1_47; // 0x58
	::System::UInt32 Field_1_48; // 0x60
	::System::UInt32 Field_1_49; // 0x64
	::System::Double Field_1_50; // 0x68
	::System::UInt32 Field_1_51; // 0x70
	::Enum_3_ED790DAC948A65A9_3 Field_1_52; // 0x74
	::System::Int32 Field_1_53; // 0x78
	::System::Double Field_1_54; // 0x80
	::Enum_3_ED790DAC948A65A9_2 Field_1_55; // 0x88
	::Enum_3_DB663931210BBC27_7 Field_1_56; // 0x8C
	::System::Double Field_1_57; // 0x90
	::System::UInt32 Field_1_58; // 0x98
	::System::UInt32 Field_1_59; // 0x9C
	::System::UInt32 Field_1_60; // 0xA0
	::System::UInt32 Field_1_61; // 0xA4
	::System::Double Field_1_62; // 0xA8
	::System::Double Field_1_63; // 0xB0
	::System::Double Field_1_64; // 0xB8
	::System::Double Field_1_65; // 0xC0
	::System::UInt32 Field_1_66; // 0xC8
	::System::UInt32 Field_1_67; // 0xCC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1D0B4E25DB90BF59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1D0B4E25DB90BF59*))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1D0B4E25DB90BF59*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1D0B4E25DB90BF59*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1D0B4E25DB90BF59* Clone()
	{
		return ((::Class_1_1D0B4E25DB90BF59*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Class_1_EBB10EC01CCC4716_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_2*))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_1_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_2(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_2_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_3()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_3_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_3(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_3_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_4()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_4_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_4(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_10*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_10*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_5()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_5_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_5(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_5_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_6()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_6_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_6(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_6_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_7 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_7))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_10()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_10_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_10(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_10_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_11()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_11_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_11(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_11_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_2 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_ED790DAC948A65A9_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_ED790DAC948A65A9_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_2))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E0BAE492EF64CE43*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E0BAE492EF64CE43*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_12()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_02A3D10A9D535169_12_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_12(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_7786DC814C2FC3BE_12_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_23C1B7E6B450FFB8*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_23C1B7E6B450FFB8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2_7()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_7_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_7(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_7_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_8()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_C229FF62B898C0B2_8_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_8(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_8633AE51B23EBDFD_8_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_3 Method_1_A96DCA30C6927810_2()
	{
		return ((::Enum_3_ED790DAC948A65A9_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_A96DCA30C6927810_2_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_2(::Enum_3_ED790DAC948A65A9_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_3))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_METHOD_1_3DACC45AC8150727_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1D0B4E25DB90BF59* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1D0B4E25DB90BF59*))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1D0B4E25DB90BF59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1D0B4E25DB90BF59*))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1D0B4E25DB90BF59_MERGEFROM_1_OFFSET))(this, a1);
	}
};
