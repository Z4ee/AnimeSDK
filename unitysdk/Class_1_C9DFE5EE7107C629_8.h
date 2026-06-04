#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_32.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_23;
class Class_1_1CBA230307F9C289_24;
class Class_1_D17272E82AE804C2_326;
class Class_1_EBB10EC01CCC4716_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A6ED9A0)
#define CLASS_1_C9DFE5EE7107C629_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1A6ECED0)
#define CLASS_1_C9DFE5EE7107C629_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A6ED100)
#define CLASS_1_C9DFE5EE7107C629_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A6ED0A0)
#define CLASS_1_C9DFE5EE7107C629_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A6ED2E0)
#define CLASS_1_C9DFE5EE7107C629_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A6EE1E0)
#define CLASS_1_C9DFE5EE7107C629_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A6EDFD0)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A6ECF60)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A6ECF80)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A6ECFA0)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1A6ECFC0)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1A6ED020)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1A6ED040)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1A6ED080)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A6ECF30)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A6ED000)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A6ECC00)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A6ECFF0)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A6ECF50)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1A6ED060)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1A6ED070)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A6ECF20)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A6ECF70)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A6ECF90)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A6ECFB0)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1A6ECFD0)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1A6ED030)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1A6ED050)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1A6ED090)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A6ECF40)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A6ED010)
#define CLASS_1_C9DFE5EE7107C629_8_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A6ECFE0)
#define CLASS_1_C9DFE5EE7107C629_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A6ECC60)
#define CLASS_1_C9DFE5EE7107C629_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6ED5F0)
#define CLASS_1_C9DFE5EE7107C629_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A6ED650)
#define CLASS_1_C9DFE5EE7107C629_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6EE4F0)
#define CLASS_1_C9DFE5EE7107C629_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6ECD50)
#define CLASS_1_C9DFE5EE7107C629_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6ECC70)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_8_TypeDefinitionIndex = 27012;

class Class_1_C9DFE5EE7107C629_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_8_TypeDefinitionIndex)->GetStaticField(0x343C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_8_TypeDefinitionIndex)->GetStaticField(0x343C8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_23*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_23*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_8_TypeDefinitionIndex)->GetStaticField(0x343D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_326*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_326*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_8_TypeDefinitionIndex)->GetStaticField(0x343D8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_24*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_24*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_8_TypeDefinitionIndex)->GetStaticField(0x343E0);
	}
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_14 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_16 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_17 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_19; // 0x10
	::Class_1_EBB10EC01CCC4716_6* Field_1_20; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_23*>* Field_1_21; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_24*>* Field_1_22; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_326*>* Field_1_23; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_24; // 0x38
	::System::UInt32 Field_1_25; // 0x40
	::System::UInt32 Field_1_26; // 0x44
	::System::UInt32 Field_1_27; // 0x48
	::System::UInt32 Field_1_28; // 0x4C
	::System::UInt32 Field_1_29; // 0x50
	::System::UInt32 Field_1_30; // 0x54
	::Enum_3_DB663931210BBC27_32 Field_1_31; // 0x58
	::System::UInt32 Field_1_32; // 0x5C
	::System::UInt32 Field_1_33; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_8*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_8* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_326*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_326*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_32 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_EBB10EC01CCC4716_6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_6*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_23*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_23*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_24*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_24*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_8*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_8*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
