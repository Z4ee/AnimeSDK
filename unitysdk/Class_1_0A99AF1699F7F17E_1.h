#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_419A79D235B9417C_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0A99AF1699F7F17E_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E72AA60)
#define CLASS_1_0A99AF1699F7F17E_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1E72A640)
#define CLASS_1_0A99AF1699F7F17E_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E72A7C0)
#define CLASS_1_0A99AF1699F7F17E_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E72A680)
#define CLASS_1_0A99AF1699F7F17E_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E72A8E0)
#define CLASS_1_0A99AF1699F7F17E_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E72ABA0)
#define CLASS_1_0A99AF1699F7F17E_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E72AB00)
#define CLASS_1_0A99AF1699F7F17E_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E72A530)
#define CLASS_1_0A99AF1699F7F17E_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1E72A670)
#define CLASS_1_0A99AF1699F7F17E_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E72A560)
#define CLASS_1_0A99AF1699F7F17E_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E72A950)
#define CLASS_1_0A99AF1699F7F17E_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E72A9B0)
#define CLASS_1_0A99AF1699F7F17E_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72AD40)
#define CLASS_1_0A99AF1699F7F17E_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E72A5B0)
#define CLASS_1_0A99AF1699F7F17E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E72A570)

inline static constexpr unsigned int Class_1_0A99AF1699F7F17E_1_TypeDefinitionIndex = 25725;

class Class_1_0A99AF1699F7F17E_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_419A79D235B9417C_1*>** StaticGet_NKDPEEHHFCP()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_419A79D235B9417C_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A99AF1699F7F17E_1_TypeDefinitionIndex)->GetStaticField(0xC300);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A99AF1699F7F17E_1_TypeDefinitionIndex)->GetStaticField(0xC308);
	}
	// static const ::System::Int32 FJAPCLLOJCL = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_419A79D235B9417C_1*>* ILJJCHCOIBO; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0A99AF1699F7F17E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_1*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0A99AF1699F7F17E_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0A99AF1699F7F17E_1* Clone()
	{
		return ((::Class_1_0A99AF1699F7F17E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_419A79D235B9417C_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_419A79D235B9417C_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0A99AF1699F7F17E_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_1*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0A99AF1699F7F17E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_1*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A99AF1699F7F17E_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
