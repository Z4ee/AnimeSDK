#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_10F56A639581CEB1_7;
class Class_1_10F56A639581CEB1_8;
class Class_1_333B902B2174BECA_2;
class Class_1_4262A30BF669EE5C;
class Class_1_69AEC40D50978859;
class Class_1_D17272E82AE804C2_219;
class Class_1_D17272E82AE804C2_220;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D8E8EFEE2E98874F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6D5540)
#define CLASS_1_D8E8EFEE2E98874F_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6D4860)
#define CLASS_1_D8E8EFEE2E98874F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6D4A90)
#define CLASS_1_D8E8EFEE2E98874F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6D4A60)
#define CLASS_1_D8E8EFEE2E98874F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6D4D00)
#define CLASS_1_D8E8EFEE2E98874F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6D5F10)
#define CLASS_1_D8E8EFEE2E98874F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6D5C00)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E6D48B0)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E6D4930)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1E6D4960)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1E6D4980)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1E6D49A0)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1E6D49C0)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1E6D4A00)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1E6D4A20)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1E6D4A40)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E6D4890)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E6D4550)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1E6D48E0)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1E6D48F0)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1E6D4900)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x1E6D4910)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_6E1EC2DF63D7020F_5_OFFSET UNITYSDK_OFFSET(0x1E6D4920)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_6E1EC2DF63D7020F_6_OFFSET UNITYSDK_OFFSET(0x1E6D4950)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1E6D48D0)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E6D48C0)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E6D4940)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1E6D4970)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1E6D4990)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1E6D49B0)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1E6D49D0)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1E6D4A10)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1E6D4A30)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1E6D4A50)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E6D48A0)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1E6D49F0)
#define CLASS_1_D8E8EFEE2E98874F_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1E6D49E0)
#define CLASS_1_D8E8EFEE2E98874F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6D4580)
#define CLASS_1_D8E8EFEE2E98874F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6D4F70)
#define CLASS_1_D8E8EFEE2E98874F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6D4FD0)
#define CLASS_1_D8E8EFEE2E98874F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D6360)
#define CLASS_1_D8E8EFEE2E98874F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6D46C0)
#define CLASS_1_D8E8EFEE2E98874F__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D4590)

inline static constexpr unsigned int Class_1_D8E8EFEE2E98874F_TypeDefinitionIndex = 26748;

class Class_1_D8E8EFEE2E98874F : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_69AEC40D50978859*>** StaticGet_EMBBCFPJKFE()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_69AEC40D50978859*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8E8EFEE2E98874F_TypeDefinitionIndex)->GetStaticField(0xE990);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_333B902B2174BECA_2*>** StaticGet_JJIFHABDCGO()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_333B902B2174BECA_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8E8EFEE2E98874F_TypeDefinitionIndex)->GetStaticField(0xE998);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_10F56A639581CEB1_8*>** StaticGet_NLGMEFPGAPP()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_10F56A639581CEB1_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8E8EFEE2E98874F_TypeDefinitionIndex)->GetStaticField(0xE9A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_219*>** StaticGet_LFMBOBPMIHH()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_219*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8E8EFEE2E98874F_TypeDefinitionIndex)->GetStaticField(0xE9A8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_220*>** StaticGet_LJGFCGAGNCM()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_220*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8E8EFEE2E98874F_TypeDefinitionIndex)->GetStaticField(0xE9B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4262A30BF669EE5C*>** StaticGet_NNLNIGFKJOE()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4262A30BF669EE5C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8E8EFEE2E98874F_TypeDefinitionIndex)->GetStaticField(0xE9B8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D8E8EFEE2E98874F*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D8E8EFEE2E98874F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8E8EFEE2E98874F_TypeDefinitionIndex)->GetStaticField(0xE9C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_10F56A639581CEB1_7*>** StaticGet_JCNCMGLMDDA()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_10F56A639581CEB1_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8E8EFEE2E98874F_TypeDefinitionIndex)->GetStaticField(0xE9C8);
	}
	// static const ::System::Int32 KMPKCJNJIKL = 0xD; // 0x0
	// static const ::System::Int32 KIIHHJPCGDE = 0x1; // 0x0
	// static const ::System::Int32 GFCJLGABCBP = 0xE; // 0x0
	// static const ::System::Int32 JOBODICFDPF = 0xB; // 0x0
	// static const ::System::Int32 CMIEDNGMMKB = 0x5; // 0x0
	// static const ::System::Int32 GHCCIMDLMHE = 0xF; // 0x0
	// static const ::System::Int32 JPMBFACCLJP = 0x6; // 0x0
	// static const ::System::Int32 GLIEHJLGIAJ = 0x2; // 0x0
	// static const ::System::Int32 CMNKCMJMAOM = 0x3B4; // 0x0
	// static const ::System::Int32 NOGMEDHFIDB = 0xC; // 0x0
	// static const ::System::Int32 GGKCKCDHPJE = 0x8; // 0x0
	// static const ::System::Int32 JMLBKMKHMNK = 0x3; // 0x0
	// static const ::System::Int32 BEAMIFAEGJL = 0x12C; // 0x0
	// static const ::System::Int32 EAMJIIGNLOJ = 0x436; // 0x0
	// static const ::System::Int32 PNBLBOPEOIN = 0x4; // 0x0
	// static const ::System::Int32 HEPOIGBPFCI = 0x7B5; // 0x0
	// static const ::System::Int32 CCLNIPOACNG = 0x9; // 0x0
	// static const ::System::Int32 BNJNJGBCNAG = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_220*>* NAJLJPGLMGF; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_69AEC40D50978859*>* LCEHBMJLEOM; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_7*>* MCLAIALCLFJ; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_333B902B2174BECA_2*>* OPJHGPKCFBB; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_8*>* MGBPBJPDIPC; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_219*>* DGKFPINIJFH; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4262A30BF669EE5C*>* PFHBCJIHLBM; // 0x48
	::System::UInt32 HJDFGILNLHH; // 0x50
	::System::UInt32 LIGJAGENICG; // 0x54
	::System::Double IMGGJFGGABJ; // 0x58
	::System::UInt32 ELAHMBAJADF; // 0x60
	::System::UInt32 IABPJMNOBMN; // 0x64
	::System::UInt32 OLKJKAMMPMO; // 0x68
	::System::UInt32 JGMGANBNKJH; // 0x6C
	::System::UInt32 PFBGLEGGFKD; // 0x70
	::System::UInt32 MEJCHANFFCC; // 0x74
	::System::UInt32 NFDIMBCPHLF; // 0x78
	::System::UInt32 GPKBEGAKBPH; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D8E8EFEE2E98874F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8E8EFEE2E98874F*))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D8E8EFEE2E98874F*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D8E8EFEE2E98874F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D8E8EFEE2E98874F* Clone()
	{
		return ((::Class_1_D8E8EFEE2E98874F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_69AEC40D50978859*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_69AEC40D50978859*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4262A30BF669EE5C*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4262A30BF669EE5C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_220*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_220*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_333B902B2174BECA_2*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_333B902B2174BECA_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_7*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_219*>* Method_1_6E1EC2DF63D7020F_5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_219*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_6E1EC2DF63D7020F_5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_8*>* Method_1_6E1EC2DF63D7020F_6()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_10F56A639581CEB1_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_6E1EC2DF63D7020F_6_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D8E8EFEE2E98874F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8E8EFEE2E98874F*))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D8E8EFEE2E98874F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8E8EFEE2E98874F*))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8E8EFEE2E98874F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
