#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_12EBBCDF245A0FB0;
class Class_1_6BD41257D23618B4_18;
class Class_1_D17272E82AE804C2_103;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_144E164D41850A11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A213660)
#define CLASS_1_144E164D41850A11_CLONE_OFFSET UNITYSDK_OFFSET(0x1A212C00)
#define CLASS_1_144E164D41850A11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A212E70)
#define CLASS_1_144E164D41850A11_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A212E40)
#define CLASS_1_144E164D41850A11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A2130E0)
#define CLASS_1_144E164D41850A11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A213A00)
#define CLASS_1_144E164D41850A11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A2137F0)
#define CLASS_1_144E164D41850A11_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A212E00)
#define CLASS_1_144E164D41850A11_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A212D80)
#define CLASS_1_144E164D41850A11_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A2129F0)
#define CLASS_1_144E164D41850A11_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A212D10)
#define CLASS_1_144E164D41850A11_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A212E10)
#define CLASS_1_144E164D41850A11_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A212D90)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_10_OFFSET UNITYSDK_OFFSET(0x1A212DB0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_11_OFFSET UNITYSDK_OFFSET(0x1A212DD0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_12_OFFSET UNITYSDK_OFFSET(0x1A212DF0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_13_OFFSET UNITYSDK_OFFSET(0x1A212E30)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1A212C60)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1A212C80)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x1A212CA0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0x1A212CC0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_5_OFFSET UNITYSDK_OFFSET(0x1A212CE0)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_6_OFFSET UNITYSDK_OFFSET(0x1A212D00)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_7_OFFSET UNITYSDK_OFFSET(0x1A212D30)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_8_OFFSET UNITYSDK_OFFSET(0x1A212D50)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_9_OFFSET UNITYSDK_OFFSET(0x1A212D70)
#define CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A212C40)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_10_OFFSET UNITYSDK_OFFSET(0x1A212DA0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_11_OFFSET UNITYSDK_OFFSET(0x1A212DC0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_12_OFFSET UNITYSDK_OFFSET(0x1A212DE0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_13_OFFSET UNITYSDK_OFFSET(0x1A212E20)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A212C50)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1A212C70)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1A212C90)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x1A212CB0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x1A212CD0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x1A212CF0)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_7_OFFSET UNITYSDK_OFFSET(0x1A212D20)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_8_OFFSET UNITYSDK_OFFSET(0x1A212D40)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_9_OFFSET UNITYSDK_OFFSET(0x1A212D60)
#define CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A212C30)
#define CLASS_1_144E164D41850A11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A212A20)
#define CLASS_1_144E164D41850A11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A213270)
#define CLASS_1_144E164D41850A11_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A2132D0)
#define CLASS_1_144E164D41850A11__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A213CE0)
#define CLASS_1_144E164D41850A11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A212A70)
#define CLASS_1_144E164D41850A11__CTOR_OFFSET UNITYSDK_OFFSET(0x1A212A30)

inline static constexpr unsigned int Class_1_144E164D41850A11_TypeDefinitionIndex = 30123;

class Class_1_144E164D41850A11 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_144E164D41850A11*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_144E164D41850A11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_144E164D41850A11_TypeDefinitionIndex)->GetStaticField(0x10BC0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_103*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_103*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_144E164D41850A11_TypeDefinitionIndex)->GetStaticField(0x10BC8);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xCB; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x6F7; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x411; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x2A8; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x46E; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x2D2; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_103*>* Field_1_19; // 0x10
	::Class_1_6BD41257D23618B4_18* Field_1_20; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_21; // 0x20
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

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_103*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_103*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_F0088C88851A7DFB_7_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_C74E50CBD41F0264_7_OFFSET))(this, a1);
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

	::Class_1_6BD41257D23618B4_18* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6BD41257D23618B4_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6BD41257D23618B4_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6BD41257D23618B4_18*))((::PBYTE)hIl2Cpp + CLASS_1_144E164D41850A11_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
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
