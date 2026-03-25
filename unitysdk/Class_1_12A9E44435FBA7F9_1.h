#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E14A0A1A8B1F847C_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12A9E44435FBA7F9_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18101310)
#define CLASS_1_12A9E44435FBA7F9_1_CLONE_OFFSET UNITYSDK_OFFSET(0x18101010)
#define CLASS_1_12A9E44435FBA7F9_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18101160)
#define CLASS_1_12A9E44435FBA7F9_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x181010B0)
#define CLASS_1_12A9E44435FBA7F9_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18101200)
#define CLASS_1_12A9E44435FBA7F9_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181013E0)
#define CLASS_1_12A9E44435FBA7F9_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18101370)
#define CLASS_1_12A9E44435FBA7F9_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18101090)
#define CLASS_1_12A9E44435FBA7F9_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x181010A0)
#define CLASS_1_12A9E44435FBA7F9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18100F80)
#define CLASS_1_12A9E44435FBA7F9_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18101250)
#define CLASS_1_12A9E44435FBA7F9_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x181012B0)
#define CLASS_1_12A9E44435FBA7F9_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18100FA0)
#define CLASS_1_12A9E44435FBA7F9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18100F90)

inline static constexpr unsigned int Class_1_12A9E44435FBA7F9_1_TypeDefinitionIndex = 23556;

class Class_1_12A9E44435FBA7F9_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Class_1_E14A0A1A8B1F847C_1* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12A9E44435FBA7F9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_1*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12A9E44435FBA7F9_1* Clone()
	{
		return ((::Class_1_12A9E44435FBA7F9_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_1_CLONE_OFFSET))(this);
	}

	::Class_1_E14A0A1A8B1F847C_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E14A0A1A8B1F847C_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E14A0A1A8B1F847C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_1*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12A9E44435FBA7F9_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_1*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12A9E44435FBA7F9_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_1*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
