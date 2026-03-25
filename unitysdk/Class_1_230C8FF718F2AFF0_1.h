#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_230C8FF718F2AFF0_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FAE7F0)
#define CLASS_1_230C8FF718F2AFF0_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17FAE570)
#define CLASS_1_230C8FF718F2AFF0_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FAE6A0)
#define CLASS_1_230C8FF718F2AFF0_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FAE600)
#define CLASS_1_230C8FF718F2AFF0_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FAE6F0)
#define CLASS_1_230C8FF718F2AFF0_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FAE920)
#define CLASS_1_230C8FF718F2AFF0_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FAE8E0)
#define CLASS_1_230C8FF718F2AFF0_1_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17FAE5F0)
#define CLASS_1_230C8FF718F2AFF0_1_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17FAE5E0)
#define CLASS_1_230C8FF718F2AFF0_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FAE520)
#define CLASS_1_230C8FF718F2AFF0_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FAE730)
#define CLASS_1_230C8FF718F2AFF0_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FAE790)
#define CLASS_1_230C8FF718F2AFF0_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FAE540)
#define CLASS_1_230C8FF718F2AFF0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17FAE530)

inline static constexpr unsigned int Class_1_230C8FF718F2AFF0_1_TypeDefinitionIndex = 24393;

class Class_1_230C8FF718F2AFF0_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt64 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_230C8FF718F2AFF0_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_230C8FF718F2AFF0_1*))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_230C8FF718F2AFF0_1* Clone()
	{
		return ((::Class_1_230C8FF718F2AFF0_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_1_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_1_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_1_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_230C8FF718F2AFF0_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_230C8FF718F2AFF0_1*))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_230C8FF718F2AFF0_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_230C8FF718F2AFF0_1*))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
