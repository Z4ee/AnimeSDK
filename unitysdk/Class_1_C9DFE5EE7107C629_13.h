#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D0231C413D78CFA.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_7;
class Class_1_12EBBCDF245A0FB0_10;
class Class_1_752A428518BC8100_2;
class Class_1_A16A135FC5A0DDB9_1;
class Class_1_C9E417278351157F_4;
class Class_1_E1B199B3D0FB256E_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class DisplayAvatarDetailInfo; }
namespace System { class String; }

#define CLASS_1_C9DFE5EE7107C629_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19CD1C50)
#define CLASS_1_C9DFE5EE7107C629_13_CLONE_OFFSET UNITYSDK_OFFSET(0x19CD08D0)
#define CLASS_1_C9DFE5EE7107C629_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19CD0E60)
#define CLASS_1_C9DFE5EE7107C629_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x19CD0E00)
#define CLASS_1_C9DFE5EE7107C629_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19CD11E0)
#define CLASS_1_C9DFE5EE7107C629_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19CD2C80)
#define CLASS_1_C9DFE5EE7107C629_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19CD2660)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19CD0A10)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19CD0B60)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x19CD0B80)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x19CD0BD0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x19CD0C10)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x19CD0DE0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19CD0940)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x19CD0A50)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x19CD0C40)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_126AB3935214AA22_3_OFFSET UNITYSDK_OFFSET(0x19CD0CF0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19CD0960)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x19CD0B00)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x19CD0B20)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x19CD0BF0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_24748FC20F375725_4_OFFSET UNITYSDK_OFFSET(0x19CD0DA0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_24748FC20F375725_5_OFFSET UNITYSDK_OFFSET(0x19CD0DC0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19CD0920)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19CD0480)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19CD0BC0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19CD0A20)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19CD0B70)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x19CD0B90)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x19CD0BE0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x19CD0C20)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x19CD0DF0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19CD0950)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x19CD0B10)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x19CD0B30)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_8C8625211DA811AE_3_OFFSET UNITYSDK_OFFSET(0x19CD0C00)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_8C8625211DA811AE_4_OFFSET UNITYSDK_OFFSET(0x19CD0DB0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_8C8625211DA811AE_5_OFFSET UNITYSDK_OFFSET(0x19CD0DD0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19CD0930)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_9CE3056B66B7573D_1_OFFSET UNITYSDK_OFFSET(0x19CD0A60)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_9CE3056B66B7573D_2_OFFSET UNITYSDK_OFFSET(0x19CD0C50)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_9CE3056B66B7573D_3_OFFSET UNITYSDK_OFFSET(0x19CD0D00)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x19CD0970)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19CD0BB0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x19CD0B50)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19CD0A40)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_CF8C379558248BF8_1_OFFSET UNITYSDK_OFFSET(0x19CD0C30)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_CF8C379558248BF8_OFFSET UNITYSDK_OFFSET(0x19CD0BA0)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x19CD0B40)
#define CLASS_1_C9DFE5EE7107C629_13_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19CD0A30)
#define CLASS_1_C9DFE5EE7107C629_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19CD04E0)
#define CLASS_1_C9DFE5EE7107C629_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19CD16D0)
#define CLASS_1_C9DFE5EE7107C629_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x19CD1730)
#define CLASS_1_C9DFE5EE7107C629_13__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CD3400)
#define CLASS_1_C9DFE5EE7107C629_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19CD0590)
#define CLASS_1_C9DFE5EE7107C629_13__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD04F0)

inline static constexpr unsigned int Class_1_C9DFE5EE7107C629_13_TypeDefinitionIndex = 27182;

class Class_1_C9DFE5EE7107C629_13 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>** StaticGet_Field_1_36()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_13_TypeDefinitionIndex)->GetStaticField(0x663B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>** StaticGet_Field_1_25()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_13_TypeDefinitionIndex)->GetStaticField(0x663B8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_13*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9DFE5EE7107C629_13_TypeDefinitionIndex)->GetStaticField(0x663C0);
	}
	// static const ::System::Int32 Field_1_2 = 0x3F4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x173; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x41C; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x40F; // 0x0
	// static const ::System::Int32 Field_1_18 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_27 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_29 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_31 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_33 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_35 = 0x711; // 0x0
	// static const ::System::Int32 Field_1_38 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_40 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_42 = 0x7AE; // 0x0
	// static const ::System::Int32 Field_1_44 = 0x33F; // 0x0
	// static const ::System::Int32 Field_1_46 = 0xA; // 0x0
	::System::String* Field_1_39; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Field_1_37; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Field_1_26; // 0x20
	::Class_1_E1B199B3D0FB256E_1* Field_1_43; // 0x28
	::Class_1_C9E417278351157F_4* Field_1_3; // 0x30
	::Class_1_075C34D03AFA1215_7* Field_1_45; // 0x38
	::System::String* Field_1_13; // 0x40
	::Class_1_A16A135FC5A0DDB9_1* Field_1_32; // 0x48
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x50
	::System::String* Field_1_41; // 0x58
	::Class_1_12EBBCDF245A0FB0_10* Field_1_15; // 0x60
	::Class_1_752A428518BC8100_2* Field_1_17; // 0x68
	::System::String* Field_1_7; // 0x70
	::System::UInt32 Field_1_5; // 0x78
	::Enum_3_7D0231C413D78CFA Field_1_28; // 0x7C
	::System::Boolean Field_1_19; // 0x80
	::System::Boolean Field_1_11; // 0x81
	::System::UInt32 Field_1_21; // 0x84
	::System::UInt32 Field_1_23; // 0x88
	::System::UInt32 Field_1_34; // 0x8C
	::System::UInt32 Field_1_30; // 0x90
	::System::UInt32 Field_1_9; // 0x94
	::System::UInt32 Field_1_47; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_13*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_13*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9DFE5EE7107C629_13*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_13* Clone()
	{
		return ((::Class_1_C9DFE5EE7107C629_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_CLONE_OFFSET))(this);
	}

	::Class_1_C9E417278351157F_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9E417278351157F_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9E417278351157F_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9E417278351157F_4*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_9CE3056B66B7573D_1_OFFSET))(this, a1);
	}

	::Class_1_12EBBCDF245A0FB0_10* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_12EBBCDF245A0FB0_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_12EBBCDF245A0FB0_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_10*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_752A428518BC8100_2* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_752A428518BC8100_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_752A428518BC8100_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_2*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Method_1_CF8C379558248BF8()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_CF8C379558248BF8_OFFSET))(this);
	}

	::Enum_3_7D0231C413D78CFA Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_7D0231C413D78CFA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_7D0231C413D78CFA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7D0231C413D78CFA))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Class_1_A16A135FC5A0DDB9_1* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_A16A135FC5A0DDB9_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_3(::Class_1_A16A135FC5A0DDB9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_1*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_8C8625211DA811AE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* Method_1_CF8C379558248BF8_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_CF8C379558248BF8_1_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_9CE3056B66B7573D_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_126AB3935214AA22_3_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_9CE3056B66B7573D_3_OFFSET))(this, a1);
	}

	::Class_1_E1B199B3D0FB256E_1* Method_1_24748FC20F375725_4()
	{
		return ((::Class_1_E1B199B3D0FB256E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_24748FC20F375725_4_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_4(::Class_1_E1B199B3D0FB256E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E1B199B3D0FB256E_1*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_8C8625211DA811AE_4_OFFSET))(this, a1);
	}

	::Class_1_075C34D03AFA1215_7* Method_1_24748FC20F375725_5()
	{
		return ((::Class_1_075C34D03AFA1215_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_24748FC20F375725_5_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_5(::Class_1_075C34D03AFA1215_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_8C8625211DA811AE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9DFE5EE7107C629_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_13*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9DFE5EE7107C629_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_13*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9DFE5EE7107C629_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
