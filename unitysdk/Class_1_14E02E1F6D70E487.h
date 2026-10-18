#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24BE2DDB450DE83C;
class Class_1_26D1ACAF5EE78B2F;
class Class_1_28452A520F6B220F;
class Class_1_4B1610CADEC8BACB_1;
class Class_1_7FF19F6206AF6DD7_105;
class Class_1_D17272E82AE804C2_1091;
class Class_1_F91AD0C5A85E4AFA_34;
class Class_1_FF220487FAB45279_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class SceneEntityInfo; }
namespace System { class String; }

#define CLASS_1_14E02E1F6D70E487_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E81D580)
#define CLASS_1_14E02E1F6D70E487_CLONE_OFFSET UNITYSDK_OFFSET(0x1E81C580)
#define CLASS_1_14E02E1F6D70E487_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E81C830)
#define CLASS_1_14E02E1F6D70E487_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E81C800)
#define CLASS_1_14E02E1F6D70E487_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E81CB00)
#define CLASS_1_14E02E1F6D70E487_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E81E270)
#define CLASS_1_14E02E1F6D70E487_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E81DE60)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E81C5D0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E81C5F0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1E81C610)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1E81C650)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1E81C6A0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1E81C6F0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1E81C770)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1E81C7A0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1E81C7C0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E81C5B0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x1E81C630)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1E81C710)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1E81C750)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E81C670)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1E81C7F0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1E81C730)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E81C6D0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E81C100)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1E81C6C0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1E81C6E0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1E81C790)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1E81C640)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E81C5E0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E81C600)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1E81C620)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1E81C660)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1E81C6B0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1E81C700)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1E81C780)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1E81C7B0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1E81C7D0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E81C5C0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1E81C720)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1E81C760)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E81C680)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1E81C7E0)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_D7B5771D20F18855_OFFSET UNITYSDK_OFFSET(0x1E81C690)
#define CLASS_1_14E02E1F6D70E487_METHOD_1_EE26AC512FD8F4BE_OFFSET UNITYSDK_OFFSET(0x1E81C740)
#define CLASS_1_14E02E1F6D70E487_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E81C130)
#define CLASS_1_14E02E1F6D70E487_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E81CE70)
#define CLASS_1_14E02E1F6D70E487_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E81CED0)
#define CLASS_1_14E02E1F6D70E487__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E81E8A0)
#define CLASS_1_14E02E1F6D70E487__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E81C2D0)
#define CLASS_1_14E02E1F6D70E487__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81C140)

inline static constexpr unsigned int Class_1_14E02E1F6D70E487_TypeDefinitionIndex = 33954;

class Class_1_14E02E1F6D70E487 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet_LOMFICHFJLM()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x166C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F91AD0C5A85E4AFA_34*>** StaticGet_LMBPGFPJDMD()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F91AD0C5A85E4AFA_34*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x166C8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_26D1ACAF5EE78B2F*>** StaticGet_ELBAMEJHFMC()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_26D1ACAF5EE78B2F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x166D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_7FF19F6206AF6DD7_105*>** StaticGet_KLFCOFLJNAC()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_7FF19F6206AF6DD7_105*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x166D8);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D17272E82AE804C2_1091*>** StaticGet_MGNFKCBMLMO()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D17272E82AE804C2_1091*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x166E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NKINEGJPKNI()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x166E8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KJMOLDEHAFI()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x166F0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_14E02E1F6D70E487*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_14E02E1F6D70E487*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x166F8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::SceneEntityInfo*>** StaticGet_MODIEGGDDBH()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::SceneEntityInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x16700);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4B1610CADEC8BACB_1*>** StaticGet_JPANKNALEIN()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4B1610CADEC8BACB_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_TypeDefinitionIndex)->GetStaticField(0x16708);
	}
	// static const ::System::Int32 OEMNIDFIJEO = 0xA; // 0x0
	// static const ::System::Int32 EFMBBNLIENM = 0x9; // 0x0
	// static const ::System::Int32 GCPLFCAECDJ = 0xF; // 0x0
	// static const ::System::Int32 NBCBOBPECPD = 0x4C9; // 0x0
	// static const ::System::Int32 EBJCHFMNMIL = 0x1; // 0x0
	// static const ::System::Int32 HIIOMKMJFEF = 0x651; // 0x0
	// static const ::System::Int32 CHBJAHEPJEA = 0xE; // 0x0
	// static const ::System::Int32 HENEHFDNJLM = 0x159; // 0x0
	// static const ::System::Int32 GHAAPPEBMBH = 0x7; // 0x0
	// static const ::System::Int32 JFFKLDOPFOJ = 0x2; // 0x0
	// static const ::System::Int32 LHFHGLDDABO = 0x6; // 0x0
	// static const ::System::Int32 JCDJCNPCJNE = 0x5CB; // 0x0
	// static const ::System::Int32 GOCAGIHPIJO = 0xC; // 0x0
	// static const ::System::Int32 GOBJOHKBCFI = 0x7FD; // 0x0
	// static const ::System::Int32 LHLCKGKEHPI = 0x504; // 0x0
	// static const ::System::Int32 FECLCJNLLIL = 0x4; // 0x0
	// static const ::System::Int32 POBHPJAMCOA = 0x14; // 0x0
	// static const ::System::Int32 IINHMMMLBAO = 0x15C; // 0x0
	// static const ::System::Int32 AGOMAIOGDGI = 0x3; // 0x0
	// static const ::System::Int32 KLDBDCNPKGM = 0x5; // 0x0
	// static const ::System::Int32 ELMGEBCLLFP = 0x8; // 0x0
	// static const ::System::Int32 ODHBDFKGPJO = 0x62; // 0x0
	// static const ::System::Int32 GEMDHFJFBHD = 0x407; // 0x0
	::Class_1_28452A520F6B220F* FICJLHEDOBL; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* EJJJNMKINKP; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4B1610CADEC8BACB_1*>* GPLFLEJGGKL; // 0x20
	::Class_1_FF220487FAB45279_5* GLBOBCIEGFH; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_26D1ACAF5EE78B2F*>* JNHICCKECDA; // 0x30
	::Class_1_24BE2DDB450DE83C* IJCOEKDIPKI; // 0x38
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_1091*>* MDOFFILNFEC; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DFPODMLNHJC; // 0x48
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* NNHELNMFPEF; // 0x50
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x58
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_34*>* LLLILAAMIDK; // 0x60
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HPAOEIBKING; // 0x68
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_105*>* PEOCCNCEPOL; // 0x70
	::System::UInt32 FMHCJONDFPB; // 0x78
	::System::UInt32 EFAHFIBAOJP; // 0x7C
	::System::UInt32 LAPNIOGIGPL; // 0x80
	::System::UInt32 DNCBIIBLFOO; // 0x84
	::System::UInt32 DKLCPIAINIK; // 0x88
	::System::UInt32 BHFEEGICLMK; // 0x8C
	::System::UInt32 JGGDKHENDCO; // 0x90
	::System::UInt32 CIIPNEBKCLI; // 0x94
	::System::UInt64 JEHBHEOHGLN; // 0x98
	::System::UInt32 MEGGDDIDHFM; // 0xA0
	::System::UInt32 MIJMCFOKJCH; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_14E02E1F6D70E487* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_14E02E1F6D70E487*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_14E02E1F6D70E487*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487* Clone()
	{
		return ((::Class_1_14E02E1F6D70E487*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_1091*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_1091*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_26D1ACAF5EE78B2F*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_26D1ACAF5EE78B2F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Class_1_28452A520F6B220F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_28452A520F6B220F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_28452A520F6B220F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28452A520F6B220F*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* Method_1_D7B5771D20F18855()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_D7B5771D20F18855_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_34*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_34*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_105*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_105*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Class_1_FF220487FAB45279_5* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_FF220487FAB45279_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_FF220487FAB45279_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279_5*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Method_1_EE26AC512FD8F4BE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_EE26AC512FD8F4BE_OFFSET))(this);
	}

	::Class_1_24BE2DDB450DE83C* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_24BE2DDB450DE83C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_24BE2DDB450DE83C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24BE2DDB450DE83C*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4B1610CADEC8BACB_1*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4B1610CADEC8BACB_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_14E02E1F6D70E487* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_14E02E1F6D70E487*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_14E02E1F6D70E487* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_MERGEFROM_1_OFFSET))(this, a1);
	}
};
