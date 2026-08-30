#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_070964BB68D18B9F_2;
class Class_1_24BE2DDB450DE83C;
class Class_1_26D1ACAF5EE78B2F;
class Class_1_7FF19F6206AF6DD7_95;
class Class_1_83178EB088CAD885_7;
class Class_1_D17272E82AE804C2_1063;
class Class_1_F91AD0C5A85E4AFA_33;
class Class_1_FF220487FAB45279_4;
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

#define CLASS_1_F88C6D5EE35F8F30_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E15C0F0)
#define CLASS_1_F88C6D5EE35F8F30_CLONE_OFFSET UNITYSDK_OFFSET(0x1E15B000)
#define CLASS_1_F88C6D5EE35F8F30_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E15B2B0)
#define CLASS_1_F88C6D5EE35F8F30_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E15B280)
#define CLASS_1_F88C6D5EE35F8F30_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E15B620)
#define CLASS_1_F88C6D5EE35F8F30_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E15CE00)
#define CLASS_1_F88C6D5EE35F8F30_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E15C9E0)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E15B050)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E15B0A0)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1E15B0F0)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1E15B110)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1E15B130)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1E15B150)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1E15B170)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x1E15B1D0)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x1E15B200)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E15B030)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x1E15B240)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1E15B1B0)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1E15B220)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E15B080)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1E15B0D0)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1E15B260)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E15B070)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E15AB90)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1E15B1A0)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1E15B1F0)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x1E15B270)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1E15B0E0)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E15B060)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E15B0B0)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1E15B100)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1E15B120)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1E15B140)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1E15B160)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1E15B180)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x1E15B1E0)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x1E15B210)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E15B040)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1E15B1C0)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1E15B230)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E15B090)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1E15B0C0)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_D7B5771D20F18855_OFFSET UNITYSDK_OFFSET(0x1E15B190)
#define CLASS_1_F88C6D5EE35F8F30_METHOD_1_EE26AC512FD8F4BE_OFFSET UNITYSDK_OFFSET(0x1E15B250)
#define CLASS_1_F88C6D5EE35F8F30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E15ABC0)
#define CLASS_1_F88C6D5EE35F8F30_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E15B9C0)
#define CLASS_1_F88C6D5EE35F8F30_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E15BA20)
#define CLASS_1_F88C6D5EE35F8F30__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15D430)
#define CLASS_1_F88C6D5EE35F8F30__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E15AD60)
#define CLASS_1_F88C6D5EE35F8F30__CTOR_OFFSET UNITYSDK_OFFSET(0x1E15ABD0)

inline static constexpr unsigned int Class_1_F88C6D5EE35F8F30_TypeDefinitionIndex = 33304;

class Class_1_F88C6D5EE35F8F30 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KJMOLDEHAFI()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F88C6D5EE35F8F30_TypeDefinitionIndex)->GetStaticField(0x1DE00);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F91AD0C5A85E4AFA_33*>** StaticGet_LMBPGFPJDMD()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F91AD0C5A85E4AFA_33*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F88C6D5EE35F8F30_TypeDefinitionIndex)->GetStaticField(0x1DE08);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_26D1ACAF5EE78B2F*>** StaticGet_ELBAMEJHFMC()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_26D1ACAF5EE78B2F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F88C6D5EE35F8F30_TypeDefinitionIndex)->GetStaticField(0x1DE10);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::SceneEntityInfo*>** StaticGet_MODIEGGDDBH()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::SceneEntityInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F88C6D5EE35F8F30_TypeDefinitionIndex)->GetStaticField(0x1DE18);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_7FF19F6206AF6DD7_95*>** StaticGet_KLFCOFLJNAC()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_7FF19F6206AF6DD7_95*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F88C6D5EE35F8F30_TypeDefinitionIndex)->GetStaticField(0x1DE20);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D17272E82AE804C2_1063*>** StaticGet_MGNFKCBMLMO()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_D17272E82AE804C2_1063*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F88C6D5EE35F8F30_TypeDefinitionIndex)->GetStaticField(0x1DE28);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_F88C6D5EE35F8F30*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F88C6D5EE35F8F30*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F88C6D5EE35F8F30_TypeDefinitionIndex)->GetStaticField(0x1DE30);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_070964BB68D18B9F_2*>** StaticGet_JPANKNALEIN()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_070964BB68D18B9F_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F88C6D5EE35F8F30_TypeDefinitionIndex)->GetStaticField(0x1DE38);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet_LOMFICHFJLM()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F88C6D5EE35F8F30_TypeDefinitionIndex)->GetStaticField(0x1DE40);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NKINEGJPKNI()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F88C6D5EE35F8F30_TypeDefinitionIndex)->GetStaticField(0x1DE48);
	}
	// static const ::System::Int32 ELMGEBCLLFP = 0x6; // 0x0
	// static const ::System::Int32 JFFKLDOPFOJ = 0xD; // 0x0
	// static const ::System::Int32 JCDJCNPCJNE = 0x571; // 0x0
	// static const ::System::Int32 HENEHFDNJLM = 0x5B; // 0x0
	// static const ::System::Int32 OEMNIDFIJEO = 0x7; // 0x0
	// static const ::System::Int32 GEMDHFJFBHD = 0x1C3; // 0x0
	// static const ::System::Int32 GOCAGIHPIJO = 0x9; // 0x0
	// static const ::System::Int32 ODHBDFKGPJO = 0x470; // 0x0
	// static const ::System::Int32 NBCBOBPECPD = 0x3D5; // 0x0
	// static const ::System::Int32 EFMBBNLIENM = 0xE; // 0x0
	// static const ::System::Int32 AGOMAIOGDGI = 0xA; // 0x0
	// static const ::System::Int32 GOBJOHKBCFI = 0x67E; // 0x0
	// static const ::System::Int32 GHAAPPEBMBH = 0x8; // 0x0
	// static const ::System::Int32 KLDBDCNPKGM = 0x3; // 0x0
	// static const ::System::Int32 IINHMMMLBAO = 0x302; // 0x0
	// static const ::System::Int32 GCPLFCAECDJ = 0x1; // 0x0
	// static const ::System::Int32 HIIOMKMJFEF = 0x149; // 0x0
	// static const ::System::Int32 CHBJAHEPJEA = 0x2; // 0x0
	// static const ::System::Int32 LHLCKGKEHPI = 0x70F; // 0x0
	// static const ::System::Int32 EBJCHFMNMIL = 0xB; // 0x0
	// static const ::System::Int32 POBHPJAMCOA = 0x91; // 0x0
	// static const ::System::Int32 FECLCJNLLIL = 0xF; // 0x0
	// static const ::System::Int32 LHFHGLDDABO = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HPAOEIBKING; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_1063*>* MDOFFILNFEC; // 0x18
	::Class_1_83178EB088CAD885_7* FICJLHEDOBL; // 0x20
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
	::Class_1_24BE2DDB450DE83C* IJCOEKDIPKI; // 0x30
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* NNHELNMFPEF; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_33*>* LLLILAAMIDK; // 0x40
	::Class_1_FF220487FAB45279_4* GLBOBCIEGFH; // 0x48
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_95*>* PEOCCNCEPOL; // 0x50
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* EJJJNMKINKP; // 0x58
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DFPODMLNHJC; // 0x60
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_070964BB68D18B9F_2*>* GPLFLEJGGKL; // 0x68
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_26D1ACAF5EE78B2F*>* JNHICCKECDA; // 0x70
	::System::UInt64 JEHBHEOHGLN; // 0x78
	::System::UInt32 DKLCPIAINIK; // 0x80
	::System::UInt32 DNCBIIBLFOO; // 0x84
	::System::UInt32 CIIPNEBKCLI; // 0x88
	::System::UInt32 FMHCJONDFPB; // 0x8C
	::System::UInt32 MEGGDDIDHFM; // 0x90
	::System::UInt32 BHFEEGICLMK; // 0x94
	::System::UInt32 MIJMCFOKJCH; // 0x98
	::System::UInt32 LAPNIOGIGPL; // 0x9C
	::System::UInt32 EFAHFIBAOJP; // 0xA0
	::System::UInt32 JGGDKHENDCO; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F88C6D5EE35F8F30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F88C6D5EE35F8F30*))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F88C6D5EE35F8F30*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F88C6D5EE35F8F30*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F88C6D5EE35F8F30* Clone()
	{
		return ((::Class_1_F88C6D5EE35F8F30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_83178EB088CAD885_7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_83178EB088CAD885_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_83178EB088CAD885_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83178EB088CAD885_7*))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_95*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_95*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* Method_1_D7B5771D20F18855()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_D7B5771D20F18855_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_070964BB68D18B9F_2*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_070964BB68D18B9F_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Class_1_24BE2DDB450DE83C* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_24BE2DDB450DE83C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_24BE2DDB450DE83C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24BE2DDB450DE83C*))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_26D1ACAF5EE78B2F*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_26D1ACAF5EE78B2F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::Class_1_FF220487FAB45279_4* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_FF220487FAB45279_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_FF220487FAB45279_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279_4*))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_1063*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_1063*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Method_1_EE26AC512FD8F4BE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_EE26AC512FD8F4BE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_33*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F91AD0C5A85E4AFA_33*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F88C6D5EE35F8F30* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F88C6D5EE35F8F30*))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F88C6D5EE35F8F30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F88C6D5EE35F8F30*))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F88C6D5EE35F8F30_MERGEFROM_1_OFFSET))(this, a1);
	}
};
