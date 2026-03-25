#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_8.h"
#include "unitysdk/System/Object.h"

class Class_1_6852A427C81E3F96;
class Class_1_B94DDCD70CFEC484;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_7C11C261870F1926_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D56020)
#define CLASS_1_7C11C261870F1926_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17D553A0)
#define CLASS_1_7C11C261870F1926_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D556D0)
#define CLASS_1_7C11C261870F1926_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D556A0)
#define CLASS_1_7C11C261870F1926_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D559C0)
#define CLASS_1_7C11C261870F1926_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D56AD0)
#define CLASS_1_7C11C261870F1926_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D56780)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17D55530)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17D55580)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17D555A0)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17D555C0)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x17D55600)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x17D55640)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D553F0)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x17D554B0)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17D55410)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_1D3C8F680A3EDA34_1_OFFSET UNITYSDK_OFFSET(0x17D554C0)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17D55420)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17D55490)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17D55570)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x17D555F0)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_686CBC4FBD0AAA58_2_OFFSET UNITYSDK_OFFSET(0x17D55630)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_686CBC4FBD0AAA58_3_OFFSET UNITYSDK_OFFSET(0x17D55670)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17D553E0)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x17D555E0)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_6BD2A2909D8CFAD3_2_OFFSET UNITYSDK_OFFSET(0x17D55620)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_6BD2A2909D8CFAD3_3_OFFSET UNITYSDK_OFFSET(0x17D55660)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17D553D0)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17D55550)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17D55540)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17D55590)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17D555B0)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17D555D0)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x17D55610)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x17D55650)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D55400)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17D554A0)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17D55560)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17D55690)
#define CLASS_1_7C11C261870F1926_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17D55680)
#define CLASS_1_7C11C261870F1926_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D55160)
#define CLASS_1_7C11C261870F1926_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D55C40)
#define CLASS_1_7C11C261870F1926_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D55CA0)
#define CLASS_1_7C11C261870F1926_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D56F70)
#define CLASS_1_7C11C261870F1926_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D551C0)
#define CLASS_1_7C11C261870F1926_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17D55170)

inline static constexpr unsigned int Class_1_7C11C261870F1926_2_TypeDefinitionIndex = 23485;

class Class_1_7C11C261870F1926_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_B94DDCD70CFEC484*>** StaticGet_Field_1_14()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_B94DDCD70CFEC484*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C11C261870F1926_2_TypeDefinitionIndex)->GetStaticField(0x13D50);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5B7; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_24 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_26 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_28 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x29F; // 0x0
	// static const ::System::Int32 Field_1_34 = 0x8; // 0x0
	::Class_1_6852A427C81E3F96* Field_1_8; // 0x10
	::System::String* Field_1_6; // 0x18
	::Proto::ItemList* Field_1_25; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>* Field_1_15; // 0x28
	::Proto::ItemList* Field_1_2; // 0x30
	::Proto::ItemList* Field_1_29; // 0x38
	::Proto::ItemList* Field_1_33; // 0x40
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x48
	::System::String* Field_1_10; // 0x50
	::System::UInt32 Field_1_23; // 0x58
	::System::UInt32 Field_1_19; // 0x5C
	::Enum_3_DB663931210BBC27_8 Field_1_17; // 0x60
	::System::UInt32 Field_1_12; // 0x64
	::System::UInt32 Field_1_4; // 0x68
	::System::UInt32 Field_1_21; // 0x6C
	::System::UInt32 Field_1_27; // 0x70
	::System::Boolean Field_1_35; // 0x74
	::System::UInt32 Field_1_31; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7C11C261870F1926_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_2*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7C11C261870F1926_2* Clone()
	{
		return ((::Class_1_7C11C261870F1926_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::Class_1_6852A427C81E3F96* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6852A427C81E3F96*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6852A427C81E3F96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6852A427C81E3F96*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_1D3C8F680A3EDA34_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B94DDCD70CFEC484*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_8 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_8))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_2()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_6BD2A2909D8CFAD3_2_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_2(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_686CBC4FBD0AAA58_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_6BD2A2909D8CFAD3_3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_3(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_686CBC4FBD0AAA58_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7C11C261870F1926_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7C11C261870F1926_2*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7C11C261870F1926_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_2*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
