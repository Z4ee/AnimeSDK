#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091;
class Class_1_CEA9CE0A9BE39E47;
class Class_1_D17272E82AE804C2_8;
class Class_1_D17272E82AE804C2_9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4AEAC0)
#define CLASS_1_21DCD4640D389503_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4ADCC0)
#define CLASS_1_21DCD4640D389503_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4ADFA0)
#define CLASS_1_21DCD4640D389503_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4ADF40)
#define CLASS_1_21DCD4640D389503_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4AE1C0)
#define CLASS_1_21DCD4640D389503_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4AF4B0)
#define CLASS_1_21DCD4640D389503_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4AF150)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E4ADD30)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E4ADD50)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1E4ADE60)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1E4ADED0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1E4ADF00)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1E4ADF20)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E4ADD10)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1E4ADDA0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1E4ADD90)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1E4ADE10)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E4ADDF0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1E4ADD80)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E4AD910)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1E4ADE40)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1E4ADE50)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1E4ADEC0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x1E4ADEF0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1E4ADE30)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E4ADD40)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E4ADD60)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1E4ADE70)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1E4ADEE0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1E4ADF10)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1E4ADF30)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E4ADD20)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1E4ADE20)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E4ADE00)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1E4ADEB0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E4ADE90)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1E4ADD70)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1E4ADEA0)
#define CLASS_1_21DCD4640D389503_3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E4ADE80)
#define CLASS_1_21DCD4640D389503_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4AD970)
#define CLASS_1_21DCD4640D389503_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4AE3F0)
#define CLASS_1_21DCD4640D389503_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4AE450)
#define CLASS_1_21DCD4640D389503_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4AF8B0)
#define CLASS_1_21DCD4640D389503_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4ADA70)
#define CLASS_1_21DCD4640D389503_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AD980)

inline static constexpr unsigned int Class_1_21DCD4640D389503_3_TypeDefinitionIndex = 25128;

class Class_1_21DCD4640D389503_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_3*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_3_TypeDefinitionIndex)->GetStaticField(0x1C530);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_CEA9CE0A9BE39E47*>** StaticGet_JKOBJPKPPPN()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_CEA9CE0A9BE39E47*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_3_TypeDefinitionIndex)->GetStaticField(0x1C538);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_CEA9CE0A9BE39E47*>** StaticGet_COGMODAANAO()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_CEA9CE0A9BE39E47*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_3_TypeDefinitionIndex)->GetStaticField(0x1C540);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_9*>** StaticGet_NEENOFLBBBJ()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_3_TypeDefinitionIndex)->GetStaticField(0x1C548);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_8*>** StaticGet_LBEOILGDOHA()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_3_TypeDefinitionIndex)->GetStaticField(0x1C550);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_CEA9CE0A9BE39E47*>** StaticGet_HLKFHCAHFGF()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_CEA9CE0A9BE39E47*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_3_TypeDefinitionIndex)->GetStaticField(0x1C558);
	}
	// static const ::System::Int32 PKDBEGDNIFK = 0x1; // 0x0
	// static const ::System::Int32 JPMJFKELMDJ = 0x2; // 0x0
	// static const ::System::Int32 CIJBLCKHBCC = 0x3; // 0x0
	// static const ::System::Int32 EIDJNEEOOCF = 0x4; // 0x0
	// static const ::System::Int32 FHCHOCDKMEB = 0x5; // 0x0
	// static const ::System::Int32 BPDBJKLJCCM = 0x6; // 0x0
	// static const ::System::Int32 IAOCBKJIIJL = 0x7; // 0x0
	// static const ::System::Int32 MGHKEGOPNJO = 0x8; // 0x0
	// static const ::System::Int32 EONNEHBABKB = 0x9; // 0x0
	// static const ::System::Int32 MFPLILIFHFI = 0xA; // 0x0
	// static const ::System::Int32 AIMKABPJADJ = 0xB; // 0x0
	// static const ::System::Int32 IIGJNJPDPBJ = 0xC; // 0x0
	// static const ::System::Int32 FKNAMFALPGC = 0xD; // 0x0
	// static const ::System::Int32 KAFDNKHOENE = 0xE; // 0x0
	// static const ::System::Int32 PDPCIBLBDLA = 0xF; // 0x0
	// static const ::System::Int32 JBONDOECJJM = 0x10; // 0x0
	// static const ::System::Int32 HNCINKBJDIN = 0x11; // 0x0
	// static const ::System::Int32 JLCOELFOKOP = 0x12; // 0x0
	::Class_1_21C7581DFE99F091* CHHEIHKBKHO; // 0x10
	::System::String* AFFMLKCPDIJ; // 0x18
	::Class_1_21C7581DFE99F091* MELMBBNGEAP; // 0x20
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CEA9CE0A9BE39E47*>* BEFHMPHGCOC; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CEA9CE0A9BE39E47*>* NOEHGPOPLFL; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CEA9CE0A9BE39E47*>* HHIBLLELAIK; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_8*>* NEHBABEPJKJ; // 0x48
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_9*>* MKHKLPLPDBM; // 0x50
	::System::UInt32 LGGDLDJPOMO; // 0x58
	::System::Boolean JEOPCFCNBIL; // 0x5C
	::System::Boolean EAAAHCABMMJ; // 0x5D
	::System::UInt32 PCOGOBLACGK; // 0x60
	::System::UInt32 DOLNPPBDMML; // 0x64
	::System::UInt32 BPECFKICICB; // 0x68
	::System::UInt32 EGJDFIPLGMO; // 0x6C
	::System::UInt64 DEJFOEHNFJA; // 0x70
	::System::UInt32 ABGGFEAJHAH; // 0x78
	::System::UInt32 MHLHFDNCHJE; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_3*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_3* Clone()
	{
		return ((::Class_1_21DCD4640D389503_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21C7581DFE99F091*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21C7581DFE99F091* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_21C7581DFE99F091*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_21C7581DFE99F091* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CEA9CE0A9BE39E47*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CEA9CE0A9BE39E47*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CEA9CE0A9BE39E47*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CEA9CE0A9BE39E47*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CEA9CE0A9BE39E47*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CEA9CE0A9BE39E47*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_8*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_9*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_3*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_3*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
