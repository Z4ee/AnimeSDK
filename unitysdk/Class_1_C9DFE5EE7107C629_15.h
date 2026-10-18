#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_66.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_105;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5EB8A0)
#define CLASS_1_C9DFE5EE7107C629_15_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5EA8E0)
#define CLASS_1_C9DFE5EE7107C629_15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5EABA0)
#define CLASS_1_C9DFE5EE7107C629_15_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5EAB70)
#define CLASS_1_C9DFE5EE7107C629_15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5EADA0)
#define CLASS_1_C9DFE5EE7107C629_15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5EC300)
#define CLASS_1_C9DFE5EE7107C629_15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5EC100)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E5EA980)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E5EA9A0)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1E5EA9E0)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1E5EAA20)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1E5EAA90)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1E5EAAE0)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1E5EAB00)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1E5EAB20)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E5EA950)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E5EAA40)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1E5EAA10)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x1E5EAB60)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1E5EA940)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x1E5EAB40)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1E5EAA60)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x1E5EAAD0)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E5EA970)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E5EA540)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E5EA990)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E5EA9B0)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1E5EA9F0)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1E5EAA30)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1E5EAAA0)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1E5EAAF0)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1E5EAB10)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1E5EAB30)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E5EA960)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x1E5EAB50)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1E5EA930)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E5EAA50)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1E5EAA00)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1E5EA9D0)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1E5EAA80)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x1E5EAAC0)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E5EA920)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1E5EA9C0)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1E5EAA70)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1E5EAAB0)
#define CLASS_1_C9DFE5EE7107C629_15_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E5EA910)
#define CLASS_1_C9DFE5EE7107C629_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5EA570)
#define CLASS_1_C9DFE5EE7107C629_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5EB110)
#define CLASS_1_C9DFE5EE7107C629_15_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5EB170)
#define CLASS_1_C9DFE5EE7107C629_15__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EC6F0)
#define CLASS_1_C9DFE5EE7107C629_15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5EA680)
#define CLASS_1_C9DFE5EE7107C629_15__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EA580)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_15_TypeDefinitionIndex = 32231;

class Class_1_C9DFE5EE7107C629_15 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BOMJHGBDOFC()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_15_TypeDefinitionIndex)->GetStaticField(0x43B20);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_15*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_15_TypeDefinitionIndex)->GetStaticField(0x43B28);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KMINJADAHKD()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_15_TypeDefinitionIndex)->GetStaticField(0x43B30);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EMNIHLGHHAC()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_15_TypeDefinitionIndex)->GetStaticField(0x43B38);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_EEIBDGNNIFI()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_15_TypeDefinitionIndex)->GetStaticField(0x43B40);
	}
	// static const ::System::Int32 HOLLCCLAJAB = 0xE; // 0x0
	// static const ::System::Int32 ICGAGDOBKAM = 0x4; // 0x0
	// static const ::System::Int32 HJHOCOJGAHD = 0x579; // 0x0
	// static const ::System::Int32 PNPEFCGDMLA = 0x7; // 0x0
	// static const ::System::Int32 ACNDNOIAMPD = 0x3; // 0x0
	// static const ::System::Int32 MHJEFNFCLBO = 0x68D; // 0x0
	// static const ::System::Int32 HPLMGAJNBIK = 0xA4; // 0x0
	// static const ::System::Int32 JNCIOPFDNHG = 0xD; // 0x0
	// static const ::System::Int32 LFMHICIGAPC = 0xC; // 0x0
	// static const ::System::Int32 NHJCMCFOMEL = 0x3B9; // 0x0
	// static const ::System::Int32 OPFIMPPEGIK = 0x6A7; // 0x0
	// static const ::System::Int32 EODHILDKIPO = 0x8; // 0x0
	// static const ::System::Int32 FILDLNGCEGC = 0x9; // 0x0
	// static const ::System::Int32 FBBMENHFDLD = 0x1; // 0x0
	// static const ::System::Int32 JKOIKJCKAJL = 0x61B; // 0x0
	// static const ::System::Int32 LHCEPJKOLMH = 0xF; // 0x0
	// static const ::System::Int32 NPDDCGCNJCM = 0x4A6; // 0x0
	// static const ::System::Int32 DHHMBIGBCEG = 0xA; // 0x0
	// static const ::System::Int32 OEAKKPCOOJF = 0x2; // 0x0
	// static const ::System::Int32 CNNCHJDLGNK = 0x5; // 0x0
	// static const ::System::Int32 KPAGPEPGELH = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LIJBAMBNFJD; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CEPOMFDDMLJ; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* MFDCNNDMMNI; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OELIJOCMPJH; // 0x30
	::Class_1_21C7581DFE99F091_105* HHPPDOJNINB; // 0x38
	::System::Int64 MNAFKIKJNCK; // 0x40
	::System::UInt32 GBHALKHPMCE; // 0x48
	::System::UInt32 AFOPKCDLNHE; // 0x4C
	::System::UInt32 GCICDMNFIDO; // 0x50
	::System::UInt32 OFIAKBFDDFB; // 0x54
	::System::UInt32 MCBGOJPHBNB; // 0x58
	::System::Int64 DPNKODHICIJ; // 0x60
	::System::UInt32 KHNMCMDKBIN; // 0x68
	::System::UInt32 BPCJIHKHBDK; // 0x6C
	::Enum_3_0A3761FE34514D6C_66 AFHHMCKLLAJ; // 0x70
	::System::UInt32 ANCONNKPJHM; // 0x74
	::System::UInt32 PLKGEBACJMA; // 0x78
	::System::Boolean GEDLBDPCFBH; // 0x7C
	::System::Boolean GHKHIHNAIKB; // 0x7D
	::System::Boolean KFNGJCEGOHG; // 0x7E
	::System::Boolean DHAHNCEMJJE; // 0x7F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_15*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_15*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_15*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_15* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_66 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_66(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_66 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_66))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091_105* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21C7581DFE99F091_105*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21C7581DFE99F091_105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_105*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_15* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_15*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_15*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_15_MERGEFROM_1_OFFSET))(this, a1);
	}
};
