#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0D823C5782010BB_Enum_3_FCBB2C507E9B21A3_16.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_29;
class Class_1_E7C4009BCC22497A_20;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D0D823C5782010BB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B6C5F0)
#define CLASS_1_D0D823C5782010BB_CLONE_OFFSET UNITYSDK_OFFSET(0x17B6C0D0)
#define CLASS_1_D0D823C5782010BB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B6C1A0)
#define CLASS_1_D0D823C5782010BB_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B6C140)
#define CLASS_1_D0D823C5782010BB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B6C3B0)
#define CLASS_1_D0D823C5782010BB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B6CAB0)
#define CLASS_1_D0D823C5782010BB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B6C740)
#define CLASS_1_D0D823C5782010BB_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x17B6C120)
#define CLASS_1_D0D823C5782010BB_METHOD_1_358A144584A5DBFC_1_OFFSET UNITYSDK_OFFSET(0x17B6C050)
#define CLASS_1_D0D823C5782010BB_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x17B6BFD0)
#define CLASS_1_D0D823C5782010BB_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17B6C130)
#define CLASS_1_D0D823C5782010BB_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17B6C0B0)
#define CLASS_1_D0D823C5782010BB_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17B6C030)
#define CLASS_1_D0D823C5782010BB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B6BE30)
#define CLASS_1_D0D823C5782010BB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B6C490)
#define CLASS_1_D0D823C5782010BB_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B6C4F0)
#define CLASS_1_D0D823C5782010BB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B6BE50)
#define CLASS_1_D0D823C5782010BB__CTOR_OFFSET UNITYSDK_OFFSET(0x17B6BE40)

inline static constexpr unsigned int Class_1_D0D823C5782010BB_TypeDefinitionIndex = 24343;

class Class_1_D0D823C5782010BB : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Object* Field_1_3; // 0x18
	::Class_1_D0D823C5782010BB_Enum_3_FCBB2C507E9B21A3_16 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D0D823C5782010BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D0D823C5782010BB*))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D0D823C5782010BB* Clone()
	{
		return ((::Class_1_D0D823C5782010BB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_CLONE_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_29* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_6E708EAB438EC183_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6E708EAB438EC183_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_29*))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_E7C4009BCC22497A_20* Method_1_358A144584A5DBFC_1()
	{
		return ((::Class_1_E7C4009BCC22497A_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_METHOD_1_358A144584A5DBFC_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_E7C4009BCC22497A_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_20*))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_D0D823C5782010BB_Enum_3_FCBB2C507E9B21A3_16 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_D0D823C5782010BB_Enum_3_FCBB2C507E9B21A3_16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D0D823C5782010BB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D0D823C5782010BB*))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D0D823C5782010BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D0D823C5782010BB*))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D0D823C5782010BB_MERGEFROM_1_OFFSET))(this, a1);
	}
};
