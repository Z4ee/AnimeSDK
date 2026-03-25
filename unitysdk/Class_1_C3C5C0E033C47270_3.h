#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7C11C261870F1926_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C3C5C0E033C47270_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E18990)
#define CLASS_1_C3C5C0E033C47270_3_CLONE_OFFSET UNITYSDK_OFFSET(0x17E18670)
#define CLASS_1_C3C5C0E033C47270_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E187E0)
#define CLASS_1_C3C5C0E033C47270_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E18730)
#define CLASS_1_C3C5C0E033C47270_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E18880)
#define CLASS_1_C3C5C0E033C47270_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E18B00)
#define CLASS_1_C3C5C0E033C47270_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E189F0)
#define CLASS_1_C3C5C0E033C47270_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E18710)
#define CLASS_1_C3C5C0E033C47270_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E18720)
#define CLASS_1_C3C5C0E033C47270_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E185C0)
#define CLASS_1_C3C5C0E033C47270_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E188D0)
#define CLASS_1_C3C5C0E033C47270_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E18930)
#define CLASS_1_C3C5C0E033C47270_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E185E0)
#define CLASS_1_C3C5C0E033C47270_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17E185D0)

inline static constexpr unsigned int Class_1_C3C5C0E033C47270_3_TypeDefinitionIndex = 23955;

class Class_1_C3C5C0E033C47270_3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Class_1_7C11C261870F1926_3* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C3C5C0E033C47270_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_3*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C3C5C0E033C47270_3* Clone()
	{
		return ((::Class_1_C3C5C0E033C47270_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_3_CLONE_OFFSET))(this);
	}

	::Class_1_7C11C261870F1926_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7C11C261870F1926_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7C11C261870F1926_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_3*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C3C5C0E033C47270_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C3C5C0E033C47270_3*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C3C5C0E033C47270_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_3*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C3C5C0E033C47270_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
