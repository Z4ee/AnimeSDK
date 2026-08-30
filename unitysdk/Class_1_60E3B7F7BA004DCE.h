#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/System/Object.h"

class Class_1_07701BC2FDC5E4E0;
class Class_1_27DCDC5CAB14C7C7;
class Class_1_D17272E82AE804C2_15;
class Class_1_D17272E82AE804C2_16;
class Class_1_D17272E82AE804C2_9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_60E3B7F7BA004DCE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D8BEFB0)
#define CLASS_1_60E3B7F7BA004DCE_CLONE_OFFSET UNITYSDK_OFFSET(0x1D8BE480)
#define CLASS_1_60E3B7F7BA004DCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D8BE6C0)
#define CLASS_1_60E3B7F7BA004DCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D8BE690)
#define CLASS_1_60E3B7F7BA004DCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D8BE870)
#define CLASS_1_60E3B7F7BA004DCE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D8BFA10)
#define CLASS_1_60E3B7F7BA004DCE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D8BF6D0)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1D8BE4F0)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1D8BE510)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1D8BE530)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1D8BE570)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1D8BE590)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1D8BE5C0)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1D8BE5E0)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1D8BE640)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1D8BE670)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D8BE4D0)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1D8BE620)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1D8BE600)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1D8BE4C0)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D8BE190)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1D8BE560)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1D8BE5B0)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1D8BE660)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1D8BE550)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1D8BE500)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1D8BE520)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1D8BE540)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1D8BE580)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1D8BE5A0)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1D8BE5D0)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1D8BE5F0)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1D8BE650)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1D8BE680)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D8BE4E0)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1D8BE630)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1D8BE610)
#define CLASS_1_60E3B7F7BA004DCE_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1D8BE4B0)
#define CLASS_1_60E3B7F7BA004DCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D8BE1C0)
#define CLASS_1_60E3B7F7BA004DCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D8BE9C0)
#define CLASS_1_60E3B7F7BA004DCE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D8BEA20)
#define CLASS_1_60E3B7F7BA004DCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8BFDD0)
#define CLASS_1_60E3B7F7BA004DCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8BE270)
#define CLASS_1_60E3B7F7BA004DCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BE1D0)

inline static constexpr unsigned int Class_1_60E3B7F7BA004DCE_TypeDefinitionIndex = 25067;

class Class_1_60E3B7F7BA004DCE : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_27DCDC5CAB14C7C7*>** StaticGet_IAEKKFPPGGJ()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_27DCDC5CAB14C7C7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60E3B7F7BA004DCE_TypeDefinitionIndex)->GetStaticField(0x13810);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_16*>** StaticGet_DFPBOGBGKLP()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60E3B7F7BA004DCE_TypeDefinitionIndex)->GetStaticField(0x13818);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_15*>** StaticGet_GPNHFNLKNEK()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60E3B7F7BA004DCE_TypeDefinitionIndex)->GetStaticField(0x13820);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_16*>** StaticGet_OHPOAJJOBGD()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_16*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60E3B7F7BA004DCE_TypeDefinitionIndex)->GetStaticField(0x13828);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_60E3B7F7BA004DCE*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_60E3B7F7BA004DCE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60E3B7F7BA004DCE_TypeDefinitionIndex)->GetStaticField(0x13830);
	}
	// static const ::System::Int32 BOADFNPOBEP = 0x1; // 0x0
	// static const ::System::Int32 AKFFJEHMCCB = 0x2; // 0x0
	// static const ::System::Int32 AOEBNCAILPJ = 0x3; // 0x0
	// static const ::System::Int32 CJIHHBEOLPP = 0x4; // 0x0
	// static const ::System::Int32 LKCCGCBCJJM = 0x5; // 0x0
	// static const ::System::Int32 AHJDPLDGMLP = 0x6; // 0x0
	// static const ::System::Int32 LAOLBLLNLLA = 0x7; // 0x0
	// static const ::System::Int32 JHPHPDPGLLF = 0x8; // 0x0
	// static const ::System::Int32 DJAHPPOHHCF = 0xA; // 0x0
	// static const ::System::Int32 IKHKFKFIGBC = 0xB; // 0x0
	// static const ::System::Int32 OEAKKPCOOJF = 0xC; // 0x0
	// static const ::System::Int32 PFJGLEDGEMH = 0xD; // 0x0
	// static const ::System::Int32 NOBLAPFIBHG = 0xF; // 0x0
	// static const ::System::Int32 DMOGHJDAKFJ = 0x10; // 0x0
	// static const ::System::Int32 FNGLLCBKEPF = 0x11; // 0x0
	// static const ::System::Int32 LOCOGCNNINH = 0x12; // 0x0
	// static const ::System::Int32 HCCMOEAHHJE = 0x13; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_16*>* EKKJMMGCMGI; // 0x10
	::Class_1_07701BC2FDC5E4E0* MGAENCPOBKN; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_15*>* DGOOJDMMJIP; // 0x20
	::Class_1_D17272E82AE804C2_9* NOHFFBHAHFM; // 0x28
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_16*>* MPMHGINNJFP; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_27DCDC5CAB14C7C7*>* KHBFICKDAPA; // 0x40
	::System::UInt32 MGDODHEHDFE; // 0x48
	::System::UInt32 GEMFJILOPLL; // 0x4C
	::System::UInt32 MLFLEEGBFJP; // 0x50
	::System::UInt32 CLBJDBPOOEK; // 0x54
	::System::UInt32 EAFEGFFAIKG; // 0x58
	::System::UInt32 IMJCALAFOMD; // 0x5C
	::System::UInt32 OGPNLMIIJCO; // 0x60
	::System::UInt32 DNKADAFBILN; // 0x64
	::System::UInt32 KCIKBKIBOPB; // 0x68
	::System::UInt32 PLKGEBACJMA; // 0x6C
	::Enum_3_01618AD0437C8486 CFCAMOAGIDE; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_60E3B7F7BA004DCE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60E3B7F7BA004DCE*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_60E3B7F7BA004DCE*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_60E3B7F7BA004DCE*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_60E3B7F7BA004DCE* Clone()
	{
		return ((::Class_1_60E3B7F7BA004DCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_CLONE_OFFSET))(this);
	}

	::Enum_3_01618AD0437C8486 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_01618AD0437C8486(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_01618AD0437C8486 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_16*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_16*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_15*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_15*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_27DCDC5CAB14C7C7*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_27DCDC5CAB14C7C7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Class_1_07701BC2FDC5E4E0* Method_1_24748FC20F375725()
	{
		return ((::Class_1_07701BC2FDC5E4E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_07701BC2FDC5E4E0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07701BC2FDC5E4E0*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_9* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_D17272E82AE804C2_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D17272E82AE804C2_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_9*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_16*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_16*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_60E3B7F7BA004DCE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_60E3B7F7BA004DCE*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_60E3B7F7BA004DCE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60E3B7F7BA004DCE*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_60E3B7F7BA004DCE_MERGEFROM_1_OFFSET))(this, a1);
	}
};
