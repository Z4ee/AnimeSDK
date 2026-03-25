#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2827A08E633A7795_25;
class Class_1_2E57B88467AF63C8_5;
class Class_1_3C58D309C7A040F5_39;
class Class_1_6303FAC302C29AF3_11;
class Class_1_973F1F5DEEACFA6C_2;
class Class_1_E9FAC3539FD8861A_20;
class Class_1_FA4F4A67B1C04320_848;
class Class_1_FA54B6DFA559D20B;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class SceneEntityInfo; }
namespace System { class String; }

#define CLASS_1_14E02E1F6D70E487_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182C0EE0)
#define CLASS_1_14E02E1F6D70E487_1_CLONE_OFFSET UNITYSDK_OFFSET(0x182BFBE0)
#define CLASS_1_14E02E1F6D70E487_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182BFE80)
#define CLASS_1_14E02E1F6D70E487_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x182BFE50)
#define CLASS_1_14E02E1F6D70E487_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182C01F0)
#define CLASS_1_14E02E1F6D70E487_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182C1C50)
#define CLASS_1_14E02E1F6D70E487_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182C1820)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x182BFCB0)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x182BFCD0)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x182BFCF0)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x182BFD40)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x182BFD80)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x182BFDA0)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x182BFDD0)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x182BFE00)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_9_OFFSET UNITYSDK_OFFSET(0x182BFE30)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x182BFC90)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x182BFD10)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x182BFC70)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x182BFC10)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x182BFC50)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x182BFDC0)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x182BFD60)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x182BFC60)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x182BFD20)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_6E1EC2DF63D7020F_3_OFFSET UNITYSDK_OFFSET(0x182BFD70)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_6E1EC2DF63D7020F_4_OFFSET UNITYSDK_OFFSET(0x182BFE20)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x182BFC30)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x182BFCC0)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x182BFCE0)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x182BFD00)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x182BFD50)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x182BFD90)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x182BFDB0)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x182BFDE0)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x182BFE10)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_9_OFFSET UNITYSDK_OFFSET(0x182BFE40)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x182BFCA0)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x182BFC80)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x182BFC20)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x182BFC40)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_D7B5771D20F18855_OFFSET UNITYSDK_OFFSET(0x182BFD30)
#define CLASS_1_14E02E1F6D70E487_1_METHOD_1_EE26AC512FD8F4BE_OFFSET UNITYSDK_OFFSET(0x182BFDF0)
#define CLASS_1_14E02E1F6D70E487_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182BF790)
#define CLASS_1_14E02E1F6D70E487_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182C08B0)
#define CLASS_1_14E02E1F6D70E487_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x182C0910)
#define CLASS_1_14E02E1F6D70E487_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x182C22A0)
#define CLASS_1_14E02E1F6D70E487_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182BF940)
#define CLASS_1_14E02E1F6D70E487_1__CTOR_OFFSET UNITYSDK_OFFSET(0x182BF7A0)

inline static constexpr unsigned int Class_1_14E02E1F6D70E487_1_TypeDefinitionIndex = 27030;

class Class_1_14E02E1F6D70E487_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet_Field_1_48()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_1_TypeDefinitionIndex)->GetStaticField(0x30010);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E9FAC3539FD8861A_20*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E9FAC3539FD8861A_20*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_1_TypeDefinitionIndex)->GetStaticField(0x30018);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_2827A08E633A7795_25*>** StaticGet_Field_1_53()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_2827A08E633A7795_25*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_1_TypeDefinitionIndex)->GetStaticField(0x30020);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_43()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_1_TypeDefinitionIndex)->GetStaticField(0x30028);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_33()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_1_TypeDefinitionIndex)->GetStaticField(0x30030);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_2E57B88467AF63C8_5*>** StaticGet_Field_1_36()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_2E57B88467AF63C8_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_1_TypeDefinitionIndex)->GetStaticField(0x30038);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA54B6DFA559D20B*>** StaticGet_Field_1_25()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA54B6DFA559D20B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_1_TypeDefinitionIndex)->GetStaticField(0x30040);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::SceneEntityInfo*>** StaticGet_Field_1_28()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::SceneEntityInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_1_TypeDefinitionIndex)->GetStaticField(0x30048);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_FA4F4A67B1C04320_848*>** StaticGet_Field_1_22()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_FA4F4A67B1C04320_848*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_1_TypeDefinitionIndex)->GetStaticField(0x30050);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3C58D309C7A040F5_39*>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3C58D309C7A040F5_39*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14E02E1F6D70E487_1_TypeDefinitionIndex)->GetStaticField(0x30058);
	}
	// static const ::System::Int32 Field_1_1 = 0x5A1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x472; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6BC; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x162; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x6E5; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_24 = 0x653; // 0x0
	// static const ::System::Int32 Field_1_27 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_30 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_32 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_35 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_38 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_40 = 0x6EC; // 0x0
	// static const ::System::Int32 Field_1_42 = 0x756; // 0x0
	// static const ::System::Int32 Field_1_45 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_47 = 0x314; // 0x0
	// static const ::System::Int32 Field_1_50 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_52 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_55 = 0x30A; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2827A08E633A7795_25*>* Field_1_54; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Field_1_49; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_44; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_39*>* Field_1_10; // 0x28
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x30
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA54B6DFA559D20B*>* Field_1_26; // 0x38
	::Class_1_973F1F5DEEACFA6C_2* Field_1_12; // 0x40
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_34; // 0x48
	::Class_1_6303FAC302C29AF3_11* Field_1_2; // 0x50
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* Field_1_29; // 0x58
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E57B88467AF63C8_5*>* Field_1_37; // 0x60
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E9FAC3539FD8861A_20*>* Field_1_5; // 0x68
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_FA4F4A67B1C04320_848*>* Field_1_23; // 0x70
	::System::UInt64 Field_1_7; // 0x78
	::System::UInt32 Field_1_41; // 0x80
	::System::UInt32 Field_1_18; // 0x84
	::System::UInt32 Field_1_51; // 0x88
	::System::UInt32 Field_1_39; // 0x8C
	::System::UInt32 Field_1_56; // 0x90
	::System::UInt32 Field_1_14; // 0x94
	::System::UInt32 Field_1_16; // 0x98
	::System::UInt32 Field_1_20; // 0x9C
	::System::UInt32 Field_1_46; // 0xA0
	::System::UInt32 Field_1_31; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_14E02E1F6D70E487_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487_1* Clone()
	{
		return ((::Class_1_14E02E1F6D70E487_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_CLONE_OFFSET))(this);
	}

	::Class_1_6303FAC302C29AF3_11* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6303FAC302C29AF3_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6303FAC302C29AF3_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6303FAC302C29AF3_11*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E9FAC3539FD8861A_20*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E9FAC3539FD8861A_20*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_39*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_39*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Class_1_973F1F5DEEACFA6C_2* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_973F1F5DEEACFA6C_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_973F1F5DEEACFA6C_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C_2*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_FA4F4A67B1C04320_848*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_FA4F4A67B1C04320_848*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA54B6DFA559D20B*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA54B6DFA559D20B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* Method_1_D7B5771D20F18855()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_D7B5771D20F18855_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E57B88467AF63C8_5*>* Method_1_6E1EC2DF63D7020F_3()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2E57B88467AF63C8_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_6E1EC2DF63D7020F_3_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Method_1_EE26AC512FD8F4BE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_EE26AC512FD8F4BE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2827A08E633A7795_25*>* Method_1_6E1EC2DF63D7020F_4()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2827A08E633A7795_25*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_6E1EC2DF63D7020F_4_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_02A3D10A9D535169_9_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_METHOD_1_7786DC814C2FC3BE_9_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_14E02E1F6D70E487_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_14E02E1F6D70E487_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_14E02E1F6D70E487_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
