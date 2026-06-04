#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_55.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_79;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A63CAB0)
#define CLASS_1_C9DFE5EE7107C629_11_CLONE_OFFSET UNITYSDK_OFFSET(0x1A63BCD0)
#define CLASS_1_C9DFE5EE7107C629_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A63BF90)
#define CLASS_1_C9DFE5EE7107C629_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A63BF60)
#define CLASS_1_C9DFE5EE7107C629_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A63C1F0)
#define CLASS_1_C9DFE5EE7107C629_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A63D4F0)
#define CLASS_1_C9DFE5EE7107C629_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A63D2E0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A63BD20)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A63BD80)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A63BDA0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1A63BDF0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1A63BE50)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1A63BEE0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1A63BF00)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1A63BF40)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A63BD00)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A63BE90)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A63BEC0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x1A63BE40)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1A63BE20)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x1A63BDC0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1A63BDE0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x1A63BED0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A63BDD0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A63B940)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A63BD30)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A63BD90)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A63BDB0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1A63BE00)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1A63BE60)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1A63BEF0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1A63BF10)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1A63BF50)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A63BD10)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x1A63BE30)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1A63BE10)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A63BEA0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A63BEB0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1A63BD70)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1A63BE80)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x1A63BF30)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A63BD50)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A63BD60)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1A63BE70)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1A63BF20)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A63BD40)
#define CLASS_1_C9DFE5EE7107C629_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A63B970)
#define CLASS_1_C9DFE5EE7107C629_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A63C5E0)
#define CLASS_1_C9DFE5EE7107C629_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A63C640)
#define CLASS_1_C9DFE5EE7107C629_11__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A63D8E0)
#define CLASS_1_C9DFE5EE7107C629_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A63BA70)
#define CLASS_1_C9DFE5EE7107C629_11__CTOR_OFFSET UNITYSDK_OFFSET(0x1A63B980)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_11_TypeDefinitionIndex = 30322;

class Class_1_C9DFE5EE7107C629_11 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_11_TypeDefinitionIndex)->GetStaticField(0x26AA0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_11*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_11_TypeDefinitionIndex)->GetStaticField(0x26AA8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_11_TypeDefinitionIndex)->GetStaticField(0x26AB0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_11_TypeDefinitionIndex)->GetStaticField(0x26AB8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_11_TypeDefinitionIndex)->GetStaticField(0x26AC0);
	}
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x40B; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x581; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x106; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x61C; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7B7; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x6B6; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x563; // 0x0
	::Class_1_21C7581DFE99F091_79* Field_1_26; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Field_1_27; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_28; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_29; // 0x28
	::Google::Protobuf::UnknownFieldSet* Field_1_30; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_31; // 0x38
	::System::UInt32 Field_1_32; // 0x40
	::System::UInt32 Field_1_33; // 0x44
	::System::UInt32 Field_1_34; // 0x48
	::System::UInt32 Field_1_35; // 0x4C
	::System::UInt32 Field_1_36; // 0x50
	::System::Int64 Field_1_37; // 0x58
	::System::UInt32 Field_1_38; // 0x60
	::System::UInt32 Field_1_39; // 0x64
	::System::UInt32 Field_1_40; // 0x68
	::System::UInt32 Field_1_41; // 0x6C
	::System::Int64 Field_1_42; // 0x70
	::System::Boolean Field_1_43; // 0x78
	::System::Boolean Field_1_44; // 0x79
	::System::Boolean Field_1_45; // 0x7A
	::System::Boolean Field_1_46; // 0x7B
	::Enum_3_0A3761FE34514D6C_55 Field_1_47; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_11*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_11*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_11*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_11* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091_79* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21C7581DFE99F091_79*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21C7581DFE99F091_79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_79*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_55 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_55(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_55 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_55))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_11*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_11*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
