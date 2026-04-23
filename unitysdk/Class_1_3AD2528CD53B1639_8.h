#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_32.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_312;
class Class_1_EBB10EC01CCC4716_14;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3AD2528CD53B1639_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A10F60)
#define CLASS_1_3AD2528CD53B1639_8_CLONE_OFFSET UNITYSDK_OFFSET(0x19A10800)
#define CLASS_1_3AD2528CD53B1639_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A10A00)
#define CLASS_1_3AD2528CD53B1639_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A109A0)
#define CLASS_1_3AD2528CD53B1639_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A10B70)
#define CLASS_1_3AD2528CD53B1639_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A11520)
#define CLASS_1_3AD2528CD53B1639_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A113E0)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19A10870)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19A108D0)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x19A10910)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x19A10930)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x19A10960)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19A10850)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19A108B0)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19A105C0)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19A10990)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19A10950)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19A10880)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19A108E0)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x19A10920)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x19A10940)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x19A10970)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19A10860)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19A108C0)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19A10980)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x19A10900)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19A108A0)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x19A108F0)
#define CLASS_1_3AD2528CD53B1639_8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19A10890)
#define CLASS_1_3AD2528CD53B1639_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A10620)
#define CLASS_1_3AD2528CD53B1639_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A10C90)
#define CLASS_1_3AD2528CD53B1639_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A10CF0)
#define CLASS_1_3AD2528CD53B1639_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A11710)
#define CLASS_1_3AD2528CD53B1639_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A10680)
#define CLASS_1_3AD2528CD53B1639_8__CTOR_OFFSET UNITYSDK_OFFSET(0x19A10630)

inline static constexpr unsigned int Class_1_3AD2528CD53B1639_8_TypeDefinitionIndex = 27075;

class Class_1_3AD2528CD53B1639_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_3AD2528CD53B1639_8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3AD2528CD53B1639_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AD2528CD53B1639_8_TypeDefinitionIndex)->GetStaticField(0x15F40);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_312*>** StaticGet_Field_1_19()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_312*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AD2528CD53B1639_8_TypeDefinitionIndex)->GetStaticField(0x15F48);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_23 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_EBB10EC01CCC4716_14* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_312*>* Field_1_20; // 0x20
	::System::UInt32 Field_1_15; // 0x28
	::System::UInt32 Field_1_3; // 0x2C
	::System::UInt32 Field_1_17; // 0x30
	::System::UInt32 Field_1_5; // 0x34
	::Enum_3_DB663931210BBC27_32 Field_1_24; // 0x38
	::System::UInt32 Field_1_11; // 0x3C
	::System::UInt32 Field_1_22; // 0x40
	::System::Boolean Field_1_13; // 0x44
	::System::Boolean Field_1_7; // 0x45

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3AD2528CD53B1639_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_8*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3AD2528CD53B1639_8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3AD2528CD53B1639_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3AD2528CD53B1639_8* Clone()
	{
		return ((::Class_1_3AD2528CD53B1639_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_EBB10EC01CCC4716_14* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_14*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_312*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_312*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_32 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_32))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3AD2528CD53B1639_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3AD2528CD53B1639_8*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3AD2528CD53B1639_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_8*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3AD2528CD53B1639_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
