#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_965;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0A99AF1699F7F17E_28_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C97D850)
#define CLASS_1_0A99AF1699F7F17E_28_CLONE_OFFSET UNITYSDK_OFFSET(0x1C97D430)
#define CLASS_1_0A99AF1699F7F17E_28_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C97D5B0)
#define CLASS_1_0A99AF1699F7F17E_28_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C97D470)
#define CLASS_1_0A99AF1699F7F17E_28_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C97D6D0)
#define CLASS_1_0A99AF1699F7F17E_28_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C97D990)
#define CLASS_1_0A99AF1699F7F17E_28_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C97D8F0)
#define CLASS_1_0A99AF1699F7F17E_28_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C97D320)
#define CLASS_1_0A99AF1699F7F17E_28_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C97D460)
#define CLASS_1_0A99AF1699F7F17E_28_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C97D350)
#define CLASS_1_0A99AF1699F7F17E_28_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C97D740)
#define CLASS_1_0A99AF1699F7F17E_28_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C97D7A0)
#define CLASS_1_0A99AF1699F7F17E_28__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C97DB30)
#define CLASS_1_0A99AF1699F7F17E_28__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C97D3A0)
#define CLASS_1_0A99AF1699F7F17E_28__CTOR_OFFSET UNITYSDK_OFFSET(0x1C97D360)

inline static constexpr unsigned int Class_1_0A99AF1699F7F17E_28_TypeDefinitionIndex = 31745;

class Class_1_0A99AF1699F7F17E_28 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_965*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_965*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A99AF1699F7F17E_28_TypeDefinitionIndex)->GetStaticField(0x25A50);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_28*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_28*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A99AF1699F7F17E_28_TypeDefinitionIndex)->GetStaticField(0x25A58);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_965*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0A99AF1699F7F17E_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_28*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_28*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_28*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0A99AF1699F7F17E_28* Clone()
	{
		return ((::Class_1_0A99AF1699F7F17E_28*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_965*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_965*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0A99AF1699F7F17E_28* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_28*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0A99AF1699F7F17E_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_28*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_28_MERGEFROM_1_OFFSET))(this, a1);
	}
};
