#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_11;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_49F04DC1BC0F5D98_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CDD2580)
#define CLASS_1_49F04DC1BC0F5D98_CLONE_OFFSET UNITYSDK_OFFSET(0x1CDD1F60)
#define CLASS_1_49F04DC1BC0F5D98_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CDD2170)
#define CLASS_1_49F04DC1BC0F5D98_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CDD2000)
#define CLASS_1_49F04DC1BC0F5D98_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CDD2440)
#define CLASS_1_49F04DC1BC0F5D98_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CDD2650)
#define CLASS_1_49F04DC1BC0F5D98_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CDD25E0)
#define CLASS_1_49F04DC1BC0F5D98_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CDD1FE0)
#define CLASS_1_49F04DC1BC0F5D98_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CDD1EA0)
#define CLASS_1_49F04DC1BC0F5D98_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CDD1FF0)
#define CLASS_1_49F04DC1BC0F5D98_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CDD1ED0)
#define CLASS_1_49F04DC1BC0F5D98_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CDD2490)
#define CLASS_1_49F04DC1BC0F5D98_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CDD24F0)
#define CLASS_1_49F04DC1BC0F5D98__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDD27D0)
#define CLASS_1_49F04DC1BC0F5D98__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CDD1EF0)
#define CLASS_1_49F04DC1BC0F5D98__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD1EE0)

inline static constexpr unsigned int Class_1_49F04DC1BC0F5D98_TypeDefinitionIndex = 25163;

class Class_1_49F04DC1BC0F5D98 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_49F04DC1BC0F5D98*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_49F04DC1BC0F5D98*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49F04DC1BC0F5D98_TypeDefinitionIndex)->GetStaticField(0x61F40);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_21DCD4640D389503_11* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_49F04DC1BC0F5D98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49F04DC1BC0F5D98*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_49F04DC1BC0F5D98*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_49F04DC1BC0F5D98*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_49F04DC1BC0F5D98* Clone()
	{
		return ((::Class_1_49F04DC1BC0F5D98*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_CLONE_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_11* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21DCD4640D389503_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21DCD4640D389503_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_11*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_49F04DC1BC0F5D98* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_49F04DC1BC0F5D98*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_49F04DC1BC0F5D98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49F04DC1BC0F5D98*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_49F04DC1BC0F5D98_MERGEFROM_1_OFFSET))(this, a1);
	}
};
