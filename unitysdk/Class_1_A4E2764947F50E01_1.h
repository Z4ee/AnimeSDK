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

#define CLASS_1_A4E2764947F50E01_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FD88F0)
#define CLASS_1_A4E2764947F50E01_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17FD8530)
#define CLASS_1_A4E2764947F50E01_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FD8700)
#define CLASS_1_A4E2764947F50E01_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FD8620)
#define CLASS_1_A4E2764947F50E01_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FD87B0)
#define CLASS_1_A4E2764947F50E01_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FD8A80)
#define CLASS_1_A4E2764947F50E01_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FD8A00)
#define CLASS_1_A4E2764947F50E01_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17FD85E0)
#define CLASS_1_A4E2764947F50E01_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17FD8610)
#define CLASS_1_A4E2764947F50E01_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17FD85F0)
#define CLASS_1_A4E2764947F50E01_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17FD8600)
#define CLASS_1_A4E2764947F50E01_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FD84A0)
#define CLASS_1_A4E2764947F50E01_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FD8800)
#define CLASS_1_A4E2764947F50E01_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FD8860)
#define CLASS_1_A4E2764947F50E01_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FD84C0)
#define CLASS_1_A4E2764947F50E01_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17FD84B0)

inline static constexpr unsigned int Class_1_A4E2764947F50E01_1_TypeDefinitionIndex = 23486;

class Class_1_A4E2764947F50E01_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Class_1_C9DFE5EE7107C629* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Enum_3_71AA90D596A09AC8_4 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A4E2764947F50E01_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01_1*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A4E2764947F50E01_1* Clone()
	{
		return ((::Class_1_A4E2764947F50E01_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1_CLONE_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9DFE5EE7107C629*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9DFE5EE7107C629* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Enum_3_71AA90D596A09AC8_4 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_71AA90D596A09AC8_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_71AA90D596A09AC8_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_4))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A4E2764947F50E01_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A4E2764947F50E01_1*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A4E2764947F50E01_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01_1*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
