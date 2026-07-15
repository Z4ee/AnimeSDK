#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DB57B006CFFCF00A;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0A99AF1699F7F17E_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C5E1E00)
#define CLASS_1_0A99AF1699F7F17E_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1C5E19E0)
#define CLASS_1_0A99AF1699F7F17E_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C5E1B60)
#define CLASS_1_0A99AF1699F7F17E_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C5E1A20)
#define CLASS_1_0A99AF1699F7F17E_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C5E1C80)
#define CLASS_1_0A99AF1699F7F17E_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C5E1F40)
#define CLASS_1_0A99AF1699F7F17E_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C5E1EA0)
#define CLASS_1_0A99AF1699F7F17E_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C5E18D0)
#define CLASS_1_0A99AF1699F7F17E_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C5E1A10)
#define CLASS_1_0A99AF1699F7F17E_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C5E1900)
#define CLASS_1_0A99AF1699F7F17E_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C5E1CF0)
#define CLASS_1_0A99AF1699F7F17E_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C5E1D50)
#define CLASS_1_0A99AF1699F7F17E_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5E20E0)
#define CLASS_1_0A99AF1699F7F17E_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5E1950)
#define CLASS_1_0A99AF1699F7F17E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E1910)

inline static constexpr unsigned int Class_1_0A99AF1699F7F17E_2_TypeDefinitionIndex = 25247;

class Class_1_0A99AF1699F7F17E_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A99AF1699F7F17E_2_TypeDefinitionIndex)->GetStaticField(0x30790);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_DB57B006CFFCF00A*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_DB57B006CFFCF00A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A99AF1699F7F17E_2_TypeDefinitionIndex)->GetStaticField(0x30798);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB57B006CFFCF00A*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0A99AF1699F7F17E_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_2*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0A99AF1699F7F17E_2* Clone()
	{
		return ((::Class_1_0A99AF1699F7F17E_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB57B006CFFCF00A*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB57B006CFFCF00A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0A99AF1699F7F17E_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_2*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0A99AF1699F7F17E_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_2*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
