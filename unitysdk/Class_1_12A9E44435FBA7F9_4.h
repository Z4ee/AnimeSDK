#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_33CC5447741F7959;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12A9E44435FBA7F9_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1801D830)
#define CLASS_1_12A9E44435FBA7F9_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1801D4D0)
#define CLASS_1_12A9E44435FBA7F9_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1801D680)
#define CLASS_1_12A9E44435FBA7F9_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1801D5D0)
#define CLASS_1_12A9E44435FBA7F9_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1801D720)
#define CLASS_1_12A9E44435FBA7F9_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1801D930)
#define CLASS_1_12A9E44435FBA7F9_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1801D890)
#define CLASS_1_12A9E44435FBA7F9_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1801D5B0)
#define CLASS_1_12A9E44435FBA7F9_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1801D5C0)
#define CLASS_1_12A9E44435FBA7F9_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1801D3E0)
#define CLASS_1_12A9E44435FBA7F9_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1801D770)
#define CLASS_1_12A9E44435FBA7F9_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1801D7D0)
#define CLASS_1_12A9E44435FBA7F9_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1801D400)
#define CLASS_1_12A9E44435FBA7F9_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1801D3F0)

inline static constexpr unsigned int Class_1_12A9E44435FBA7F9_4_TypeDefinitionIndex = 25992;

class Class_1_12A9E44435FBA7F9_4 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Class_1_33CC5447741F7959* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12A9E44435FBA7F9_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_4*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_4__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12A9E44435FBA7F9_4* Clone()
	{
		return ((::Class_1_12A9E44435FBA7F9_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_4_CLONE_OFFSET))(this);
	}

	::Class_1_33CC5447741F7959* Method_1_24748FC20F375725()
	{
		return ((::Class_1_33CC5447741F7959*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_33CC5447741F7959* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_33CC5447741F7959*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12A9E44435FBA7F9_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_4*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12A9E44435FBA7F9_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_4*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
