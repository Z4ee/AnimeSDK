#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_39.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"
#include "unitysdk/System/Object.h"

class Class_1_1EC1D7523DB92148;
class Class_1_66C20D6C355B068E_2;
class Class_1_C50F5982E5600913;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4AF717D30078CC7E_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E46D600)
#define CLASS_1_4AF717D30078CC7E_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1E46C590)
#define CLASS_1_4AF717D30078CC7E_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E46C890)
#define CLASS_1_4AF717D30078CC7E_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E46C830)
#define CLASS_1_4AF717D30078CC7E_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E46CA90)
#define CLASS_1_4AF717D30078CC7E_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E46E160)
#define CLASS_1_4AF717D30078CC7E_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E46DEF0)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E46C650)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E46C690)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1E46C6B0)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1E46C6D0)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1E46C740)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1E46C790)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1E46C7B0)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1E46C7F0)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1E46C810)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E46C630)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E46C710)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E46C200)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x1E46C700)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_3DACC45AC8150727_2_OFFSET UNITYSDK_OFFSET(0x1E46C770)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1E46C620)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1E46C680)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x1E46C730)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E46C670)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1E46C780)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1E46C5E0)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E46C660)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E46C6A0)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1E46C6C0)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1E46C6E0)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1E46C750)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1E46C7A0)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1E46C7C0)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1E46C800)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1E46C820)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E46C640)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E46C720)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x1E46C6F0)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_A96DCA30C6927810_2_OFFSET UNITYSDK_OFFSET(0x1E46C760)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1E46C610)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1E46C7E0)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E46C600)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1E46C7D0)
#define CLASS_1_4AF717D30078CC7E_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E46C5F0)
#define CLASS_1_4AF717D30078CC7E_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E46C260)
#define CLASS_1_4AF717D30078CC7E_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E46CE10)
#define CLASS_1_4AF717D30078CC7E_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E46CE70)
#define CLASS_1_4AF717D30078CC7E_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E46E5A0)
#define CLASS_1_4AF717D30078CC7E_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E46C3C0)
#define CLASS_1_4AF717D30078CC7E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E46C270)

inline static constexpr unsigned int Class_1_4AF717D30078CC7E_1_TypeDefinitionIndex = 28698;

class Class_1_4AF717D30078CC7E_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KECABFFGNCL()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF717D30078CC7E_1_TypeDefinitionIndex)->GetStaticField(0x14090);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C50F5982E5600913*>** StaticGet_HPDECJBEECG()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C50F5982E5600913*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF717D30078CC7E_1_TypeDefinitionIndex)->GetStaticField(0x14098);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CHKIGLPJDEF()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF717D30078CC7E_1_TypeDefinitionIndex)->GetStaticField(0x140A0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_4AF717D30078CC7E_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4AF717D30078CC7E_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF717D30078CC7E_1_TypeDefinitionIndex)->GetStaticField(0x140A8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HPBEDIEKGOL()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF717D30078CC7E_1_TypeDefinitionIndex)->GetStaticField(0x140B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_66C20D6C355B068E_2*>** StaticGet_FBOIMELHOFP()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_66C20D6C355B068E_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF717D30078CC7E_1_TypeDefinitionIndex)->GetStaticField(0x140B8);
	}
	// static const ::System::Int32 KNDDKNOJGGL = 0x33F; // 0x0
	// static const ::System::Int32 OKDFPFNEEJC = 0xE; // 0x0
	// static const ::System::Int32 NGKKOAEPHEF = 0x1; // 0x0
	// static const ::System::Int32 KPGNEGMDKCI = 0x9; // 0x0
	// static const ::System::Int32 FCOCNNGDCDH = 0xF; // 0x0
	// static const ::System::Int32 JAHDNDGBDFI = 0x63D; // 0x0
	// static const ::System::Int32 FPOEICGFNIN = 0x7; // 0x0
	// static const ::System::Int32 HMBOIBJMLJD = 0xA; // 0x0
	// static const ::System::Int32 AJAHJCHEDLJ = 0x5; // 0x0
	// static const ::System::Int32 BFAHGLLDMLF = 0x8; // 0x0
	// static const ::System::Int32 APBLHDFIFMH = 0xD; // 0x0
	// static const ::System::Int32 GGKAACEKONL = 0x2C3; // 0x0
	// static const ::System::Int32 BGJIBKGJBMM = 0x3; // 0x0
	// static const ::System::Int32 GBIAHAJLDKL = 0xC; // 0x0
	// static const ::System::Int32 MPLECFKNAGO = 0x7C9; // 0x0
	// static const ::System::Int32 OIDEIBKKMCB = 0x16E; // 0x0
	// static const ::System::Int32 AHJFGENOMCK = 0x2; // 0x0
	// static const ::System::Int32 BOIGPPCIPFF = 0xB; // 0x0
	// static const ::System::Int32 MKGJKCIFDKG = 0x4; // 0x0
	// static const ::System::Int32 ELICJLBPHKB = 0xC4; // 0x0
	// static const ::System::Int32 PBNNLGJIPJB = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MEKPNMHLNPM; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C50F5982E5600913*>* BDGHBBABABH; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MBNBCCLOMLG; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ABGEDHILGNC; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_66C20D6C355B068E_2*>* OCMMBJDIIOG; // 0x38
	::Class_1_1EC1D7523DB92148* CBEEODHPOGF; // 0x40
	::System::UInt32 OBMCAJDPHHP; // 0x48
	::System::UInt32 OPPNMFMNMGC; // 0x4C
	::System::UInt32 BCBEGDNDEHL; // 0x50
	::System::UInt32 EINHEAPOLJC; // 0x54
	::System::UInt32 NFGNEEGBNIF; // 0x58
	::System::Boolean OLGEGENDMAJ; // 0x5C
	::System::Boolean LOJHDIEINAE; // 0x5D
	::System::UInt32 ILLMPPEGGHP; // 0x60
	::System::UInt32 DFFNKODNEME; // 0x64
	::Enum_3_0A3761FE34514D6C_39 EEOEKAADEKL; // 0x68
	::System::UInt32 LKICCOAODFD; // 0x6C
	::System::UInt32 CHHBJHDHBGO; // 0x70
	::System::UInt32 HNPLACBIBCO; // 0x74
	::Enum_3_63BCB6C405BA8A1D_2 KPKNGJPFBHB; // 0x78
	::Enum_3_0A3761FE34514D6C_39 JPGGDINODKP; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4AF717D30078CC7E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF717D30078CC7E_1*))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4AF717D30078CC7E_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4AF717D30078CC7E_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4AF717D30078CC7E_1* Clone()
	{
		return ((::Class_1_4AF717D30078CC7E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_66C20D6C355B068E_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_66C20D6C355B068E_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_39 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_39(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_39 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_39))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_39 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_0A3761FE34514D6C_39(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_0A3761FE34514D6C_39 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_39))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::Class_1_1EC1D7523DB92148* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1EC1D7523DB92148*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1EC1D7523DB92148* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EC1D7523DB92148*))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Enum_3_63BCB6C405BA8A1D_2 Method_1_A96DCA30C6927810_2()
	{
		return ((::Enum_3_63BCB6C405BA8A1D_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_A96DCA30C6927810_2_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_2(::Enum_3_63BCB6C405BA8A1D_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_3DACC45AC8150727_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C50F5982E5600913*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C50F5982E5600913*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4AF717D30078CC7E_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4AF717D30078CC7E_1*))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4AF717D30078CC7E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF717D30078CC7E_1*))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AF717D30078CC7E_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
