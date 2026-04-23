#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_23.h"
#include "unitysdk/Enum_3_DB663931210BBC27_24.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_25;
class Class_1_D17272E82AE804C2_210;
class Class_1_D40936EF3BF54118_11;
class Class_1_DB57B006CFFCF00A_1;
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

#define CLASS_1_C9DFE5EE7107C629_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193F8EA0)
#define CLASS_1_C9DFE5EE7107C629_7_CLONE_OFFSET UNITYSDK_OFFSET(0x193F83B0)
#define CLASS_1_C9DFE5EE7107C629_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193F85A0)
#define CLASS_1_C9DFE5EE7107C629_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x193F8570)
#define CLASS_1_C9DFE5EE7107C629_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193F8790)
#define CLASS_1_C9DFE5EE7107C629_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193F9690)
#define CLASS_1_C9DFE5EE7107C629_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193F94D0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x193F8440)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x193F8460)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x193F8490)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x193F8500)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x193F8520)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x193F83E0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_217A4C673B33B3F5_1_OFFSET UNITYSDK_OFFSET(0x193F84B0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x193F8480)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x193F84D0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x193F8410)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x193F8420)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x193F8120)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x193F8540)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x193F8430)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x193F8450)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x193F8470)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x193F84A0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x193F8510)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x193F8530)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x193F83F0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x193F84C0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x193F8400)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x193F8560)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x193F84F0)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x193F8550)
#define CLASS_1_C9DFE5EE7107C629_7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x193F84E0)
#define CLASS_1_C9DFE5EE7107C629_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193F8150)
#define CLASS_1_C9DFE5EE7107C629_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193F8AD0)
#define CLASS_1_C9DFE5EE7107C629_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x193F8B30)
#define CLASS_1_C9DFE5EE7107C629_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x193F9A10)
#define CLASS_1_C9DFE5EE7107C629_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193F8260)
#define CLASS_1_C9DFE5EE7107C629_7__CTOR_OFFSET UNITYSDK_OFFSET(0x193F8160)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_7_TypeDefinitionIndex = 25923;

class Class_1_C9DFE5EE7107C629_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D40936EF3BF54118_11*>** StaticGet_Field_1_22()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D40936EF3BF54118_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_7_TypeDefinitionIndex)->GetStaticField(0x413C0);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_075C34D03AFA1215_25*>** StaticGet_Field_1_17()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_075C34D03AFA1215_25*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_7_TypeDefinitionIndex)->GetStaticField(0x413C8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_7_TypeDefinitionIndex)->GetStaticField(0x413D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_210*>** StaticGet_Field_1_33()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_210*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_7_TypeDefinitionIndex)->GetStaticField(0x413D8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_DB57B006CFFCF00A_1*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_DB57B006CFFCF00A_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_7_TypeDefinitionIndex)->GetStaticField(0x413E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_7_TypeDefinitionIndex)->GetStaticField(0x413E8);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_21 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_28 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_30 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_32 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_35 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB57B006CFFCF00A_1*>* Field_1_11; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D40936EF3BF54118_11*>* Field_1_23; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x28
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_075C34D03AFA1215_25*>* Field_1_18; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_210*>* Field_1_34; // 0x38
	::System::UInt32 Field_1_29; // 0x40
	::System::Boolean Field_1_36; // 0x44
	::System::Boolean Field_1_27; // 0x45
	::System::UInt32 Field_1_13; // 0x48
	::System::UInt32 Field_1_3; // 0x4C
	::Enum_3_DB663931210BBC27_24 Field_1_25; // 0x50
	::System::UInt32 Field_1_20; // 0x54
	::System::UInt32 Field_1_31; // 0x58
	::Enum_3_DB663931210BBC27_23 Field_1_5; // 0x5C
	::System::UInt32 Field_1_15; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_7*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_7* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_23 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_23(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_23 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_23))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB57B006CFFCF00A_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB57B006CFFCF00A_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_075C34D03AFA1215_25*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_075C34D03AFA1215_25*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D40936EF3BF54118_11*>* Method_1_217A4C673B33B3F5_1()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D40936EF3BF54118_11*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_217A4C673B33B3F5_1_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_24 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_DB663931210BBC27_24(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_DB663931210BBC27_24 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_24))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_210*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_210*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_7*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_7*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
