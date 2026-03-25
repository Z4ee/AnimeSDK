#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_4.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A4E2764947F50E01_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B4BD70)
#define CLASS_1_A4E2764947F50E01_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17B4BA20)
#define CLASS_1_A4E2764947F50E01_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B4BB90)
#define CLASS_1_A4E2764947F50E01_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B4BAE0)
#define CLASS_1_A4E2764947F50E01_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B4BC40)
#define CLASS_1_A4E2764947F50E01_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B4BF00)
#define CLASS_1_A4E2764947F50E01_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B4BE80)
#define CLASS_1_A4E2764947F50E01_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17B4BAC0)
#define CLASS_1_A4E2764947F50E01_2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17B4BAB0)
#define CLASS_1_A4E2764947F50E01_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17B4BAD0)
#define CLASS_1_A4E2764947F50E01_2_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17B4BAA0)
#define CLASS_1_A4E2764947F50E01_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B4B990)
#define CLASS_1_A4E2764947F50E01_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B4BC80)
#define CLASS_1_A4E2764947F50E01_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B4BCE0)
#define CLASS_1_A4E2764947F50E01_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B4B9B0)
#define CLASS_1_A4E2764947F50E01_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17B4B9A0)

inline static constexpr unsigned int Class_1_A4E2764947F50E01_2_TypeDefinitionIndex = 23497;

class Class_1_A4E2764947F50E01_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_C9DFE5EE7107C629* Field_1_4; // 0x18
	::Enum_3_71AA90D596A09AC8_4 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A4E2764947F50E01_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01_2*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A4E2764947F50E01_2* Clone()
	{
		return ((::Class_1_A4E2764947F50E01_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2_CLONE_OFFSET))(this);
	}

	::Enum_3_71AA90D596A09AC8_4 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_71AA90D596A09AC8_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_71AA90D596A09AC8_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_4))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_C9DFE5EE7107C629* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9DFE5EE7107C629*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9DFE5EE7107C629* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A4E2764947F50E01_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A4E2764947F50E01_2*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A4E2764947F50E01_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01_2*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
