#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F3CA30716D4FAF92_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x199DE860)
#define CLASS_1_F3CA30716D4FAF92_CLONE_OFFSET UNITYSDK_OFFSET(0x199DDC70)
#define CLASS_1_F3CA30716D4FAF92_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x199DDFC0)
#define CLASS_1_F3CA30716D4FAF92_EQUALS_OFFSET UNITYSDK_OFFSET(0x199DDF60)
#define CLASS_1_F3CA30716D4FAF92_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x199DE1C0)
#define CLASS_1_F3CA30716D4FAF92_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x199DF300)
#define CLASS_1_F3CA30716D4FAF92_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x199DF140)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x199DDD90)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x199DDDB0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x199DDDD0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x199DDDF0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x199DDE20)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x199DDE40)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x199DDEE0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_8_OFFSET UNITYSDK_OFFSET(0x199DDF40)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x199DDD70)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x199DDCC0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x199DDA70)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x199DDE60)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x199DDE10)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x199DDDA0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x199DDDC0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x199DDDE0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x199DDE00)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x199DDE30)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x199DDE50)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x199DDEF0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_8_OFFSET UNITYSDK_OFFSET(0x199DDF50)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x199DDD80)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x199DDCD0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x199DDEB0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_2_OFFSET UNITYSDK_OFFSET(0x199DDED0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_3_OFFSET UNITYSDK_OFFSET(0x199DDF10)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_4_OFFSET UNITYSDK_OFFSET(0x199DDF30)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x199DDE90)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x199DDEA0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x199DDEC0)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_3_OFFSET UNITYSDK_OFFSET(0x199DDF00)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_4_OFFSET UNITYSDK_OFFSET(0x199DDF20)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x199DDE80)
#define CLASS_1_F3CA30716D4FAF92_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x199DDE70)
#define CLASS_1_F3CA30716D4FAF92_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x199DDAD0)
#define CLASS_1_F3CA30716D4FAF92_TOSTRING_OFFSET UNITYSDK_OFFSET(0x199DE400)
#define CLASS_1_F3CA30716D4FAF92_WRITETO_OFFSET UNITYSDK_OFFSET(0x199DE460)
#define CLASS_1_F3CA30716D4FAF92__CCTOR_OFFSET UNITYSDK_OFFSET(0x199DF630)
#define CLASS_1_F3CA30716D4FAF92__CTOR_1_OFFSET UNITYSDK_OFFSET(0x199DDB40)
#define CLASS_1_F3CA30716D4FAF92__CTOR_OFFSET UNITYSDK_OFFSET(0x199DDAE0)

inline static constexpr unsigned int Class_1_F3CA30716D4FAF92_TypeDefinitionIndex = 23884;

class Class_1_F3CA30716D4FAF92 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F3CA30716D4FAF92*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F3CA30716D4FAF92*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CA30716D4FAF92_TypeDefinitionIndex)->GetStaticField(0x24280);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_3*>** StaticGet_Field_1_15()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CA30716D4FAF92_TypeDefinitionIndex)->GetStaticField(0x24288);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_21 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_23 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_25 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_27 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_29 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_31 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_33 = 0x10; // 0x0
	// static const ::System::Int32 Field_1_35 = 0x11; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_3*>* Field_1_16; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::String* Field_1_3; // 0x20
	::System::UInt32 Field_1_18; // 0x28
	::System::UInt32 Field_1_5; // 0x2C
	::System::UInt32 Field_1_7; // 0x30
	::System::UInt32 Field_1_11; // 0x34
	::System::Int32 Field_1_24; // 0x38
	::System::UInt32 Field_1_30; // 0x3C
	::System::UInt32 Field_1_9; // 0x40
	::System::Int32 Field_1_34; // 0x44
	::System::UInt32 Field_1_13; // 0x48
	::System::Int32 Field_1_26; // 0x4C
	::System::Single Field_1_22; // 0x50
	::System::Int32 Field_1_28; // 0x54
	::System::UInt32 Field_1_36; // 0x58
	::System::UInt32 Field_1_20; // 0x5C
	::System::Int32 Field_1_32; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F3CA30716D4FAF92* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F3CA30716D4FAF92*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F3CA30716D4FAF92*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F3CA30716D4FAF92* Clone()
	{
		return ((::Class_1_F3CA30716D4FAF92*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_3*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_3_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_3_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_4()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C74CF020AA42ED85_4_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_C114A1F8E08B6F92_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_02A3D10A9D535169_8_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_METHOD_1_7786DC814C2FC3BE_8_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F3CA30716D4FAF92* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F3CA30716D4FAF92*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F3CA30716D4FAF92* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_MERGEFROM_1_OFFSET))(this, a1);
	}
};
