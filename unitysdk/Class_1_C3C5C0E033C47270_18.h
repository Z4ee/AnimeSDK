#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D8EAED2BCF3F4D39_20;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C3C5C0E033C47270_18_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182009C0)
#define CLASS_1_C3C5C0E033C47270_18_CLONE_OFFSET UNITYSDK_OFFSET(0x18200650)
#define CLASS_1_C3C5C0E033C47270_18_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18200810)
#define CLASS_1_C3C5C0E033C47270_18_EQUALS_OFFSET UNITYSDK_OFFSET(0x18200740)
#define CLASS_1_C3C5C0E033C47270_18_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182008B0)
#define CLASS_1_C3C5C0E033C47270_18_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18200B20)
#define CLASS_1_C3C5C0E033C47270_18_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18200A20)
#define CLASS_1_C3C5C0E033C47270_18_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18200720)
#define CLASS_1_C3C5C0E033C47270_18_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18200730)
#define CLASS_1_C3C5C0E033C47270_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182005A0)
#define CLASS_1_C3C5C0E033C47270_18_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18200900)
#define CLASS_1_C3C5C0E033C47270_18_WRITETO_OFFSET UNITYSDK_OFFSET(0x18200960)
#define CLASS_1_C3C5C0E033C47270_18__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182005C0)
#define CLASS_1_C3C5C0E033C47270_18__CTOR_OFFSET UNITYSDK_OFFSET(0x182005B0)

inline static constexpr unsigned int Class_1_C3C5C0E033C47270_18_TypeDefinitionIndex = 27426;

class Class_1_C3C5C0E033C47270_18 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Class_1_D8EAED2BCF3F4D39_20* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_18__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C3C5C0E033C47270_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_18*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_18__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C3C5C0E033C47270_18* Clone()
	{
		return ((::Class_1_C3C5C0E033C47270_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_18_CLONE_OFFSET))(this);
	}

	::Class_1_D8EAED2BCF3F4D39_20* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D8EAED2BCF3F4D39_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_18_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D8EAED2BCF3F4D39_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_20*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_18_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_18_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C3C5C0E033C47270_18* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C3C5C0E033C47270_18*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_18_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_18_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_18_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_18_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_18_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C3C5C0E033C47270_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_18*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_18_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_18_MERGEFROM_1_OFFSET))(this, a1);
	}
};
