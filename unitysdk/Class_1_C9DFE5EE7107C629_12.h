#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_32.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_24;
class Class_1_1CBA230307F9C289_25;
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

#define CLASS_1_C9DFE5EE7107C629_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x198AD5A0)
#define CLASS_1_C9DFE5EE7107C629_12_CLONE_OFFSET UNITYSDK_OFFSET(0x198ACA50)
#define CLASS_1_C9DFE5EE7107C629_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x198ACC80)
#define CLASS_1_C9DFE5EE7107C629_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x198ACC20)
#define CLASS_1_C9DFE5EE7107C629_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x198ACE60)
#define CLASS_1_C9DFE5EE7107C629_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x198ADDE0)
#define CLASS_1_C9DFE5EE7107C629_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x198ADBD0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x198ACAC0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x198ACB20)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x198ACB70)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x198ACB90)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x198ACBB0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x198ACBD0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x198ACBF0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x198ACAA0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x198ACB50)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x198AC760)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x198ACB00)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x198ACC10)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x198ACB10)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x198ACB40)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x198ACAE0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x198ACAD0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x198ACB30)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x198ACB80)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x198ACBA0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x198ACBC0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x198ACBE0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x198ACC00)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x198ACAB0)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x198ACB60)
#define CLASS_1_C9DFE5EE7107C629_12_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x198ACAF0)
#define CLASS_1_C9DFE5EE7107C629_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x198AC7C0)
#define CLASS_1_C9DFE5EE7107C629_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x198AD1F0)
#define CLASS_1_C9DFE5EE7107C629_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x198AD250)
#define CLASS_1_C9DFE5EE7107C629_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x198AE100)
#define CLASS_1_C9DFE5EE7107C629_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x198AC8B0)
#define CLASS_1_C9DFE5EE7107C629_12__CTOR_OFFSET UNITYSDK_OFFSET(0x198AC7D0)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex = 27041;

class Class_1_C9DFE5EE7107C629_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_32()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x4FF30);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_12*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x4FF38);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_312*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_312*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x4FF40);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_24*>** StaticGet_Field_1_17()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_24*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x4FF48);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_25*>** StaticGet_Field_1_12()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_25*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_12_TypeDefinitionIndex)->GetStaticField(0x4FF50);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_19 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_25 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_27 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_29 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_31 = 0xD; // 0x0
	::Class_1_EBB10EC01CCC4716_14* Field_1_20; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_24*>* Field_1_18; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_312*>* Field_1_8; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_25*>* Field_1_13; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_33; // 0x38
	::System::UInt32 Field_1_30; // 0x40
	::System::UInt32 Field_1_26; // 0x44
	::System::UInt32 Field_1_5; // 0x48
	::Enum_3_DB663931210BBC27_32 Field_1_10; // 0x4C
	::System::UInt32 Field_1_24; // 0x50
	::System::UInt32 Field_1_22; // 0x54
	::System::UInt32 Field_1_28; // 0x58
	::System::UInt32 Field_1_15; // 0x5C
	::System::UInt32 Field_1_3; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_12*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_12*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_12* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_312*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_312*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_32 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_25*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_25*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_24*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_24*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_14* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_14*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
