#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FFE5B8A52EC38E9C_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12A9E44435FBA7F9_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18100E00)
#define CLASS_1_12A9E44435FBA7F9_9_CLONE_OFFSET UNITYSDK_OFFSET(0x18100B00)
#define CLASS_1_12A9E44435FBA7F9_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18100C50)
#define CLASS_1_12A9E44435FBA7F9_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x18100BA0)
#define CLASS_1_12A9E44435FBA7F9_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18100CF0)
#define CLASS_1_12A9E44435FBA7F9_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18100ED0)
#define CLASS_1_12A9E44435FBA7F9_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18100E60)
#define CLASS_1_12A9E44435FBA7F9_9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18100B80)
#define CLASS_1_12A9E44435FBA7F9_9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18100B90)
#define CLASS_1_12A9E44435FBA7F9_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18100A70)
#define CLASS_1_12A9E44435FBA7F9_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18100D40)
#define CLASS_1_12A9E44435FBA7F9_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x18100DA0)
#define CLASS_1_12A9E44435FBA7F9_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18100A90)
#define CLASS_1_12A9E44435FBA7F9_9__CTOR_OFFSET UNITYSDK_OFFSET(0x18100A80)

inline static constexpr unsigned int Class_1_12A9E44435FBA7F9_9_TypeDefinitionIndex = 27395;

class Class_1_12A9E44435FBA7F9_9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_FFE5B8A52EC38E9C_3* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12A9E44435FBA7F9_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_9*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_9__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12A9E44435FBA7F9_9* Clone()
	{
		return ((::Class_1_12A9E44435FBA7F9_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_9_CLONE_OFFSET))(this);
	}

	::Class_1_FFE5B8A52EC38E9C_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FFE5B8A52EC38E9C_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FFE5B8A52EC38E9C_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFE5B8A52EC38E9C_3*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12A9E44435FBA7F9_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_9*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12A9E44435FBA7F9_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_9*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
