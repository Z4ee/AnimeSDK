#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_18E34A0F9C85038A_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12A9E44435FBA7F9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CD04A0)
#define CLASS_1_12A9E44435FBA7F9_CLONE_OFFSET UNITYSDK_OFFSET(0x17CD01A0)
#define CLASS_1_12A9E44435FBA7F9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CD02F0)
#define CLASS_1_12A9E44435FBA7F9_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CD0240)
#define CLASS_1_12A9E44435FBA7F9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CD0390)
#define CLASS_1_12A9E44435FBA7F9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CD0570)
#define CLASS_1_12A9E44435FBA7F9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CD0500)
#define CLASS_1_12A9E44435FBA7F9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17CD0220)
#define CLASS_1_12A9E44435FBA7F9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17CD0230)
#define CLASS_1_12A9E44435FBA7F9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CD0110)
#define CLASS_1_12A9E44435FBA7F9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CD03E0)
#define CLASS_1_12A9E44435FBA7F9_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CD0440)
#define CLASS_1_12A9E44435FBA7F9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CD0130)
#define CLASS_1_12A9E44435FBA7F9__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD0120)

inline static constexpr unsigned int Class_1_12A9E44435FBA7F9_TypeDefinitionIndex = 23400;

class Class_1_12A9E44435FBA7F9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_18E34A0F9C85038A_2* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12A9E44435FBA7F9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12A9E44435FBA7F9* Clone()
	{
		return ((::Class_1_12A9E44435FBA7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_CLONE_OFFSET))(this);
	}

	::Class_1_18E34A0F9C85038A_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_18E34A0F9C85038A_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_18E34A0F9C85038A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_18E34A0F9C85038A_2*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12A9E44435FBA7F9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12A9E44435FBA7F9*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12A9E44435FBA7F9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
