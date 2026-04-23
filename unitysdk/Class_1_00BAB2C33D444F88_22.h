#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EC1D7523DB92148_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_00BAB2C33D444F88_22_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x198C6F80)
#define CLASS_1_00BAB2C33D444F88_22_CLONE_OFFSET UNITYSDK_OFFSET(0x198C6BB0)
#define CLASS_1_00BAB2C33D444F88_22_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x198C6CD0)
#define CLASS_1_00BAB2C33D444F88_22_EQUALS_OFFSET UNITYSDK_OFFSET(0x198C6BF0)
#define CLASS_1_00BAB2C33D444F88_22_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x198C6D80)
#define CLASS_1_00BAB2C33D444F88_22_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x198C70C0)
#define CLASS_1_00BAB2C33D444F88_22_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x198C7020)
#define CLASS_1_00BAB2C33D444F88_22_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x198C6AA0)
#define CLASS_1_00BAB2C33D444F88_22_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x198C6BE0)
#define CLASS_1_00BAB2C33D444F88_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x198C6AD0)
#define CLASS_1_00BAB2C33D444F88_22_TOSTRING_OFFSET UNITYSDK_OFFSET(0x198C6E70)
#define CLASS_1_00BAB2C33D444F88_22_WRITETO_OFFSET UNITYSDK_OFFSET(0x198C6ED0)
#define CLASS_1_00BAB2C33D444F88_22__CCTOR_OFFSET UNITYSDK_OFFSET(0x198C7170)
#define CLASS_1_00BAB2C33D444F88_22__CTOR_1_OFFSET UNITYSDK_OFFSET(0x198C6B20)
#define CLASS_1_00BAB2C33D444F88_22__CTOR_OFFSET UNITYSDK_OFFSET(0x198C6AE0)

inline static constexpr unsigned int Class_1_00BAB2C33D444F88_22_TypeDefinitionIndex = 30659;

class Class_1_00BAB2C33D444F88_22 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_00BAB2C33D444F88_22*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_00BAB2C33D444F88_22*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00BAB2C33D444F88_22_TypeDefinitionIndex)->GetStaticField(0x22C70);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1EC1D7523DB92148_3*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1EC1D7523DB92148_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00BAB2C33D444F88_22_TypeDefinitionIndex)->GetStaticField(0x22C78);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1EC1D7523DB92148_3*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_00BAB2C33D444F88_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_00BAB2C33D444F88_22*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_00BAB2C33D444F88_22*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_00BAB2C33D444F88_22*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_00BAB2C33D444F88_22* Clone()
	{
		return ((::Class_1_00BAB2C33D444F88_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1EC1D7523DB92148_3*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1EC1D7523DB92148_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_00BAB2C33D444F88_22* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_00BAB2C33D444F88_22*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_00BAB2C33D444F88_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_00BAB2C33D444F88_22*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_00BAB2C33D444F88_22_MERGEFROM_1_OFFSET))(this, a1);
	}
};
