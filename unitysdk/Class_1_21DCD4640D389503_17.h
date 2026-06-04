#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_8.h"
#include "unitysdk/System/Object.h"

class Class_1_44C800F73E4F1D6F;
class Class_1_B94DDCD70CFEC484;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_17_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0D91B0)
#define CLASS_1_21DCD4640D389503_17_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0D8530)
#define CLASS_1_21DCD4640D389503_17_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0D8840)
#define CLASS_1_21DCD4640D389503_17_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0D8810)
#define CLASS_1_21DCD4640D389503_17_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0D8B20)
#define CLASS_1_21DCD4640D389503_17_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0D9C30)
#define CLASS_1_21DCD4640D389503_17_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0D9920)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A0D8640)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A0D8660)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A0D86C0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1A0D8770)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1A0D87B0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1A0D87D0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A0D8600)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1A0D8710)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A0D8570)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1A0D8700)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A0D8560)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A0D87F0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A0D87A0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A0D82C0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x1A0D8630)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_686CBC4FBD0AAA58_2_OFFSET UNITYSDK_OFFSET(0x1A0D8690)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_686CBC4FBD0AAA58_3_OFFSET UNITYSDK_OFFSET(0x1A0D86F0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1A0D85D0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x1A0D8620)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_6BD2A2909D8CFAD3_2_OFFSET UNITYSDK_OFFSET(0x1A0D8680)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_6BD2A2909D8CFAD3_3_OFFSET UNITYSDK_OFFSET(0x1A0D86E0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1A0D85C0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A0D8760)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A0D8650)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A0D8670)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A0D86D0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1A0D8780)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1A0D87C0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1A0D87E0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A0D8610)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A0D8800)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A0D8790)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1A0D86B0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A0D85F0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A0D86A0)
#define CLASS_1_21DCD4640D389503_17_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A0D85E0)
#define CLASS_1_21DCD4640D389503_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0D82F0)
#define CLASS_1_21DCD4640D389503_17_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0D8DA0)
#define CLASS_1_21DCD4640D389503_17_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0D8E00)
#define CLASS_1_21DCD4640D389503_17__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0DA0A0)
#define CLASS_1_21DCD4640D389503_17__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0D8350)
#define CLASS_1_21DCD4640D389503_17__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D8300)

inline static constexpr unsigned int Class_1_21DCD4640D389503_17_TypeDefinitionIndex = 24938;

class Class_1_21DCD4640D389503_17 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_B94DDCD70CFEC484*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_B94DDCD70CFEC484*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_17_TypeDefinitionIndex)->GetStaticField(0x3F3A0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_17*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_17_TypeDefinitionIndex)->GetStaticField(0x3F3A8);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x2D7; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x2B5; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_17 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x5A2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>* Field_1_20; // 0x10
	::Proto::ItemList* Field_1_21; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_22; // 0x20
	::Class_1_44C800F73E4F1D6F* Field_1_23; // 0x28
	::Proto::ItemList* Field_1_24; // 0x30
	::Proto::ItemList* Field_1_25; // 0x38
	::Proto::ItemList* Field_1_26; // 0x40
	::System::String* Field_1_27; // 0x48
	::System::String* Field_1_28; // 0x50
	::System::UInt32 Field_1_29; // 0x58
	::System::UInt32 Field_1_30; // 0x5C
	::System::UInt32 Field_1_31; // 0x60
	::System::UInt32 Field_1_32; // 0x64
	::System::Boolean Field_1_33; // 0x68
	::System::Boolean Field_1_34; // 0x69
	::System::UInt32 Field_1_35; // 0x6C
	::System::UInt32 Field_1_36; // 0x70
	::Enum_3_DB663931210BBC27_8 Field_1_37; // 0x74
	::System::UInt32 Field_1_38; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_17*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_17*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_17*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_17* Clone()
	{
		return ((::Class_1_21DCD4640D389503_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_2()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_6BD2A2909D8CFAD3_2_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_2(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_686CBC4FBD0AAA58_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_6BD2A2909D8CFAD3_3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_3(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_686CBC4FBD0AAA58_3_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_8 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_8))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Class_1_44C800F73E4F1D6F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_44C800F73E4F1D6F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_44C800F73E4F1D6F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_44C800F73E4F1D6F*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_17* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_17*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_17*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_17_MERGEFROM_1_OFFSET))(this, a1);
	}
};
