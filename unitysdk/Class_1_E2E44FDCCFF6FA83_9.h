#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D5D53619B020DDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E2E44FDCCFF6FA83_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BB2A90)
#define CLASS_1_E2E44FDCCFF6FA83_9_CLONE_OFFSET UNITYSDK_OFFSET(0x17BB26E0)
#define CLASS_1_E2E44FDCCFF6FA83_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BB28B0)
#define CLASS_1_E2E44FDCCFF6FA83_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BB27D0)
#define CLASS_1_E2E44FDCCFF6FA83_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BB2960)
#define CLASS_1_E2E44FDCCFF6FA83_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BB2BF0)
#define CLASS_1_E2E44FDCCFF6FA83_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BB2B60)
#define CLASS_1_E2E44FDCCFF6FA83_9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17BB27B0)
#define CLASS_1_E2E44FDCCFF6FA83_9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17BB2790)
#define CLASS_1_E2E44FDCCFF6FA83_9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17BB27C0)
#define CLASS_1_E2E44FDCCFF6FA83_9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17BB27A0)
#define CLASS_1_E2E44FDCCFF6FA83_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BB2650)
#define CLASS_1_E2E44FDCCFF6FA83_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BB29B0)
#define CLASS_1_E2E44FDCCFF6FA83_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BB2A10)
#define CLASS_1_E2E44FDCCFF6FA83_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BB2670)
#define CLASS_1_E2E44FDCCFF6FA83_9__CTOR_OFFSET UNITYSDK_OFFSET(0x17BB2660)

inline static constexpr unsigned int Class_1_E2E44FDCCFF6FA83_9_TypeDefinitionIndex = 25105;

class Class_1_E2E44FDCCFF6FA83_9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	::Class_1_4D5D53619B020DDD* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E2E44FDCCFF6FA83_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2E44FDCCFF6FA83_9*))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E2E44FDCCFF6FA83_9* Clone()
	{
		return ((::Class_1_E2E44FDCCFF6FA83_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9_CLONE_OFFSET))(this);
	}

	::Class_1_4D5D53619B020DDD* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4D5D53619B020DDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4D5D53619B020DDD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E2E44FDCCFF6FA83_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E2E44FDCCFF6FA83_9*))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E2E44FDCCFF6FA83_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2E44FDCCFF6FA83_9*))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E2E44FDCCFF6FA83_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
