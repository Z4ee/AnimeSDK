#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_6;
class Class_1_99BD961747420BEB;
class Class_1_ACA38760E7F8B37E;
class Class_1_B94DDCD70CFEC484;
class Class_1_E577B5580A99D425;
class Class_1_FA4F4A67B1C04320_22;
class Class_1_FA4F4A67B1C04320_23;
class Class_1_FA4F4A67B1C04320_24;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2AEC7C4C0F203579_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FB5FB0)
#define CLASS_1_2AEC7C4C0F203579_CLONE_OFFSET UNITYSDK_OFFSET(0x17FB5070)
#define CLASS_1_2AEC7C4C0F203579_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FB5290)
#define CLASS_1_2AEC7C4C0F203579_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FB5260)
#define CLASS_1_2AEC7C4C0F203579_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FB5530)
#define CLASS_1_2AEC7C4C0F203579_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FB6A00)
#define CLASS_1_2AEC7C4C0F203579_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FB6670)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17FB50D0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17FB50F0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17FB5130)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17FB5180)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x17FB51A0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x17FB51F0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x17FB5230)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17FB50B0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17FB5160)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_47587B9526E5B08E_OFFSET UNITYSDK_OFFSET(0x17FB5250)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17FB5110)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x17FB5120)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x17FB5150)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x17FB51C0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_5_OFFSET UNITYSDK_OFFSET(0x17FB5210)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_6_OFFSET UNITYSDK_OFFSET(0x17FB5220)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17FB50A0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17FB50E0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17FB5100)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17FB5140)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17FB5190)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x17FB51B0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x17FB5200)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x17FB5240)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17FB50C0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17FB5170)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17FB51E0)
#define CLASS_1_2AEC7C4C0F203579_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17FB51D0)
#define CLASS_1_2AEC7C4C0F203579_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FB4D00)
#define CLASS_1_2AEC7C4C0F203579_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FB5AD0)
#define CLASS_1_2AEC7C4C0F203579_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FB5B30)
#define CLASS_1_2AEC7C4C0F203579__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FB6EA0)
#define CLASS_1_2AEC7C4C0F203579__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FB4E60)
#define CLASS_1_2AEC7C4C0F203579__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB4D10)

inline static constexpr unsigned int Class_1_2AEC7C4C0F203579_TypeDefinitionIndex = 23097;

class Class_1_2AEC7C4C0F203579 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_B94DDCD70CFEC484*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_B94DDCD70CFEC484*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x36360);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_ACA38760E7F8B37E*>** StaticGet_Field_1_14()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_ACA38760E7F8B37E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x36368);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E577B5580A99D425*>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E577B5580A99D425*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x36370);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_22*>** StaticGet_Field_1_19()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_22*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x36378);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB*>** StaticGet_Field_1_35()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_99BD961747420BEB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x36380);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_6*>** StaticGet_Field_1_38()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x36388);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_23*>** StaticGet_Field_1_28()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_23*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x36390);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>** StaticGet_Field_1_43()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AEC7C4C0F203579_TypeDefinitionIndex)->GetStaticField(0x36398);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_21 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_25 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_27 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_30 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x10; // 0x0
	// static const ::System::Int32 Field_1_34 = 0x11; // 0x0
	// static const ::System::Int32 Field_1_37 = 0x12; // 0x0
	// static const ::System::Int32 Field_1_40 = 0x13; // 0x0
	// static const ::System::Int32 Field_1_42 = 0x14; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_22*>* Field_1_20; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_23*>* Field_1_29; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_6*>* Field_1_39; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425*>* Field_1_12; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB*>* Field_1_36; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>* Field_1_3; // 0x40
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* Field_1_44; // 0x48
	::Class_1_FA4F4A67B1C04320_24* Field_1_22; // 0x50
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_ACA38760E7F8B37E*>* Field_1_15; // 0x58
	::System::UInt32 Field_1_41; // 0x60
	::System::Boolean Field_1_31; // 0x64
	::System::UInt32 Field_1_26; // 0x68
	::System::UInt32 Field_1_7; // 0x6C
	::System::UInt32 Field_1_17; // 0x70
	::System::UInt32 Field_1_5; // 0x74
	::System::UInt32 Field_1_33; // 0x78
	::System::UInt32 Field_1_9; // 0x7C
	::System::UInt32 Field_1_24; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2AEC7C4C0F203579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2AEC7C4C0F203579*))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2AEC7C4C0F203579* Clone()
	{
		return ((::Class_1_2AEC7C4C0F203579*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E577B5580A99D425*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_ACA38760E7F8B37E*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_ACA38760E7F8B37E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_22*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_22*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_24* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FA4F4A67B1C04320_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FA4F4A67B1C04320_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_24*))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_23*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_23*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB*>* Method_1_6E1EC2DF63D7020F_5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_99BD961747420BEB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_6*>* Method_1_6E1EC2DF63D7020F_6()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_6E1EC2DF63D7020F_6_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* Method_1_47587B9526E5B08E()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_METHOD_1_47587B9526E5B08E_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2AEC7C4C0F203579* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2AEC7C4C0F203579*))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2AEC7C4C0F203579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2AEC7C4C0F203579*))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2AEC7C4C0F203579_MERGEFROM_1_OFFSET))(this, a1);
	}
};
