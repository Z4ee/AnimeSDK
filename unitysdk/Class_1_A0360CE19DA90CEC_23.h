#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A0360CE19DA90CEC_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181880D0)
#define CLASS_1_A0360CE19DA90CEC_23_CLONE_OFFSET UNITYSDK_OFFSET(0x18187EA0)
#define CLASS_1_A0360CE19DA90CEC_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18187F80)
#define CLASS_1_A0360CE19DA90CEC_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x18187F10)
#define CLASS_1_A0360CE19DA90CEC_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18187FE0)
#define CLASS_1_A0360CE19DA90CEC_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18188130)
#define CLASS_1_A0360CE19DA90CEC_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18188100)
#define CLASS_1_A0360CE19DA90CEC_23_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18187F00)
#define CLASS_1_A0360CE19DA90CEC_23_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18187EF0)
#define CLASS_1_A0360CE19DA90CEC_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18187E50)
#define CLASS_1_A0360CE19DA90CEC_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18188010)
#define CLASS_1_A0360CE19DA90CEC_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x18188070)
#define CLASS_1_A0360CE19DA90CEC_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18187E70)
#define CLASS_1_A0360CE19DA90CEC_23__CTOR_OFFSET UNITYSDK_OFFSET(0x18187E60)

inline static constexpr unsigned int Class_1_A0360CE19DA90CEC_23_TypeDefinitionIndex = 26857;

class Class_1_A0360CE19DA90CEC_23 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A0360CE19DA90CEC_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_23*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_23__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A0360CE19DA90CEC_23* Clone()
	{
		return ((::Class_1_A0360CE19DA90CEC_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_23_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_23_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_23_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A0360CE19DA90CEC_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_23*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A0360CE19DA90CEC_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_23*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
