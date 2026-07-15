#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_5.h"
#include "unitysdk/System/Object.h"

class Class_1_32ED9F60AC82E5A0;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD411F0)
#define CLASS_1_C9DFE5EE7107C629_11_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD40110)
#define CLASS_1_C9DFE5EE7107C629_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD403F0)
#define CLASS_1_C9DFE5EE7107C629_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD40390)
#define CLASS_1_C9DFE5EE7107C629_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD40630)
#define CLASS_1_C9DFE5EE7107C629_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD41B00)
#define CLASS_1_C9DFE5EE7107C629_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD41910)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CD401B0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1CD401D0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1CD40220)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1CD40240)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1CD40260)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1CD40280)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1CD402A0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1CD402C0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1CD402E0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CD40180)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CD3FE10)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1CD40340)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1CD40350)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1CD40310)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x1CD40320)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CD40210)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1CD40300)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CD401A0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CD401C0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1CD401E0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1CD40230)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1CD40250)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1CD40270)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1CD40290)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1CD402B0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1CD402D0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1CD402F0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CD40190)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CD40330)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1CD40200)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1CD40380)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1CD40170)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1CD40360)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1CD401F0)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1CD40370)
#define CLASS_1_C9DFE5EE7107C629_11_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1CD40160)
#define CLASS_1_C9DFE5EE7107C629_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD3FE70)
#define CLASS_1_C9DFE5EE7107C629_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD40A60)
#define CLASS_1_C9DFE5EE7107C629_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD40AC0)
#define CLASS_1_C9DFE5EE7107C629_11__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD41F20)
#define CLASS_1_C9DFE5EE7107C629_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD3FFC0)
#define CLASS_1_C9DFE5EE7107C629_11__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD3FE80)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_11_TypeDefinitionIndex = 27486;

class Class_1_C9DFE5EE7107C629_11 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_32ED9F60AC82E5A0*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_32ED9F60AC82E5A0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_11_TypeDefinitionIndex)->GetStaticField(0x25460);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_11_TypeDefinitionIndex)->GetStaticField(0x25468);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_11_TypeDefinitionIndex)->GetStaticField(0x25470);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_32ED9F60AC82E5A0*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_32ED9F60AC82E5A0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_11_TypeDefinitionIndex)->GetStaticField(0x25478);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_11_TypeDefinitionIndex)->GetStaticField(0x25480);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_11*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_11_TypeDefinitionIndex)->GetStaticField(0x25488);
	}
	// static const ::System::Int32 Field_1_6 = 0xB5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x107; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x5C6; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x703; // 0x0
	// static const ::System::Int32 Field_1_17 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x15B; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_22 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_26; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_27; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_28; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_32ED9F60AC82E5A0*>* Field_1_29; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_32ED9F60AC82E5A0*>* Field_1_30; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_31; // 0x38
	::System::UInt32 Field_1_32; // 0x40
	::Enum_3_01618AD0437C8486_5 Field_1_33; // 0x44
	::System::UInt32 Field_1_34; // 0x48
	::System::UInt32 Field_1_35; // 0x4C
	::System::UInt32 Field_1_36; // 0x50
	::System::UInt32 Field_1_37; // 0x54
	::System::UInt32 Field_1_38; // 0x58
	::System::UInt32 Field_1_39; // 0x5C
	::System::UInt32 Field_1_40; // 0x60
	::System::UInt32 Field_1_41; // 0x64
	::System::Single Field_1_42; // 0x68
	::System::Boolean Field_1_43; // 0x6C
	::System::Boolean Field_1_44; // 0x6D
	::System::Boolean Field_1_45; // 0x6E
	::System::UInt32 Field_1_46; // 0x70

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

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_11*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_11*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_11* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_32ED9F60AC82E5A0*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_32ED9F60AC82E5A0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
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

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_32ED9F60AC82E5A0*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_32ED9F60AC82E5A0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::Enum_3_01618AD0437C8486_5 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_01618AD0437C8486_5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_01618AD0437C8486_5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_5))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_11_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
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
