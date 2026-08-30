#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_8.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_7;
class Class_1_C9DFE5EE7107C629_4;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFBB720)
#define CLASS_1_21DCD4640D389503_15_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFBA8C0)
#define CLASS_1_21DCD4640D389503_15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFBAB60)
#define CLASS_1_21DCD4640D389503_15_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFBAB30)
#define CLASS_1_21DCD4640D389503_15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFBADB0)
#define CLASS_1_21DCD4640D389503_15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFBBE80)
#define CLASS_1_21DCD4640D389503_15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFBBCC0)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DFBA970)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1DFBAA10)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1DFBAA30)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1DFBAAF0)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1DFBAB10)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DFBA910)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1DFBA9A0)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1DFBA990)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1DFBA8F0)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1DFBAA70)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1DFBAA60)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_47587B9526E5B08E_OFFSET UNITYSDK_OFFSET(0x1DFBA950)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DFBA680)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1DFBA960)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DFBA980)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1DFBAA20)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1DFBAA40)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1DFBAB00)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1DFBAB20)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DFBA920)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x1DFBAA80)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1DFBA900)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1DFBAA50)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1DFBAA00)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1DFBAAE0)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1DFBA940)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1DFBA9F0)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1DFBAAD0)
#define CLASS_1_21DCD4640D389503_15_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1DFBA930)
#define CLASS_1_21DCD4640D389503_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFBA6B0)
#define CLASS_1_21DCD4640D389503_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFBB020)
#define CLASS_1_21DCD4640D389503_15_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFBB080)
#define CLASS_1_21DCD4640D389503_15__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBC1B0)
#define CLASS_1_21DCD4640D389503_15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFBA780)
#define CLASS_1_21DCD4640D389503_15__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBA6C0)

inline static constexpr unsigned int Class_1_21DCD4640D389503_15_TypeDefinitionIndex = 26092;

class Class_1_21DCD4640D389503_15 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_15*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_15_TypeDefinitionIndex)->GetStaticField(0x1B1F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_7*>** StaticGet_NGAKLPPJLMH()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21DCD4640D389503_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_15_TypeDefinitionIndex)->GetStaticField(0x1B1F8);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>** StaticGet_AIMNPIGNLCL()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_15_TypeDefinitionIndex)->GetStaticField(0x1B200);
	}
	// static const ::System::Int32 EDKMCLPFFOE = 0xA; // 0x0
	// static const ::System::Int32 IHNNNFJAEJO = 0x4; // 0x0
	// static const ::System::Int32 MPCBKPENAMI = 0x5; // 0x0
	// static const ::System::Int32 MBHMGPKJFFN = 0x6; // 0x0
	// static const ::System::Int32 AFDGMMCGNPL = 0x2; // 0x0
	// static const ::System::Int32 JLCOELFOKOP = 0x8; // 0x0
	// static const ::System::Int32 IBIFMFMBIND = 0x9; // 0x0
	// static const ::System::Int32 IEFBHCNEOPN = 0xF; // 0x0
	// static const ::System::Int32 JHDAFKOKKOH = 0xC; // 0x0
	// static const ::System::Int32 DCPHPJKBJBN = 0x7; // 0x0
	// static const ::System::Int32 GHHKFNMMEFI = 0xD; // 0x0
	// static const ::System::Int32 HHNGJFIDEOJ = 0xB; // 0x0
	// static const ::System::Int32 FDCIDJHAHON = 0x1; // 0x0
	// static const ::System::Int32 IEIFMNNMINA = 0xE; // 0x0
	// static const ::System::Int32 PEBJJAEJMDN = 0x3; // 0x0
	::System::String* CGIAMNBOOBO; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Class_1_C9DFE5EE7107C629_4* MOPOGJGJICC; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_7*>* LEAELCBMELC; // 0x28
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* ACKLNIIHFOI; // 0x30
	::Google::Protobuf::ByteString* JIIEINMMCFG; // 0x38
	::System::UInt32 HJEGLCJEOKC; // 0x40
	::Enum_3_DB663931210BBC27_8 BHLCLLHLLPJ; // 0x44
	::System::UInt32 EGJDFIPLGMO; // 0x48
	::System::UInt32 AOAJIJMPBBA; // 0x4C
	::System::UInt32 EAHIDEOGMBN; // 0x50
	::System::UInt32 ABCBFJMOCJP; // 0x54
	::System::Boolean JLLKJDEPCCD; // 0x58
	::System::Boolean OOBJNKHPEKM; // 0x59
	::System::Boolean BEBEFHIBKAE; // 0x5A
	::System::UInt32 EEBKDMBJHEC; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_15*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_15*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_15*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_15* Clone()
	{
		return ((::Class_1_21DCD4640D389503_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_CLONE_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9DFE5EE7107C629_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9DFE5EE7107C629_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_4*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* Method_1_47587B9526E5B08E()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_47587B9526E5B08E_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_7*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_8 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_8))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_15* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_15*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_15*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_15_MERGEFROM_1_OFFSET))(this, a1);
	}
};
