#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"
#include "unitysdk/System/Object.h"

class Class_1_4AF717D30078CC7E_1;
class Class_1_52DCEE691286F89A_1;
class Class_1_B3E042E60F544536;
class Class_1_D40936EF3BF54118_37;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_32ED9F60AC82E5A0_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9B5DB0)
#define CLASS_1_32ED9F60AC82E5A0_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9B4E70)
#define CLASS_1_32ED9F60AC82E5A0_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9B50D0)
#define CLASS_1_32ED9F60AC82E5A0_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9B5070)
#define CLASS_1_32ED9F60AC82E5A0_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9B5400)
#define CLASS_1_32ED9F60AC82E5A0_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9B6560)
#define CLASS_1_32ED9F60AC82E5A0_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9B6290)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E9B4FA0)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E9B4FC0)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1E9B5030)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E9B4F40)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1E9B4F20)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1E9B5000)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x1E9B5050)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E9B4ED0)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E9B4B00)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1E9B4F90)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1E9B4FE0)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E9B4EC0)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1E9B5020)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1E9B4EF0)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E9B4FB0)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E9B4FD0)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1E9B5040)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E9B4F50)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1E9B4F30)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1E9B5010)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_8C8625211DA811AE_3_OFFSET UNITYSDK_OFFSET(0x1E9B5060)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E9B4EE0)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1E9B4F80)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1E9B4F70)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E9B4F10)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1E9B4FF0)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1E9B4F60)
#define CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E9B4F00)
#define CLASS_1_32ED9F60AC82E5A0_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9B4B60)
#define CLASS_1_32ED9F60AC82E5A0_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9B5710)
#define CLASS_1_32ED9F60AC82E5A0_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9B5770)
#define CLASS_1_32ED9F60AC82E5A0_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B6910)
#define CLASS_1_32ED9F60AC82E5A0_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9B4C30)
#define CLASS_1_32ED9F60AC82E5A0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B4B70)

inline static constexpr unsigned int Class_1_32ED9F60AC82E5A0_2_TypeDefinitionIndex = 28712;

class Class_1_32ED9F60AC82E5A0_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_52DCEE691286F89A_1*>** StaticGet_PNCJHMHOEPL()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_52DCEE691286F89A_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32ED9F60AC82E5A0_2_TypeDefinitionIndex)->GetStaticField(0x472C0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_32ED9F60AC82E5A0_2*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_32ED9F60AC82E5A0_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32ED9F60AC82E5A0_2_TypeDefinitionIndex)->GetStaticField(0x472C8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_52DCEE691286F89A_1*>** StaticGet_FHHAKBKCGMB()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_52DCEE691286F89A_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32ED9F60AC82E5A0_2_TypeDefinitionIndex)->GetStaticField(0x472D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MCIIKBLEBDC()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32ED9F60AC82E5A0_2_TypeDefinitionIndex)->GetStaticField(0x472D8);
	}
	// static const ::System::Int32 CJIJCDOCIKA = 0x5; // 0x0
	// static const ::System::Int32 AHJFGENOMCK = 0x3; // 0x0
	// static const ::System::Int32 FALEGAGIODF = 0xA; // 0x0
	// static const ::System::Int32 NKIJBONMLPB = 0x2; // 0x0
	// static const ::System::Int32 LLCHFMLOOHF = 0x9; // 0x0
	// static const ::System::Int32 LFGMICHAPCJ = 0x7; // 0x0
	// static const ::System::Int32 EBLAFBDLIIK = 0x1; // 0x0
	// static const ::System::Int32 MPLECFKNAGO = 0x6; // 0x0
	// static const ::System::Int32 PAHCBJNLNAJ = 0x8; // 0x0
	// static const ::System::Int32 MGMJFMGLCGD = 0x4; // 0x0
	// static const ::System::Int32 PIOCLGJIGFG = 0xC; // 0x0
	// static const ::System::Int32 MBFCCHJLMHJ = 0xE; // 0x0
	// static const ::System::Int32 AHAGNFCJPEE = 0xB; // 0x0
	// static const ::System::Int32 MIFPHBKHEBD = 0xF; // 0x0
	// static const ::System::Int32 AJAHJCHEDLJ = 0xD; // 0x0
	::Class_1_B3E042E60F544536* ILLMPPEGGHP; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_52DCEE691286F89A_1*>* NEMFKLOJCII; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FKCJEMGDDPE; // 0x20
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
	::Class_1_B3E042E60F544536* CHHBJHDHBGO; // 0x30
	::Class_1_4AF717D30078CC7E_1* AOEPILABKMD; // 0x38
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_52DCEE691286F89A_1*>* OIGLKPHGKLD; // 0x40
	::Class_1_D40936EF3BF54118_37* JBMLNNPIELA; // 0x48
	::System::UInt32 NAOCMEBMMNJ; // 0x50
	::System::UInt32 KMHMCPNEGOH; // 0x54
	::System::Single DCNKKGIGLHC; // 0x58
	::System::UInt32 BDOKMFLMNLD; // 0x5C
	::System::UInt32 OIDGMFMBHEJ; // 0x60
	::System::Boolean NEJGFOEAHFM; // 0x64
	::System::Boolean IEGOOACIFAI; // 0x65
	::Enum_3_63BCB6C405BA8A1D_2 KPKNGJPFBHB; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_32ED9F60AC82E5A0_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32ED9F60AC82E5A0_2*))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_32ED9F60AC82E5A0_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_32ED9F60AC82E5A0_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_32ED9F60AC82E5A0_2* Clone()
	{
		return ((::Class_1_32ED9F60AC82E5A0_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_B3E042E60F544536* Method_1_24748FC20F375725()
	{
		return ((::Class_1_B3E042E60F544536*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_B3E042E60F544536* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3E042E60F544536*))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_52DCEE691286F89A_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_52DCEE691286F89A_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_4AF717D30078CC7E_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_4AF717D30078CC7E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_4AF717D30078CC7E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF717D30078CC7E_1*))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Enum_3_63BCB6C405BA8A1D_2 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_63BCB6C405BA8A1D_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_63BCB6C405BA8A1D_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::Class_1_D40936EF3BF54118_37* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_D40936EF3BF54118_37*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_D40936EF3BF54118_37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_37*))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_52DCEE691286F89A_1*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_52DCEE691286F89A_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Class_1_B3E042E60F544536* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_B3E042E60F544536*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_3(::Class_1_B3E042E60F544536* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3E042E60F544536*))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_METHOD_1_8C8625211DA811AE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_32ED9F60AC82E5A0_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_32ED9F60AC82E5A0_2*))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_32ED9F60AC82E5A0_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32ED9F60AC82E5A0_2*))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_32ED9F60AC82E5A0_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
