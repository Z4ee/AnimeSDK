#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_8.h"
#include "unitysdk/System/Object.h"

class Class_1_44C800F73E4F1D6F;
class Class_1_C9DFE5EE7107C629;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_6CF32442E7A80121_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BF6BEC0)
#define CLASS_1_6CF32442E7A80121_CLONE_OFFSET UNITYSDK_OFFSET(0x1BF6AE80)
#define CLASS_1_6CF32442E7A80121_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BF6B190)
#define CLASS_1_6CF32442E7A80121_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BF6B160)
#define CLASS_1_6CF32442E7A80121_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BF6B460)
#define CLASS_1_6CF32442E7A80121_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BF6C7F0)
#define CLASS_1_6CF32442E7A80121_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BF6C4E0)
#define CLASS_1_6CF32442E7A80121_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1BF6AF10)
#define CLASS_1_6CF32442E7A80121_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1BF6AF70)
#define CLASS_1_6CF32442E7A80121_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1BF6B010)
#define CLASS_1_6CF32442E7A80121_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1BF6B030)
#define CLASS_1_6CF32442E7A80121_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1BF6B110)
#define CLASS_1_6CF32442E7A80121_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1BF6B140)
#define CLASS_1_6CF32442E7A80121_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1BF6AEB0)
#define CLASS_1_6CF32442E7A80121_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1BF6B0A0)
#define CLASS_1_6CF32442E7A80121_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1BF6AFA0)
#define CLASS_1_6CF32442E7A80121_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1BF6B090)
#define CLASS_1_6CF32442E7A80121_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1BF6AF90)
#define CLASS_1_6CF32442E7A80121_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1BF6B050)
#define CLASS_1_6CF32442E7A80121_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1BF6B000)
#define CLASS_1_6CF32442E7A80121_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1BF6AC00)
#define CLASS_1_6CF32442E7A80121_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x1BF6AF40)
#define CLASS_1_6CF32442E7A80121_METHOD_1_686CBC4FBD0AAA58_2_OFFSET UNITYSDK_OFFSET(0x1BF6AF60)
#define CLASS_1_6CF32442E7A80121_METHOD_1_686CBC4FBD0AAA58_3_OFFSET UNITYSDK_OFFSET(0x1BF6B080)
#define CLASS_1_6CF32442E7A80121_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1BF6AEE0)
#define CLASS_1_6CF32442E7A80121_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x1BF6AF30)
#define CLASS_1_6CF32442E7A80121_METHOD_1_6BD2A2909D8CFAD3_2_OFFSET UNITYSDK_OFFSET(0x1BF6AF50)
#define CLASS_1_6CF32442E7A80121_METHOD_1_6BD2A2909D8CFAD3_3_OFFSET UNITYSDK_OFFSET(0x1BF6B070)
#define CLASS_1_6CF32442E7A80121_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1BF6AED0)
#define CLASS_1_6CF32442E7A80121_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1BF6B130)
#define CLASS_1_6CF32442E7A80121_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1BF6AF20)
#define CLASS_1_6CF32442E7A80121_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1BF6AF80)
#define CLASS_1_6CF32442E7A80121_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1BF6B020)
#define CLASS_1_6CF32442E7A80121_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1BF6B040)
#define CLASS_1_6CF32442E7A80121_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1BF6B120)
#define CLASS_1_6CF32442E7A80121_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1BF6B150)
#define CLASS_1_6CF32442E7A80121_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1BF6AEC0)
#define CLASS_1_6CF32442E7A80121_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1BF6B060)
#define CLASS_1_6CF32442E7A80121_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1BF6AFF0)
#define CLASS_1_6CF32442E7A80121_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1BF6B100)
#define CLASS_1_6CF32442E7A80121_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1BF6AF00)
#define CLASS_1_6CF32442E7A80121_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1BF6B0F0)
#define CLASS_1_6CF32442E7A80121_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1BF6AEF0)
#define CLASS_1_6CF32442E7A80121_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BF6AC30)
#define CLASS_1_6CF32442E7A80121_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BF6B7B0)
#define CLASS_1_6CF32442E7A80121_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BF6B810)
#define CLASS_1_6CF32442E7A80121__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF6CC60)
#define CLASS_1_6CF32442E7A80121__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BF6AC90)
#define CLASS_1_6CF32442E7A80121__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF6AC40)

inline static constexpr unsigned int Class_1_6CF32442E7A80121_TypeDefinitionIndex = 25428;

class Class_1_6CF32442E7A80121 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C9DFE5EE7107C629*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C9DFE5EE7107C629*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CF32442E7A80121_TypeDefinitionIndex)->GetStaticField(0x3B560);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_6CF32442E7A80121*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6CF32442E7A80121*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CF32442E7A80121_TypeDefinitionIndex)->GetStaticField(0x3B568);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x563; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x67A; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x4E5; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_19 = 0xB; // 0x0
	::Proto::ItemList* Field_1_20; // 0x10
	::System::String* Field_1_21; // 0x18
	::System::String* Field_1_22; // 0x20
	::Class_1_44C800F73E4F1D6F* Field_1_23; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629*>* Field_1_24; // 0x30
	::Proto::ItemList* Field_1_25; // 0x38
	::Proto::ItemList* Field_1_26; // 0x40
	::Google::Protobuf::UnknownFieldSet* Field_1_27; // 0x48
	::Proto::ItemList* Field_1_28; // 0x50
	::System::UInt32 Field_1_29; // 0x58
	::System::UInt32 Field_1_30; // 0x5C
	::System::Boolean Field_1_31; // 0x60
	::System::Boolean Field_1_32; // 0x61
	::System::UInt32 Field_1_33; // 0x64
	::System::UInt32 Field_1_34; // 0x68
	::System::UInt32 Field_1_35; // 0x6C
	::Enum_3_DB663931210BBC27_8 Field_1_36; // 0x70
	::System::UInt32 Field_1_37; // 0x74
	::System::UInt32 Field_1_38; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6CF32442E7A80121* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6CF32442E7A80121*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6CF32442E7A80121*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6CF32442E7A80121* Clone()
	{
		return ((::Class_1_6CF32442E7A80121*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_2()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_6BD2A2909D8CFAD3_2_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_2(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_686CBC4FBD0AAA58_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_8 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_8))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Class_1_44C800F73E4F1D6F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_44C800F73E4F1D6F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_44C800F73E4F1D6F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_44C800F73E4F1D6F*))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_6BD2A2909D8CFAD3_3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_3(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_686CBC4FBD0AAA58_3_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6CF32442E7A80121* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6CF32442E7A80121* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6CF32442E7A80121_MERGEFROM_1_OFFSET))(this, a1);
	}
};
