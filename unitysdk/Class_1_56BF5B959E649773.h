#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B292FE068586E4C9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_56BF5B959E649773_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FE8DF0)
#define CLASS_1_56BF5B959E649773_CLONE_OFFSET UNITYSDK_OFFSET(0x17FE8A50)
#define CLASS_1_56BF5B959E649773_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FE8C20)
#define CLASS_1_56BF5B959E649773_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FE8B40)
#define CLASS_1_56BF5B959E649773_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FE8CD0)
#define CLASS_1_56BF5B959E649773_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FE8F30)
#define CLASS_1_56BF5B959E649773_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FE8E50)
#define CLASS_1_56BF5B959E649773_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17FE8B00)
#define CLASS_1_56BF5B959E649773_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17FE8B10)
#define CLASS_1_56BF5B959E649773_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17FE8B30)
#define CLASS_1_56BF5B959E649773_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17FE8B20)
#define CLASS_1_56BF5B959E649773_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FE89B0)
#define CLASS_1_56BF5B959E649773_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FE8D10)
#define CLASS_1_56BF5B959E649773_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FE8D70)
#define CLASS_1_56BF5B959E649773__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FE89D0)
#define CLASS_1_56BF5B959E649773__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE89C0)

inline static constexpr unsigned int Class_1_56BF5B959E649773_TypeDefinitionIndex = 23993;

class Class_1_56BF5B959E649773 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_B292FE068586E4C9* Field_1_2; // 0x18
	::System::Boolean Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_56BF5B959E649773* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56BF5B959E649773*))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_56BF5B959E649773* Clone()
	{
		return ((::Class_1_56BF5B959E649773*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773_CLONE_OFFSET))(this);
	}

	::Class_1_B292FE068586E4C9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_B292FE068586E4C9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_B292FE068586E4C9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9*))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_56BF5B959E649773* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_56BF5B959E649773*))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_56BF5B959E649773* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56BF5B959E649773*))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_56BF5B959E649773_MERGEFROM_1_OFFSET))(this, a1);
	}
};
