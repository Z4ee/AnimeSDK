#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A_70;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C3C5C0E033C47270_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180F2EF0)
#define CLASS_1_C3C5C0E033C47270_14_CLONE_OFFSET UNITYSDK_OFFSET(0x180F2B80)
#define CLASS_1_C3C5C0E033C47270_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180F2D40)
#define CLASS_1_C3C5C0E033C47270_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x180F2C70)
#define CLASS_1_C3C5C0E033C47270_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180F2DE0)
#define CLASS_1_C3C5C0E033C47270_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180F3020)
#define CLASS_1_C3C5C0E033C47270_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180F2F50)
#define CLASS_1_C3C5C0E033C47270_14_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x180F2C50)
#define CLASS_1_C3C5C0E033C47270_14_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x180F2C60)
#define CLASS_1_C3C5C0E033C47270_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180F2AD0)
#define CLASS_1_C3C5C0E033C47270_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180F2E30)
#define CLASS_1_C3C5C0E033C47270_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x180F2E90)
#define CLASS_1_C3C5C0E033C47270_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180F2AF0)
#define CLASS_1_C3C5C0E033C47270_14__CTOR_OFFSET UNITYSDK_OFFSET(0x180F2AE0)

inline static constexpr unsigned int Class_1_C3C5C0E033C47270_14_TypeDefinitionIndex = 26300;

class Class_1_C3C5C0E033C47270_14 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Class_1_E7C4009BCC22497A_70* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C3C5C0E033C47270_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_14*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_14__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C3C5C0E033C47270_14* Clone()
	{
		return ((::Class_1_C3C5C0E033C47270_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_14_CLONE_OFFSET))(this);
	}

	::Class_1_E7C4009BCC22497A_70* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E7C4009BCC22497A_70*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_14_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E7C4009BCC22497A_70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_70*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_14_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C3C5C0E033C47270_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C3C5C0E033C47270_14*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C3C5C0E033C47270_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_14*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
