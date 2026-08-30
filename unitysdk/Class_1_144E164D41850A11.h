#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_12EBBCDF245A0FB0;
class Class_1_21C7581DFE99F091_98;
class Class_1_D17272E82AE804C2_113;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_144E164D41850A11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DA83CF0)
#define CLASS_1_144E164D41850A11_CLONE_OFFSET UNITYSDK_OFFSET(0x1DA82E50)
#define CLASS_1_144E164D41850A11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DA830C0)
#define CLASS_1_144E164D41850A11_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DA83090)
#define CLASS_1_144E164D41850A11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DA83340)
#define CLASS_1_144E164D41850A11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DA84090)
#define CLASS_1_144E164D41850A11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DA83E80)
#define CLASS_1_144E164D41850A11_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1DA82F40)
#define CLASS_1_144E164D41850A11_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1DA82EC0)
#define CLASS_1_144E164D41850A11_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DA82C40)
#define CLASS_1_144E164D41850A11_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1DA83000)
#define CLASS_1_144E164D41850A11_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1DA82F50)
#define CLASS_1_144E164D41850A11_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1DA82ED0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_10_OFFSET UNITYSDK_OFFSET(0x1DA83020)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_11_OFFSET UNITYSDK_OFFSET(0x1DA83040)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_12_OFFSET UNITYSDK_OFFSET(0x1DA83060)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_13_OFFSET UNITYSDK_OFFSET(0x1DA83080)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1DA82EB0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1DA82EF0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x1DA82F10)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0x1DA82F30)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_5_OFFSET UNITYSDK_OFFSET(0x1DA82F70)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_6_OFFSET UNITYSDK_OFFSET(0x1DA82F90)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_7_OFFSET UNITYSDK_OFFSET(0x1DA82FB0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_8_OFFSET UNITYSDK_OFFSET(0x1DA82FD0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_9_OFFSET UNITYSDK_OFFSET(0x1DA82FF0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1DA82E90)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_10_OFFSET UNITYSDK_OFFSET(0x1DA83010)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_11_OFFSET UNITYSDK_OFFSET(0x1DA83030)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_12_OFFSET UNITYSDK_OFFSET(0x1DA83050)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_13_OFFSET UNITYSDK_OFFSET(0x1DA83070)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1DA82EA0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1DA82EE0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1DA82F00)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x1DA82F20)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x1DA82F60)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x1DA82F80)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_7_OFFSET UNITYSDK_OFFSET(0x1DA82FA0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_8_OFFSET UNITYSDK_OFFSET(0x1DA82FC0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_9_OFFSET UNITYSDK_OFFSET(0x1DA82FE0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1DA82E80)
#define CLASS_1_144E164D41850A11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DA82C70)
#define CLASS_1_144E164D41850A11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DA83450)
#define CLASS_1_144E164D41850A11_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DA834B0)
#define CLASS_1_144E164D41850A11__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA84370)
#define CLASS_1_144E164D41850A11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DA82CC0)
#define CLASS_1_144E164D41850A11__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA82C80)

inline static constexpr unsigned int Class_1_144E164D41850A11_TypeDefinitionIndex = 31396;

class Class_1_144E164D41850A11 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_113*>** StaticGet_HGOKNMBGJDG()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_113*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_144E164D41850A11_TypeDefinitionIndex)->GetStaticField(0x3FF70);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_144E164D41850A11*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_144E164D41850A11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_144E164D41850A11_TypeDefinitionIndex)->GetStaticField(0x3FF78);
	}
	// static const ::System::Int32 HLFPOBJEHLN = 0x7; // 0x0
	// static const ::System::Int32 MLILGOJKEDI = 0xD; // 0x0
	// static const ::System::Int32 DNEIICACJFJ = 0x3; // 0x0
	// static const ::System::Int32 NPBGDMBBLIA = 0x1CB; // 0x0
	// static const ::System::Int32 AONGBJACMAK = 0x4; // 0x0
	// static const ::System::Int32 MHOHGPHKJEN = 0x186; // 0x0
	// static const ::System::Int32 LHKFAOFAPDO = 0x27F; // 0x0
	// static const ::System::Int32 BJODAFKFOEM = 0xB; // 0x0
	// static const ::System::Int32 JPMBKCJHCMI = 0x232; // 0x0
	// static const ::System::Int32 OJHJIOLBLJB = 0xA; // 0x0
	// static const ::System::Int32 KKCJBGCFIDE = 0x6; // 0x0
	// static const ::System::Int32 EFLMNEDBDMB = 0x534; // 0x0
	// static const ::System::Int32 JBMGLPJMBCJ = 0x3B4; // 0x0
	// static const ::System::Int32 IFLMBNBPOKO = 0xC; // 0x0
	// static const ::System::Int32 IPCLEICPMMF = 0x8; // 0x0
	// static const ::System::Int32 ILGFEJBOCMC = 0xE; // 0x0
	// static const ::System::Int32 HCGONKMOELK = 0x9; // 0x0
	::Class_1_21C7581DFE99F091_98* DHAIAECOAHF; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Class_1_12EBBCDF245A0FB0* MHONHAJCNAN; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_113*>* FKBJJAFAPCA; // 0x28
	::System::Boolean JLEIMHHHPOO; // 0x30
	::System::Boolean MKGJMIIAAPA; // 0x31
	::System::Boolean BLEKEDLMPKL; // 0x32
	::System::Boolean EKECJMCFPKE; // 0x33
	::System::Boolean BLGAHPOANKJ; // 0x34
	::System::Boolean LCLMGLALNPO; // 0x35
	::System::Boolean ELOLIKGEJBL; // 0x36
	::System::Boolean HMPINGABHIL; // 0x37
	::System::Boolean FGMKAPGCBBF; // 0x38
	::System::Boolean IJGDGNDLMAC; // 0x39
	::System::Boolean LDMIPAJMJNL; // 0x3A
	::System::Boolean APFENIBGFFO; // 0x3B
	::System::Boolean LIPAINNBLDF; // 0x3C
	::System::Boolean IPLFEDDKMPG; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_144E164D41850A11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_144E164D41850A11*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_144E164D41850A11*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_144E164D41850A11*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_144E164D41850A11* Clone()
	{
		return ((::Class_1_144E164D41850A11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091_98* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21C7581DFE99F091_98*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21C7581DFE99F091_98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_98*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_4_OFFSET))(this, a1);
	}

	::Class_1_12EBBCDF245A0FB0* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_12EBBCDF245A0FB0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_12EBBCDF245A0FB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_6_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_7_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_8_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_9_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_9_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_113*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_113*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_10()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_10_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_10(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_10_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_11()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_11_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_11(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_11_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_12()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_12_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_12(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_12_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_13()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_13_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_13(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_13_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_144E164D41850A11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_144E164D41850A11*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_144E164D41850A11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_144E164D41850A11*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
