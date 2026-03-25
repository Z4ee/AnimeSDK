#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_230C8FF718F2AFF0_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FC1AE0)
#define CLASS_1_230C8FF718F2AFF0_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17FC1860)
#define CLASS_1_230C8FF718F2AFF0_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FC1990)
#define CLASS_1_230C8FF718F2AFF0_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FC18F0)
#define CLASS_1_230C8FF718F2AFF0_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FC19E0)
#define CLASS_1_230C8FF718F2AFF0_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FC1C10)
#define CLASS_1_230C8FF718F2AFF0_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FC1BD0)
#define CLASS_1_230C8FF718F2AFF0_2_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17FC18E0)
#define CLASS_1_230C8FF718F2AFF0_2_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17FC18D0)
#define CLASS_1_230C8FF718F2AFF0_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FC1810)
#define CLASS_1_230C8FF718F2AFF0_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FC1A20)
#define CLASS_1_230C8FF718F2AFF0_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FC1A80)
#define CLASS_1_230C8FF718F2AFF0_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FC1830)
#define CLASS_1_230C8FF718F2AFF0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17FC1820)

inline static constexpr unsigned int Class_1_230C8FF718F2AFF0_2_TypeDefinitionIndex = 25654;

class Class_1_230C8FF718F2AFF0_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt64 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_230C8FF718F2AFF0_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_230C8FF718F2AFF0_2*))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_230C8FF718F2AFF0_2* Clone()
	{
		return ((::Class_1_230C8FF718F2AFF0_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_2_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_2_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_2_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_230C8FF718F2AFF0_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_230C8FF718F2AFF0_2*))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_230C8FF718F2AFF0_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_230C8FF718F2AFF0_2*))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_230C8FF718F2AFF0_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
