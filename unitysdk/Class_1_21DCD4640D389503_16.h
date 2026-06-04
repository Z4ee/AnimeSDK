#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_8.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_7;
class Class_1_C9DFE5EE7107C629_1;
namespace Google::Protobuf { class ByteString; }
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

#define CLASS_1_21DCD4640D389503_16_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A1AF080)
#define CLASS_1_21DCD4640D389503_16_CLONE_OFFSET UNITYSDK_OFFSET(0x1A1AE4E0)
#define CLASS_1_21DCD4640D389503_16_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A1AE7D0)
#define CLASS_1_21DCD4640D389503_16_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A1AE770)
#define CLASS_1_21DCD4640D389503_16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1AE9E0)
#define CLASS_1_21DCD4640D389503_16_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A1AF8A0)
#define CLASS_1_21DCD4640D389503_16_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A1AF6F0)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A1AE550)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A1AE590)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A1AE5B0)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1A1AE680)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1A1AE6C0)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A1AE530)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A1AE700)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A1AE6F0)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A1AE5D0)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A1AE270)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1A1AE620)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A1AE580)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_47587B9526E5B08E_OFFSET UNITYSDK_OFFSET(0x1A1AE6E0)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A1AE5F0)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A1AE560)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A1AE5A0)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A1AE5C0)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1A1AE690)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1A1AE6D0)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A1AE540)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x1A1AE630)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A1AE5E0)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A1AE570)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1A1AE6B0)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1A1AE760)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A1AE610)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A1AE6A0)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1A1AE750)
#define CLASS_1_21DCD4640D389503_16_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A1AE600)
#define CLASS_1_21DCD4640D389503_16_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A1AE2D0)
#define CLASS_1_21DCD4640D389503_16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A1AEC90)
#define CLASS_1_21DCD4640D389503_16_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A1AECF0)
#define CLASS_1_21DCD4640D389503_16__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1AFBE0)
#define CLASS_1_21DCD4640D389503_16__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1AE3A0)
#define CLASS_1_21DCD4640D389503_16__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1AE2E0)

inline static constexpr unsigned int Class_1_21DCD4640D389503_16_TypeDefinitionIndex = 24936;

class Class_1_21DCD4640D389503_16 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_16_TypeDefinitionIndex)->GetStaticField(0x33750);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_16_TypeDefinitionIndex)->GetStaticField(0x33758);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_16*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_16_TypeDefinitionIndex)->GetStaticField(0x33760);
	}
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_14 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_17 = 0xA; // 0x0
	::Google::Protobuf::ByteString* Field_1_18; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* Field_1_19; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_7*>* Field_1_20; // 0x20
	::Class_1_C9DFE5EE7107C629_1* Field_1_21; // 0x28
	::System::String* Field_1_22; // 0x30
	::Google::Protobuf::UnknownFieldSet* Field_1_23; // 0x38
	::System::UInt32 Field_1_24; // 0x40
	::System::UInt32 Field_1_25; // 0x44
	::System::UInt32 Field_1_26; // 0x48
	::System::UInt32 Field_1_27; // 0x4C
	::System::UInt32 Field_1_28; // 0x50
	::System::Boolean Field_1_29; // 0x54
	::System::Boolean Field_1_30; // 0x55
	::System::Boolean Field_1_31; // 0x56
	::System::UInt32 Field_1_32; // 0x58
	::Enum_3_DB663931210BBC27_8 Field_1_33; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_16*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_16*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_16* Clone()
	{
		return ((::Class_1_21DCD4640D389503_16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_8 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_8))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Class_1_C9DFE5EE7107C629_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9DFE5EE7107C629_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9DFE5EE7107C629_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_1*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_7*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* Method_1_47587B9526E5B08E()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_47587B9526E5B08E_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_16* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_16_MERGEFROM_1_OFFSET))(this, a1);
	}
};
