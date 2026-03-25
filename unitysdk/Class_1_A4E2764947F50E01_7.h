#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_51.h"
#include "unitysdk/System/Object.h"

class Class_1_98A08031F550F4C1_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A4E2764947F50E01_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CE9560)
#define CLASS_1_A4E2764947F50E01_7_CLONE_OFFSET UNITYSDK_OFFSET(0x17CE91A0)
#define CLASS_1_A4E2764947F50E01_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CE9380)
#define CLASS_1_A4E2764947F50E01_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CE92A0)
#define CLASS_1_A4E2764947F50E01_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CE9430)
#define CLASS_1_A4E2764947F50E01_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CE9700)
#define CLASS_1_A4E2764947F50E01_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CE9670)
#define CLASS_1_A4E2764947F50E01_7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17CE9280)
#define CLASS_1_A4E2764947F50E01_7_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17CE9270)
#define CLASS_1_A4E2764947F50E01_7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17CE9290)
#define CLASS_1_A4E2764947F50E01_7_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17CE9260)
#define CLASS_1_A4E2764947F50E01_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CE9100)
#define CLASS_1_A4E2764947F50E01_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CE9470)
#define CLASS_1_A4E2764947F50E01_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CE94D0)
#define CLASS_1_A4E2764947F50E01_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CE9120)
#define CLASS_1_A4E2764947F50E01_7__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE9110)

inline static constexpr unsigned int Class_1_A4E2764947F50E01_7_TypeDefinitionIndex = 25846;

class Class_1_A4E2764947F50E01_7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_98A08031F550F4C1_2* Field_1_4; // 0x18
	::Enum_3_0A3761FE34514D6C_51 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A4E2764947F50E01_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01_7*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A4E2764947F50E01_7* Clone()
	{
		return ((::Class_1_A4E2764947F50E01_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_CLONE_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_51 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_51(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_51 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_51))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_98A08031F550F4C1_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_98A08031F550F4C1_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_98A08031F550F4C1_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98A08031F550F4C1_2*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A4E2764947F50E01_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A4E2764947F50E01_7*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A4E2764947F50E01_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01_7*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A4E2764947F50E01_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
