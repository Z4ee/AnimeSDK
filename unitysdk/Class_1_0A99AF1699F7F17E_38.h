#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24BE2DDB450DE83C;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0A99AF1699F7F17E_38_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CABE880)
#define CLASS_1_0A99AF1699F7F17E_38_CLONE_OFFSET UNITYSDK_OFFSET(0x1CABE490)
#define CLASS_1_0A99AF1699F7F17E_38_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CABE610)
#define CLASS_1_0A99AF1699F7F17E_38_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CABE4D0)
#define CLASS_1_0A99AF1699F7F17E_38_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CABE730)
#define CLASS_1_0A99AF1699F7F17E_38_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CABE9C0)
#define CLASS_1_0A99AF1699F7F17E_38_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CABE920)
#define CLASS_1_0A99AF1699F7F17E_38_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CABE380)
#define CLASS_1_0A99AF1699F7F17E_38_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CABE4C0)
#define CLASS_1_0A99AF1699F7F17E_38_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CABE3B0)
#define CLASS_1_0A99AF1699F7F17E_38_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CABE7A0)
#define CLASS_1_0A99AF1699F7F17E_38_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CABE800)
#define CLASS_1_0A99AF1699F7F17E_38__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CABEB80)
#define CLASS_1_0A99AF1699F7F17E_38__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CABE400)
#define CLASS_1_0A99AF1699F7F17E_38__CTOR_OFFSET UNITYSDK_OFFSET(0x1CABE3C0)

inline static constexpr unsigned int Class_1_0A99AF1699F7F17E_38_TypeDefinitionIndex = 32669;

class Class_1_0A99AF1699F7F17E_38 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_38*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_38*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A99AF1699F7F17E_38_TypeDefinitionIndex)->GetStaticField(0x547D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_24BE2DDB450DE83C*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_24BE2DDB450DE83C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A99AF1699F7F17E_38_TypeDefinitionIndex)->GetStaticField(0x547D8);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_24BE2DDB450DE83C*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0A99AF1699F7F17E_38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_38*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_38*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_38*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0A99AF1699F7F17E_38* Clone()
	{
		return ((::Class_1_0A99AF1699F7F17E_38*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_24BE2DDB450DE83C*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_24BE2DDB450DE83C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0A99AF1699F7F17E_38* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_38*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0A99AF1699F7F17E_38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_38*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_38_MERGEFROM_1_OFFSET))(this, a1);
	}
};
