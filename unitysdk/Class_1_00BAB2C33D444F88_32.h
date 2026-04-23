#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_94;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_00BAB2C33D444F88_32_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1942C070)
#define CLASS_1_00BAB2C33D444F88_32_CLONE_OFFSET UNITYSDK_OFFSET(0x1942BCA0)
#define CLASS_1_00BAB2C33D444F88_32_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1942BDC0)
#define CLASS_1_00BAB2C33D444F88_32_EQUALS_OFFSET UNITYSDK_OFFSET(0x1942BCE0)
#define CLASS_1_00BAB2C33D444F88_32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1942BE70)
#define CLASS_1_00BAB2C33D444F88_32_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1942C1B0)
#define CLASS_1_00BAB2C33D444F88_32_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1942C110)
#define CLASS_1_00BAB2C33D444F88_32_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1942BB90)
#define CLASS_1_00BAB2C33D444F88_32_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1942BCD0)
#define CLASS_1_00BAB2C33D444F88_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1942BBC0)
#define CLASS_1_00BAB2C33D444F88_32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1942BF60)
#define CLASS_1_00BAB2C33D444F88_32_WRITETO_OFFSET UNITYSDK_OFFSET(0x1942BFC0)
#define CLASS_1_00BAB2C33D444F88_32__CCTOR_OFFSET UNITYSDK_OFFSET(0x1942C260)
#define CLASS_1_00BAB2C33D444F88_32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1942BC10)
#define CLASS_1_00BAB2C33D444F88_32__CTOR_OFFSET UNITYSDK_OFFSET(0x1942BBD0)

inline static constexpr unsigned int Class_1_00BAB2C33D444F88_32_TypeDefinitionIndex = 31810;

class Class_1_00BAB2C33D444F88_32 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_94*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_94*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00BAB2C33D444F88_32_TypeDefinitionIndex)->GetStaticField(0x45DB0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_00BAB2C33D444F88_32*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_00BAB2C33D444F88_32*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00BAB2C33D444F88_32_TypeDefinitionIndex)->GetStaticField(0x45DB8);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_94*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_00BAB2C33D444F88_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_00BAB2C33D444F88_32*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_00BAB2C33D444F88_32*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_00BAB2C33D444F88_32*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_00BAB2C33D444F88_32* Clone()
	{
		return ((::Class_1_00BAB2C33D444F88_32*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_94*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_94*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_00BAB2C33D444F88_32* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_00BAB2C33D444F88_32*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_00BAB2C33D444F88_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_00BAB2C33D444F88_32*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_32_MERGEFROM_1_OFFSET))(this, a1);
	}
};
