#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_23.h"
#include "unitysdk/Enum_3_DB663931210BBC27_24.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_25;
class Class_1_2E81B539DAB8D165_1;
class Class_1_D17272E82AE804C2_224;
class Class_1_D40936EF3BF54118_13;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ABAC0E0)
#define CLASS_1_C9DFE5EE7107C629_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1ABAB610)
#define CLASS_1_C9DFE5EE7107C629_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ABAB800)
#define CLASS_1_C9DFE5EE7107C629_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ABAB7D0)
#define CLASS_1_C9DFE5EE7107C629_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ABAB9F0)
#define CLASS_1_C9DFE5EE7107C629_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ABAC870)
#define CLASS_1_C9DFE5EE7107C629_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ABAC6A0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1ABAB6E0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1ABAB700)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1ABAB740)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1ABAB790)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1ABAB7B0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1ABAB660)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_217A4C673B33B3F5_1_OFFSET UNITYSDK_OFFSET(0x1ABAB780)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x1ABAB6C0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x1ABAB730)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1ABAB690)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1ABAB770)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1ABAB390)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1ABAB760)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1ABAB6D0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1ABAB6F0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1ABAB710)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1ABAB750)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1ABAB7A0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1ABAB7C0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1ABAB670)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x1ABAB720)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1ABAB680)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1ABAB6B0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1ABAB650)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1ABAB6A0)
#define CLASS_1_C9DFE5EE7107C629_4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1ABAB640)
#define CLASS_1_C9DFE5EE7107C629_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ABAB3C0)
#define CLASS_1_C9DFE5EE7107C629_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ABABCC0)
#define CLASS_1_C9DFE5EE7107C629_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ABABD20)
#define CLASS_1_C9DFE5EE7107C629_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABACC00)
#define CLASS_1_C9DFE5EE7107C629_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ABAB4D0)
#define CLASS_1_C9DFE5EE7107C629_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABAB3D0)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_4_TypeDefinitionIndex = 25894;

class Class_1_C9DFE5EE7107C629_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_4_TypeDefinitionIndex)->GetStaticField(0x26BA0);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D40936EF3BF54118_13*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D40936EF3BF54118_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_4_TypeDefinitionIndex)->GetStaticField(0x26BA8);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_075C34D03AFA1215_25*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_075C34D03AFA1215_25*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_4_TypeDefinitionIndex)->GetStaticField(0x26BB0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_4_TypeDefinitionIndex)->GetStaticField(0x26BB8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_2E81B539DAB8D165_1*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_2E81B539DAB8D165_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_4_TypeDefinitionIndex)->GetStaticField(0x26BC0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_224*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_224*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_4_TypeDefinitionIndex)->GetStaticField(0x26BC8);
	}
	// static const ::System::Int32 Field_1_6 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_17 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_20 = 0xC; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_075C34D03AFA1215_25*>* Field_1_21; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_22; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E81B539DAB8D165_1*>* Field_1_23; // 0x20
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D40936EF3BF54118_13*>* Field_1_24; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_224*>* Field_1_25; // 0x30
	::Google::Protobuf::UnknownFieldSet* Field_1_26; // 0x38
	::System::Boolean Field_1_27; // 0x40
	::System::Boolean Field_1_28; // 0x41
	::System::UInt32 Field_1_29; // 0x44
	::System::UInt32 Field_1_30; // 0x48
	::System::UInt32 Field_1_31; // 0x4C
	::System::UInt32 Field_1_32; // 0x50
	::System::UInt32 Field_1_33; // 0x54
	::Enum_3_DB663931210BBC27_24 Field_1_34; // 0x58
	::System::UInt32 Field_1_35; // 0x5C
	::Enum_3_DB663931210BBC27_23 Field_1_36; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_4*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_4*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_4* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_23 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_23(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_23 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_23))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_075C34D03AFA1215_25*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_075C34D03AFA1215_25*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E81B539DAB8D165_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E81B539DAB8D165_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_24 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_DB663931210BBC27_24(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_DB663931210BBC27_24 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_24))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_224*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_224*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D40936EF3BF54118_13*>* Method_1_217A4C673B33B3F5_1()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D40936EF3BF54118_13*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_217A4C673B33B3F5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_4*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_4*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
