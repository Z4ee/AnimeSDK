#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D0231C413D78CFA.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_4;
class Class_1_A0360CE19DA90CEC_9;
class Class_1_A16A135FC5A0DDB9_1;
class Class_1_BD570EF86E624FB1_3;
class Class_1_CEB0D1FB248C9C52_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class DisplayAvatarDetailInfo; }
namespace System { class String; }

#define CLASS_1_4AA6AAA49C7B466C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EA1340)
#define CLASS_1_4AA6AAA49C7B466C_CLONE_OFFSET UNITYSDK_OFFSET(0x17EA0120)
#define CLASS_1_4AA6AAA49C7B466C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EA05D0)
#define CLASS_1_4AA6AAA49C7B466C_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EA0570)
#define CLASS_1_4AA6AAA49C7B466C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EA0920)
#define CLASS_1_4AA6AAA49C7B466C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EA21F0)
#define CLASS_1_4AA6AAA49C7B466C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EA1D20)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17EA0260)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17EA0280)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17EA03A0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17EA03C0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x17EA03E0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x17EA04B0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17EA0240)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x17EA0300)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x17EA0410)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_3_OFFSET UNITYSDK_OFFSET(0x17EA04F0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17EA01C0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_1_OFFSET UNITYSDK_OFFSET(0x17EA0310)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_2_OFFSET UNITYSDK_OFFSET(0x17EA0420)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_3_OFFSET UNITYSDK_OFFSET(0x17EA0500)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17EA01D0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17EA02A0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x17EA02C0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x17EA02E0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_4_OFFSET UNITYSDK_OFFSET(0x17EA0380)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17EA0180)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17EA01B0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17EA0270)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17EA0290)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17EA03B0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17EA03D0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x17EA03F0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x17EA04C0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17EA0250)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17EA02B0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x17EA02D0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_3_OFFSET UNITYSDK_OFFSET(0x17EA02F0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_4_OFFSET UNITYSDK_OFFSET(0x17EA0390)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17EA0190)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17EA01A0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17EA04E0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17EA04A0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_CF8C379558248BF8_1_OFFSET UNITYSDK_OFFSET(0x17EA0400)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_CF8C379558248BF8_OFFSET UNITYSDK_OFFSET(0x17EA0170)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17EA04D0)
#define CLASS_1_4AA6AAA49C7B466C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17EA0490)
#define CLASS_1_4AA6AAA49C7B466C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E9FD70)
#define CLASS_1_4AA6AAA49C7B466C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EA0E00)
#define CLASS_1_4AA6AAA49C7B466C_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EA0E60)
#define CLASS_1_4AA6AAA49C7B466C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EA2800)
#define CLASS_1_4AA6AAA49C7B466C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E9FE20)
#define CLASS_1_4AA6AAA49C7B466C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9FD80)

inline static constexpr unsigned int Class_1_4AA6AAA49C7B466C_TypeDefinitionIndex = 24597;

class Class_1_4AA6AAA49C7B466C : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AA6AAA49C7B466C_TypeDefinitionIndex)->GetStaticField(0x293F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>** StaticGet_Field_1_33()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AA6AAA49C7B466C_TypeDefinitionIndex)->GetStaticField(0x293F8);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x36E; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7CB; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x213; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x2FC; // 0x0
	// static const ::System::Int32 Field_1_22 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x6B2; // 0x0
	// static const ::System::Int32 Field_1_26 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_28 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_32 = 0x6B5; // 0x0
	// static const ::System::Int32 Field_1_35 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_37 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_39 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_41 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_43 = 0x9; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Field_1_34; // 0x10
	::System::String* Field_1_23; // 0x18
	::Class_1_A16A135FC5A0DDB9_1* Field_1_17; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x28
	::Class_1_6E708EAB438EC183_4* Field_1_25; // 0x30
	::System::String* Field_1_9; // 0x38
	::System::String* Field_1_36; // 0x40
	::Class_1_BD570EF86E624FB1_3* Field_1_5; // 0x48
	::Class_1_A0360CE19DA90CEC_9* Field_1_19; // 0x50
	::Class_1_CEB0D1FB248C9C52_2* Field_1_21; // 0x58
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Field_1_3; // 0x60
	::System::String* Field_1_44; // 0x68
	::System::UInt32 Field_1_11; // 0x70
	::System::UInt32 Field_1_27; // 0x74
	::Enum_3_7D0231C413D78CFA Field_1_7; // 0x78
	::System::UInt32 Field_1_31; // 0x7C
	::System::UInt32 Field_1_29; // 0x80
	::System::UInt32 Field_1_40; // 0x84
	::System::Boolean Field_1_38; // 0x88
	::System::Boolean Field_1_42; // 0x89
	::System::UInt32 Field_1_13; // 0x8C
	::System::UInt32 Field_1_15; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4AA6AAA49C7B466C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AA6AAA49C7B466C*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4AA6AAA49C7B466C* Clone()
	{
		return ((::Class_1_4AA6AAA49C7B466C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Method_1_CF8C379558248BF8()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_CF8C379558248BF8_OFFSET))(this);
	}

	::Class_1_BD570EF86E624FB1_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_BD570EF86E624FB1_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_BD570EF86E624FB1_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD570EF86E624FB1_3*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Enum_3_7D0231C413D78CFA Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_7D0231C413D78CFA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_7D0231C413D78CFA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7D0231C413D78CFA))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Class_1_A16A135FC5A0DDB9_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_A16A135FC5A0DDB9_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_A16A135FC5A0DDB9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_1*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_A0360CE19DA90CEC_9* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_A0360CE19DA90CEC_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_A0360CE19DA90CEC_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_9*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Class_1_CEB0D1FB248C9C52_2* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_CEB0D1FB248C9C52_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_3(::Class_1_CEB0D1FB248C9C52_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEB0D1FB248C9C52_2*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_3_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_1_OFFSET))(this, a1);
	}

	::Class_1_6E708EAB438EC183_4* Method_1_24748FC20F375725_4()
	{
		return ((::Class_1_6E708EAB438EC183_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_24748FC20F375725_4_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_4(::Class_1_6E708EAB438EC183_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_4*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_8C8625211DA811AE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Method_1_CF8C379558248BF8_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_CF8C379558248BF8_1_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_126AB3935214AA22_3_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_METHOD_1_1D3C8F680A3EDA34_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4AA6AAA49C7B466C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4AA6AAA49C7B466C*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4AA6AAA49C7B466C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AA6AAA49C7B466C*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AA6AAA49C7B466C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
