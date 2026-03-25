#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"

class Class_1_8F7C43AD64EAA7A8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180C7B10)
#define CLASS_1_C9DFE5EE7107C629_6_CLONE_OFFSET UNITYSDK_OFFSET(0x180C6BC0)
#define CLASS_1_C9DFE5EE7107C629_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180C6EA0)
#define CLASS_1_C9DFE5EE7107C629_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x180C6E40)
#define CLASS_1_C9DFE5EE7107C629_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180C7140)
#define CLASS_1_C9DFE5EE7107C629_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180C8480)
#define CLASS_1_C9DFE5EE7107C629_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180C8290)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x180C6C30)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x180C6C60)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x180C6CD0)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x180C6D20)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x180C6D40)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x180C6D60)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x180C6DA0)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x180C6DD0)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x180C6E20)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180C6C10)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x180C6E00)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x180C6C80)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x180C6DC0)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x180C6E10)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x180C6C50)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x180C6CF0)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x180C6CA0)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x180C6C40)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x180C6C70)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x180C6CE0)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x180C6D30)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x180C6D50)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x180C6D70)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x180C6DB0)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x180C6DE0)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x180C6E30)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180C6C20)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x180C6DF0)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x180C6D10)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x180C6D90)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x180C6CC0)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x180C6C90)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x180C6D00)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x180C6D80)
#define CLASS_1_C9DFE5EE7107C629_6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x180C6CB0)
#define CLASS_1_C9DFE5EE7107C629_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180C6910)
#define CLASS_1_C9DFE5EE7107C629_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180C7620)
#define CLASS_1_C9DFE5EE7107C629_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x180C7680)
#define CLASS_1_C9DFE5EE7107C629_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x180C8880)
#define CLASS_1_C9DFE5EE7107C629_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180C6A60)
#define CLASS_1_C9DFE5EE7107C629_6__CTOR_OFFSET UNITYSDK_OFFSET(0x180C6920)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_6_TypeDefinitionIndex = 24505;

class Class_1_C9DFE5EE7107C629_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_8F7C43AD64EAA7A8*>** StaticGet_Field_1_20()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_8F7C43AD64EAA7A8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_6_TypeDefinitionIndex)->GetStaticField(0x35660);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_8F7C43AD64EAA7A8*>** StaticGet_Field_1_13()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_8F7C43AD64EAA7A8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_6_TypeDefinitionIndex)->GetStaticField(0x35668);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_35()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_6_TypeDefinitionIndex)->GetStaticField(0x35670);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_42()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_6_TypeDefinitionIndex)->GetStaticField(0x35678);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_6_TypeDefinitionIndex)->GetStaticField(0x35680);
	}
	// static const ::System::Int32 Field_1_1 = 0x2E8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1EF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x636; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x36C; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_26 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_28 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x2A9; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_34 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_37 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_39 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_41 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_44 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_43; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8F7C43AD64EAA7A8*>* Field_1_21; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8F7C43AD64EAA7A8*>* Field_1_14; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_36; // 0x38
	::System::UInt32 Field_1_9; // 0x40
	::System::UInt32 Field_1_33; // 0x44
	::System::UInt32 Field_1_27; // 0x48
	::Enum_3_01618AD0437C8486_2 Field_1_40; // 0x4C
	::System::UInt32 Field_1_25; // 0x50
	::System::Boolean Field_1_16; // 0x54
	::System::Boolean Field_1_23; // 0x55
	::System::Boolean Field_1_31; // 0x56
	::System::UInt32 Field_1_45; // 0x58
	::System::UInt32 Field_1_2; // 0x5C
	::System::UInt32 Field_1_18; // 0x60
	::System::UInt32 Field_1_38; // 0x64
	::System::UInt32 Field_1_4; // 0x68
	::System::UInt32 Field_1_29; // 0x6C
	::System::Single Field_1_11; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_6*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_6* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8F7C43AD64EAA7A8*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8F7C43AD64EAA7A8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8F7C43AD64EAA7A8*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8F7C43AD64EAA7A8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::Enum_3_01618AD0437C8486_2 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_01618AD0437C8486_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_01618AD0437C8486_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_6*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_6*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
