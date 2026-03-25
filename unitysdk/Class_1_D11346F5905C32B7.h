#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_1;
class Class_1_14E02E1F6D70E487_2;
class Class_1_3AD2528CD53B1639_3;
class Class_1_E3BF1E96389B67AF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D11346F5905C32B7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CB14A0)
#define CLASS_1_D11346F5905C32B7_CLONE_OFFSET UNITYSDK_OFFSET(0x17CB0EB0)
#define CLASS_1_D11346F5905C32B7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CB0FA0)
#define CLASS_1_D11346F5905C32B7_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CB0F70)
#define CLASS_1_D11346F5905C32B7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CB1130)
#define CLASS_1_D11346F5905C32B7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CB1800)
#define CLASS_1_D11346F5905C32B7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CB1650)
#define CLASS_1_D11346F5905C32B7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17CB0F20)
#define CLASS_1_D11346F5905C32B7_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17CB0F00)
#define CLASS_1_D11346F5905C32B7_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x17CB0F40)
#define CLASS_1_D11346F5905C32B7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17CB0EE0)
#define CLASS_1_D11346F5905C32B7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17CB0F60)
#define CLASS_1_D11346F5905C32B7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17CB0F30)
#define CLASS_1_D11346F5905C32B7_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17CB0F10)
#define CLASS_1_D11346F5905C32B7_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x17CB0F50)
#define CLASS_1_D11346F5905C32B7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17CB0EF0)
#define CLASS_1_D11346F5905C32B7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CB0D00)
#define CLASS_1_D11346F5905C32B7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CB12D0)
#define CLASS_1_D11346F5905C32B7_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CB1330)
#define CLASS_1_D11346F5905C32B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CB19D0)
#define CLASS_1_D11346F5905C32B7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CB0D50)
#define CLASS_1_D11346F5905C32B7__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB0D10)

inline static constexpr unsigned int Class_1_D11346F5905C32B7_TypeDefinitionIndex = 23598;

class Class_1_D11346F5905C32B7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_14E02E1F6D70E487_2*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_14E02E1F6D70E487_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D11346F5905C32B7_TypeDefinitionIndex)->GetStaticField(0x6810);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x2; // 0x0
	::Class_1_14E02E1F6D70E487_1* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_3AD2528CD53B1639_3* Field_1_2; // 0x20
	::Class_1_E3BF1E96389B67AF* Field_1_8; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_14E02E1F6D70E487_2*>* Field_1_11; // 0x30
	::System::UInt32 Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D11346F5905C32B7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D11346F5905C32B7*))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D11346F5905C32B7* Clone()
	{
		return ((::Class_1_D11346F5905C32B7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_CLONE_OFFSET))(this);
	}

	::Class_1_3AD2528CD53B1639_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3AD2528CD53B1639_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3AD2528CD53B1639_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_3*))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_14E02E1F6D70E487_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_14E02E1F6D70E487_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_14E02E1F6D70E487_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_E3BF1E96389B67AF* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_E3BF1E96389B67AF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_E3BF1E96389B67AF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3BF1E96389B67AF*))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_14E02E1F6D70E487_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_14E02E1F6D70E487_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D11346F5905C32B7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D11346F5905C32B7*))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D11346F5905C32B7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D11346F5905C32B7*))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D11346F5905C32B7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
