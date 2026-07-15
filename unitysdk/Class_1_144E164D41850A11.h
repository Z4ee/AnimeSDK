#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_12EBBCDF245A0FB0;
class Class_1_21C7581DFE99F091_98;
class Class_1_D17272E82AE804C2_113;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_144E164D41850A11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C3C38E0)
#define CLASS_1_144E164D41850A11_CLONE_OFFSET UNITYSDK_OFFSET(0x1C3C2A00)
#define CLASS_1_144E164D41850A11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C3C2C70)
#define CLASS_1_144E164D41850A11_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C3C2C40)
#define CLASS_1_144E164D41850A11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C3C2F00)
#define CLASS_1_144E164D41850A11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C3C3C80)
#define CLASS_1_144E164D41850A11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C3C3A70)
#define CLASS_1_144E164D41850A11_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1C3C2C00)
#define CLASS_1_144E164D41850A11_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C3C2A30)
#define CLASS_1_144E164D41850A11_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C3C27F0)
#define CLASS_1_144E164D41850A11_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C3C2B50)
#define CLASS_1_144E164D41850A11_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C3C2C10)
#define CLASS_1_144E164D41850A11_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C3C2A40)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_10_OFFSET UNITYSDK_OFFSET(0x1C3C2BB0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_11_OFFSET UNITYSDK_OFFSET(0x1C3C2BD0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_12_OFFSET UNITYSDK_OFFSET(0x1C3C2BF0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_13_OFFSET UNITYSDK_OFFSET(0x1C3C2C30)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1C3C2A80)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1C3C2AA0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x1C3C2AC0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0x1C3C2AE0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_5_OFFSET UNITYSDK_OFFSET(0x1C3C2B00)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_6_OFFSET UNITYSDK_OFFSET(0x1C3C2B20)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_7_OFFSET UNITYSDK_OFFSET(0x1C3C2B40)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_8_OFFSET UNITYSDK_OFFSET(0x1C3C2B70)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_9_OFFSET UNITYSDK_OFFSET(0x1C3C2B90)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C3C2A60)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_10_OFFSET UNITYSDK_OFFSET(0x1C3C2BA0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_11_OFFSET UNITYSDK_OFFSET(0x1C3C2BC0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_12_OFFSET UNITYSDK_OFFSET(0x1C3C2BE0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_13_OFFSET UNITYSDK_OFFSET(0x1C3C2C20)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1C3C2A70)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1C3C2A90)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1C3C2AB0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x1C3C2AD0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x1C3C2AF0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x1C3C2B10)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_7_OFFSET UNITYSDK_OFFSET(0x1C3C2B30)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_8_OFFSET UNITYSDK_OFFSET(0x1C3C2B60)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_9_OFFSET UNITYSDK_OFFSET(0x1C3C2B80)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C3C2A50)
#define CLASS_1_144E164D41850A11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C3C2820)
#define CLASS_1_144E164D41850A11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C3C3040)
#define CLASS_1_144E164D41850A11_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C3C30A0)
#define CLASS_1_144E164D41850A11__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3C3F70)
#define CLASS_1_144E164D41850A11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3C2870)
#define CLASS_1_144E164D41850A11__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3C2830)

inline static constexpr unsigned int Class_1_144E164D41850A11_TypeDefinitionIndex = 30655;

class Class_1_144E164D41850A11 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_113*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_113*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_144E164D41850A11_TypeDefinitionIndex)->GetStaticField(0x1DCF0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_144E164D41850A11*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_144E164D41850A11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_144E164D41850A11_TypeDefinitionIndex)->GetStaticField(0x1DCF8);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x20C; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6ED; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x1EB; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x695; // 0x0
	// static const ::System::Int32 Field_1_14 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_17 = 0xDC; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x5B2; // 0x0
	::Class_1_21C7581DFE99F091_98* Field_1_19; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_20; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_113*>* Field_1_21; // 0x20
	::Class_1_12EBBCDF245A0FB0* Field_1_22; // 0x28
	::System::Boolean Field_1_23; // 0x30
	::System::Boolean Field_1_24; // 0x31
	::System::Boolean Field_1_25; // 0x32
	::System::Boolean Field_1_26; // 0x33
	::System::Boolean Field_1_27; // 0x34
	::System::Boolean Field_1_28; // 0x35
	::System::Boolean Field_1_29; // 0x36
	::System::Boolean Field_1_30; // 0x37
	::System::Boolean Field_1_31; // 0x38
	::System::Boolean Field_1_32; // 0x39
	::System::Boolean Field_1_33; // 0x3A
	::System::Boolean Field_1_34; // 0x3B
	::System::Boolean Field_1_35; // 0x3C
	::System::Boolean Field_1_36; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_144E164D41850A11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_144E164D41850A11*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_144E164D41850A11*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_144E164D41850A11*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_144E164D41850A11* Clone()
	{
		return ((::Class_1_144E164D41850A11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_CLONE_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_98* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21C7581DFE99F091_98*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21C7581DFE99F091_98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_98*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_6_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_7_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_7_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_113*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_113*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_8_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_9_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_10()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_10_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_10(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_10_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_11()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_11_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_11(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_11_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_12()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_12_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_12(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_12_OFFSET))(this, a1);
	}

	::Class_1_12EBBCDF245A0FB0* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_12EBBCDF245A0FB0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_12EBBCDF245A0FB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_13()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_13_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_13(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_13_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_144E164D41850A11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_144E164D41850A11*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_144E164D41850A11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_144E164D41850A11*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
