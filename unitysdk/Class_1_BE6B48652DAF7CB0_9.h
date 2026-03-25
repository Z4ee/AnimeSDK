#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BE6B48652DAF7CB0_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1803F9E0)
#define CLASS_1_BE6B48652DAF7CB0_9_CLONE_OFFSET UNITYSDK_OFFSET(0x1803F540)
#define CLASS_1_BE6B48652DAF7CB0_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1803F750)
#define CLASS_1_BE6B48652DAF7CB0_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1803F680)
#define CLASS_1_BE6B48652DAF7CB0_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1803F7F0)
#define CLASS_1_BE6B48652DAF7CB0_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1803FCA0)
#define CLASS_1_BE6B48652DAF7CB0_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1803FC20)
#define CLASS_1_BE6B48652DAF7CB0_9_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1803F600)
#define CLASS_1_BE6B48652DAF7CB0_9_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x1803F610)
#define CLASS_1_BE6B48652DAF7CB0_9_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x1803F5F0)
#define CLASS_1_BE6B48652DAF7CB0_9_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1803F5D0)
#define CLASS_1_BE6B48652DAF7CB0_9_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1803F5E0)
#define CLASS_1_BE6B48652DAF7CB0_9_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1803F5C0)
#define CLASS_1_BE6B48652DAF7CB0_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1803F4D0)
#define CLASS_1_BE6B48652DAF7CB0_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1803F8A0)
#define CLASS_1_BE6B48652DAF7CB0_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1803F900)
#define CLASS_1_BE6B48652DAF7CB0_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1803F4F0)
#define CLASS_1_BE6B48652DAF7CB0_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1803F4E0)

inline static constexpr unsigned int Class_1_BE6B48652DAF7CB0_9_TypeDefinitionIndex = 27114;

class Class_1_BE6B48652DAF7CB0_9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::Int32 Field_1_4; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BE6B48652DAF7CB0_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE6B48652DAF7CB0_9*))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BE6B48652DAF7CB0_9* Clone()
	{
		return ((::Class_1_BE6B48652DAF7CB0_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BE6B48652DAF7CB0_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BE6B48652DAF7CB0_9*))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BE6B48652DAF7CB0_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE6B48652DAF7CB0_9*))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BE6B48652DAF7CB0_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
