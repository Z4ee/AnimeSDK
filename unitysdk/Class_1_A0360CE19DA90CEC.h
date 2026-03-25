#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A0360CE19DA90CEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DD8920)
#define CLASS_1_A0360CE19DA90CEC_CLONE_OFFSET UNITYSDK_OFFSET(0x17DD8620)
#define CLASS_1_A0360CE19DA90CEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DD87A0)
#define CLASS_1_A0360CE19DA90CEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DD86E0)
#define CLASS_1_A0360CE19DA90CEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DD8810)
#define CLASS_1_A0360CE19DA90CEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DD8990)
#define CLASS_1_A0360CE19DA90CEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DD8950)
#define CLASS_1_A0360CE19DA90CEC_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17DD86D0)
#define CLASS_1_A0360CE19DA90CEC_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17DD86B0)
#define CLASS_1_A0360CE19DA90CEC_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17DD86C0)
#define CLASS_1_A0360CE19DA90CEC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17DD86A0)
#define CLASS_1_A0360CE19DA90CEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DD85C0)
#define CLASS_1_A0360CE19DA90CEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DD8840)
#define CLASS_1_A0360CE19DA90CEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DD88A0)
#define CLASS_1_A0360CE19DA90CEC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DD85E0)
#define CLASS_1_A0360CE19DA90CEC__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD85D0)

inline static constexpr unsigned int Class_1_A0360CE19DA90CEC_TypeDefinitionIndex = 23352;

class Class_1_A0360CE19DA90CEC : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_4; // 0x18
	::System::Boolean Field_1_2; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A0360CE19DA90CEC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A0360CE19DA90CEC* Clone()
	{
		return ((::Class_1_A0360CE19DA90CEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A0360CE19DA90CEC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0360CE19DA90CEC*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A0360CE19DA90CEC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
