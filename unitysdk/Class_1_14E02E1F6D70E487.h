#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_4;
class Class_1_45BB92167AED63A0_5;
class Class_1_997BC107281E8D79;
class Class_1_AD5A9DCE6DAC51CE;
class Class_1_B7079F3879CA1D0C;
class Class_1_D3A6B6039BF3B0D1_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_14E02E1F6D70E487_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A8F0120)
#define CLASS_1_14E02E1F6D70E487_CLONE_OFFSET UNITYSDK_OFFSET(0x1A8EEBA0)
#define CLASS_1_14E02E1F6D70E487_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A8EEEC0)
#define CLASS_1_14E02E1F6D70E487_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A8EEE90)
#define CLASS_1_14E02E1F6D70E487_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A8EF290)
#define CLASS_1_14E02E1F6D70E487_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A8F0F50)
#define CLASS_1_14E02E1F6D70E487_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A8F0A50)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_10_OFFSET UNITYSDK_OFFSET(0x1A8EEE30)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_11_OFFSET UNITYSDK_OFFSET(0x1A8EEE70)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A8EEBF0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A8EEC10)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A8EEC90)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1A8EECB0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1A8EECD0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1A8EED00)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1A8EED20)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1A8EEDD0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1A8EEE10)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A8EEBD0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A8EEDF0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A8EEC60)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1A8EEC80)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x1A8EECF0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_3_OFFSET UNITYSDK_OFFSET(0x1A8EEDA0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_4_OFFSET UNITYSDK_OFFSET(0x1A8EEE50)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A8EEC50)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A8EE640)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1A8EEC40)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1A8EED80)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1A8EED90)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x1A8EEE60)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A8EEC30)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_10_OFFSET UNITYSDK_OFFSET(0x1A8EEE40)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_11_OFFSET UNITYSDK_OFFSET(0x1A8EEE80)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A8EEC00)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A8EEC20)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A8EECA0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1A8EECC0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1A8EECE0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1A8EED10)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1A8EED30)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1A8EEDE0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1A8EEE20)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A8EEBE0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A8EEE00)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A8EEC70)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1A8EED70)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1A8EEDC0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A8EED50)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A8EED60)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1A8EEDB0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A8EED40)
#define CLASS_1_14E02E1F6D70E487_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A8EE670)
#define CLASS_1_14E02E1F6D70E487_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A8EFA90)
#define CLASS_1_14E02E1F6D70E487_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A8EFAF0)
#define CLASS_1_14E02E1F6D70E487__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8F1720)
#define CLASS_1_14E02E1F6D70E487__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A8EE8C0)
#define CLASS_1_14E02E1F6D70E487__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8EE680)

inline static constexpr unsigned int Class_1_14E02E1F6D70E487_TypeDefinitionIndex = 24094;

class Class_1_14E02E1F6D70E487 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_AD5A9DCE6DAC51CE*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_AD5A9DCE6DAC51CE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x60150);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_14E02E1F6D70E487*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_14E02E1F6D70E487*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x60158);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_997BC107281E8D79*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_997BC107281E8D79*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x60160);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x60168);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x60170);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x60178);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_997BC107281E8D79*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_997BC107281E8D79*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x60180);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_4*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x60188);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_B7079F3879CA1D0C*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_B7079F3879CA1D0C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x60190);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x60198);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x601A0);
	}
	// static const ::System::Int32 Field_1_11 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_20 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_21 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_22 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_24 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_25 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_26 = 0x10; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x11; // 0x0
	// static const ::System::Int32 Field_1_28 = 0x12; // 0x0
	// static const ::System::Int32 Field_1_29 = 0x13; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x14; // 0x0
	// static const ::System::Int32 Field_1_31 = 0x15; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x16; // 0x0
	// static const ::System::Int32 Field_1_33 = 0x17; // 0x0
	// static const ::System::Int32 Field_1_34 = 0x18; // 0x0
	// static const ::System::Int32 Field_1_35 = 0x19; // 0x0
	// static const ::System::Int32 Field_1_36 = 0x1A; // 0x0
	// static const ::System::Int32 Field_1_37 = 0x1B; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_38; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_AD5A9DCE6DAC51CE*>* Field_1_39; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_40; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_41; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_997BC107281E8D79*>* Field_1_42; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_43; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_44; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_997BC107281E8D79*>* Field_1_45; // 0x48
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_4*>* Field_1_46; // 0x50
	::Class_1_D3A6B6039BF3B0D1_1* Field_1_47; // 0x58
	::Class_1_45BB92167AED63A0_5* Field_1_48; // 0x60
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_49; // 0x68
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B7079F3879CA1D0C*>* Field_1_50; // 0x70
	::System::UInt32 Field_1_51; // 0x78
	::System::UInt32 Field_1_52; // 0x7C
	::System::UInt32 Field_1_53; // 0x80
	::System::UInt32 Field_1_54; // 0x84
	::System::UInt32 Field_1_55; // 0x88
	::System::UInt32 Field_1_56; // 0x8C
	::System::UInt32 Field_1_57; // 0x90
	::System::Boolean Field_1_58; // 0x94
	::System::Boolean Field_1_59; // 0x95
	::System::Boolean Field_1_60; // 0x96
	::System::UInt32 Field_1_61; // 0x98
	::System::UInt32 Field_1_62; // 0x9C
	::System::UInt32 Field_1_63; // 0xA0
	::System::UInt32 Field_1_64; // 0xA4
	::System::UInt32 Field_1_65; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_14E02E1F6D70E487* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_14E02E1F6D70E487*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_14E02E1F6D70E487*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487* Clone()
	{
		return ((::Class_1_14E02E1F6D70E487*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_997BC107281E8D79*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_997BC107281E8D79*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_997BC107281E8D79*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_997BC107281E8D79*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_45BB92167AED63A0_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_45BB92167AED63A0_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_5*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B7079F3879CA1D0C*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B7079F3879CA1D0C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_AD5A9DCE6DAC51CE*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_AD5A9DCE6DAC51CE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_3_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::Class_1_D3A6B6039BF3B0D1_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_D3A6B6039BF3B0D1_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D3A6B6039BF3B0D1_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D3A6B6039BF3B0D1_1*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_10()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_10_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_10(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_10_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_4_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_4*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_11()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_11_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_11(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_11_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_14E02E1F6D70E487* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_14E02E1F6D70E487*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_14E02E1F6D70E487* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_MERGEFROM_1_OFFSET))(this, a1);
	}
};
