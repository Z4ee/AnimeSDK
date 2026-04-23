#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_70D2E0F3216AAE0C_9;
class Class_1_D40936EF3BF54118_3;
class Class_1_E79FD5868D2482A1;
class Class_1_F9EFCB63E481ADB7_2;
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

#define CLASS_1_B94DDCD70CFEC484_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C849E0)
#define CLASS_1_B94DDCD70CFEC484_1_CLONE_OFFSET UNITYSDK_OFFSET(0x19C83F20)
#define CLASS_1_B94DDCD70CFEC484_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C841A0)
#define CLASS_1_B94DDCD70CFEC484_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C84170)
#define CLASS_1_B94DDCD70CFEC484_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C843C0)
#define CLASS_1_B94DDCD70CFEC484_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C85350)
#define CLASS_1_B94DDCD70CFEC484_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C85170)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_10_OFFSET UNITYSDK_OFFSET(0x19C840E0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_11_OFFSET UNITYSDK_OFFSET(0x19C84120)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_12_OFFSET UNITYSDK_OFFSET(0x19C84150)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19C83F70)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19C83F90)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x19C83FB0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x19C83FD0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x19C84010)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x19C84050)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x19C84070)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x19C84090)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x19C840B0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19C83F50)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x19C84140)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x19C84100)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19C83FF0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19C83CB0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19C840D0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_10_OFFSET UNITYSDK_OFFSET(0x19C840F0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_11_OFFSET UNITYSDK_OFFSET(0x19C84130)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_12_OFFSET UNITYSDK_OFFSET(0x19C84160)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19C83F80)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19C83FA0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x19C83FC0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x19C83FE0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x19C84020)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x19C84060)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x19C84080)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x19C840A0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x19C840C0)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19C83F60)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x19C84110)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19C84000)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19C84040)
#define CLASS_1_B94DDCD70CFEC484_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19C84030)
#define CLASS_1_B94DDCD70CFEC484_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C83CE0)
#define CLASS_1_B94DDCD70CFEC484_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C845A0)
#define CLASS_1_B94DDCD70CFEC484_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C84600)
#define CLASS_1_B94DDCD70CFEC484_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C856A0)
#define CLASS_1_B94DDCD70CFEC484_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C83D60)
#define CLASS_1_B94DDCD70CFEC484_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19C83CF0)

inline static constexpr unsigned int Class_1_B94DDCD70CFEC484_1_TypeDefinitionIndex = 27821;

class Class_1_B94DDCD70CFEC484_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D40936EF3BF54118_3*>** StaticGet_Field_1_36()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D40936EF3BF54118_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B94DDCD70CFEC484_1_TypeDefinitionIndex)->GetStaticField(0x61A80);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_B94DDCD70CFEC484_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B94DDCD70CFEC484_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B94DDCD70CFEC484_1_TypeDefinitionIndex)->GetStaticField(0x61A88);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E79FD5868D2482A1*>** StaticGet_Field_1_27()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E79FD5868D2482A1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B94DDCD70CFEC484_1_TypeDefinitionIndex)->GetStaticField(0x61A90);
	}
	// static const ::System::Int32 Field_1_2 = 0x6C7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x405; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x388; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x7FC; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x172; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x585; // 0x0
	// static const ::System::Int32 Field_1_29 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_31 = 0x6F9; // 0x0
	// static const ::System::Int32 Field_1_33 = 0x45; // 0x0
	// static const ::System::Int32 Field_1_35 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_38 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E79FD5868D2482A1*>* Field_1_28; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Class_1_70D2E0F3216AAE0C_9* Field_1_32; // 0x20
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D40936EF3BF54118_3*>* Field_1_37; // 0x28
	::Class_1_F9EFCB63E481ADB7_2* Field_1_13; // 0x30
	::System::UInt32 Field_1_34; // 0x38
	::System::UInt32 Field_1_11; // 0x3C
	::System::UInt32 Field_1_30; // 0x40
	::System::UInt32 Field_1_39; // 0x44
	::System::UInt32 Field_1_21; // 0x48
	::System::UInt32 Field_1_15; // 0x4C
	::System::UInt32 Field_1_9; // 0x50
	::System::UInt32 Field_1_7; // 0x54
	::System::UInt32 Field_1_19; // 0x58
	::System::UInt32 Field_1_3; // 0x5C
	::System::UInt32 Field_1_23; // 0x60
	::System::UInt32 Field_1_5; // 0x64
	::System::UInt32 Field_1_25; // 0x68
	::System::Boolean Field_1_17; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B94DDCD70CFEC484_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B94DDCD70CFEC484_1*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B94DDCD70CFEC484_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B94DDCD70CFEC484_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B94DDCD70CFEC484_1* Clone()
	{
		return ((::Class_1_B94DDCD70CFEC484_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Class_1_F9EFCB63E481ADB7_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F9EFCB63E481ADB7_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F9EFCB63E481ADB7_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9EFCB63E481ADB7_2*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E79FD5868D2482A1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E79FD5868D2482A1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_10()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_10_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_10(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_10_OFFSET))(this, a1);
	}

	::Class_1_70D2E0F3216AAE0C_9* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_70D2E0F3216AAE0C_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_70D2E0F3216AAE0C_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70D2E0F3216AAE0C_9*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_11()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_11_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_11(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_11_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D40936EF3BF54118_3*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D40936EF3BF54118_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_12()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_02A3D10A9D535169_12_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_12(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_METHOD_1_7786DC814C2FC3BE_12_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B94DDCD70CFEC484_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B94DDCD70CFEC484_1*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B94DDCD70CFEC484_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B94DDCD70CFEC484_1*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B94DDCD70CFEC484_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
