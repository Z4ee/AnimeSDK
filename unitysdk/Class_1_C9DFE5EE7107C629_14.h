#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_33.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_34;
class Class_1_1CBA230307F9C289_35;
class Class_1_D17272E82AE804C2_374;
class Class_1_EBB10EC01CCC4716_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFFC2D0)
#define CLASS_1_C9DFE5EE7107C629_14_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFFB7E0)
#define CLASS_1_C9DFE5EE7107C629_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFFBA10)
#define CLASS_1_C9DFE5EE7107C629_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFFB9B0)
#define CLASS_1_C9DFE5EE7107C629_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFFBB90)
#define CLASS_1_C9DFE5EE7107C629_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFFCB20)
#define CLASS_1_C9DFE5EE7107C629_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFFC910)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DFFB880)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1DFFB8A0)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1DFFB8C0)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1DFFB8E0)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1DFFB930)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1DFFB960)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1DFFB990)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DFFB830)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1DFFB900)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DFFB4E0)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1DFFB860)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DFFB950)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1DFFB920)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1DFFB980)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1DFFB870)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DFFB890)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1DFFB8B0)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1DFFB8D0)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1DFFB8F0)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1DFFB940)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1DFFB970)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1DFFB9A0)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DFFB840)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1DFFB910)
#define CLASS_1_C9DFE5EE7107C629_14_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1DFFB850)
#define CLASS_1_C9DFE5EE7107C629_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFFB540)
#define CLASS_1_C9DFE5EE7107C629_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFFBD40)
#define CLASS_1_C9DFE5EE7107C629_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFFBDA0)
#define CLASS_1_C9DFE5EE7107C629_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFFCE50)
#define CLASS_1_C9DFE5EE7107C629_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFFB630)
#define CLASS_1_C9DFE5EE7107C629_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFB550)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_14_TypeDefinitionIndex = 28223;

class Class_1_C9DFE5EE7107C629_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_374*>** StaticGet_KHPCDHPFCHE()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_374*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_14_TypeDefinitionIndex)->GetStaticField(0x5E160);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_34*>** StaticGet_JKBHDLODNOE()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_34*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_14_TypeDefinitionIndex)->GetStaticField(0x5E168);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_14*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_14_TypeDefinitionIndex)->GetStaticField(0x5E170);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DJIBNKJHJHJ()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_14_TypeDefinitionIndex)->GetStaticField(0x5E178);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_35*>** StaticGet_NGAKLPPJLMH()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_35*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_14_TypeDefinitionIndex)->GetStaticField(0x5E180);
	}
	// static const ::System::Int32 LIFHNFIMKGK = 0xC; // 0x0
	// static const ::System::Int32 OANKGHBGEIG = 0xD; // 0x0
	// static const ::System::Int32 AFDGMMCGNPL = 0xA; // 0x0
	// static const ::System::Int32 LLJBECMCLMN = 0x9; // 0x0
	// static const ::System::Int32 EFAFEKOJFDE = 0xB; // 0x0
	// static const ::System::Int32 LECLPEPMMFN = 0xE; // 0x0
	// static const ::System::Int32 EEDDEINLCCA = 0x3; // 0x0
	// static const ::System::Int32 NGMBBGNFMCO = 0x6; // 0x0
	// static const ::System::Int32 DPPAFBAHEFH = 0x4; // 0x0
	// static const ::System::Int32 GKBPDIPOFGE = 0xF; // 0x0
	// static const ::System::Int32 MPAAGCNNHBI = 0x2; // 0x0
	// static const ::System::Int32 AOACHPBEJIA = 0x7; // 0x0
	// static const ::System::Int32 CPBPPPJBFGH = 0x1; // 0x0
	// static const ::System::Int32 GPKNCGHGJLI = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_34*>* JLFDMJMJDND; // 0x18
	::Class_1_EBB10EC01CCC4716_4* LJOJCBCKHCF; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BKKNCKOJILM; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_35*>* LEAELCBMELC; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_374*>* DALKEINMPBH; // 0x38
	::System::UInt32 AGBLINJKIJL; // 0x40
	::System::UInt32 KMJKJFJEDBF; // 0x44
	::System::UInt32 NBFPOGFBMFE; // 0x48
	::System::UInt32 FPCGAKIPBMK; // 0x4C
	::System::UInt32 LAKOIIAFBEO; // 0x50
	::Enum_3_DB663931210BBC27_33 EKFNBEPMCLD; // 0x54
	::System::UInt32 KKLKGHOGJKA; // 0x58
	::System::UInt32 CPNJLIHKHMB; // 0x5C
	::System::UInt32 HJDCCKJBLCO; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_14*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_14*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_14*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_14* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_33 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_33(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_33 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_33))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_35*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_35*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Class_1_EBB10EC01CCC4716_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_4*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_374*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_374*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_34*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_34*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_14*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_14*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
