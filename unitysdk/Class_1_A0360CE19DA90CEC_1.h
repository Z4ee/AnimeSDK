#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A0360CE19DA90CEC_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181A70D0)
#define CLASS_1_A0360CE19DA90CEC_1_CLONE_OFFSET UNITYSDK_OFFSET(0x181A6E50)
#define CLASS_1_A0360CE19DA90CEC_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181A6F80)
#define CLASS_1_A0360CE19DA90CEC_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x181A6EE0)
#define CLASS_1_A0360CE19DA90CEC_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181A6FE0)
#define CLASS_1_A0360CE19DA90CEC_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181A7130)
#define CLASS_1_A0360CE19DA90CEC_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181A7100)
#define CLASS_1_A0360CE19DA90CEC_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x181A6ED0)
#define CLASS_1_A0360CE19DA90CEC_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x181A6EC0)
#define CLASS_1_A0360CE19DA90CEC_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181A6E00)
#define CLASS_1_A0360CE19DA90CEC_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181A7010)
#define CLASS_1_A0360CE19DA90CEC_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x181A7070)
#define CLASS_1_A0360CE19DA90CEC_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181A6E20)
#define CLASS_1_A0360CE19DA90CEC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x181A6E10)

inline static constexpr unsigned int Class_1_A0360CE19DA90CEC_1_TypeDefinitionIndex = 23358;

class Class_1_A0360CE19DA90CEC_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A0360CE19DA90CEC_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_1*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A0360CE19DA90CEC_1* Clone()
	{
		return ((::Class_1_A0360CE19DA90CEC_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_1_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A0360CE19DA90CEC_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_1*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A0360CE19DA90CEC_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_1*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
