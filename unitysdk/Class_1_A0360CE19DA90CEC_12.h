#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A0360CE19DA90CEC_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18166C30)
#define CLASS_1_A0360CE19DA90CEC_12_CLONE_OFFSET UNITYSDK_OFFSET(0x181669B0)
#define CLASS_1_A0360CE19DA90CEC_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18166AE0)
#define CLASS_1_A0360CE19DA90CEC_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x18166A40)
#define CLASS_1_A0360CE19DA90CEC_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18166B40)
#define CLASS_1_A0360CE19DA90CEC_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18166C90)
#define CLASS_1_A0360CE19DA90CEC_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18166C60)
#define CLASS_1_A0360CE19DA90CEC_12_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18166A30)
#define CLASS_1_A0360CE19DA90CEC_12_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18166A20)
#define CLASS_1_A0360CE19DA90CEC_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18166960)
#define CLASS_1_A0360CE19DA90CEC_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18166B70)
#define CLASS_1_A0360CE19DA90CEC_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x18166BD0)
#define CLASS_1_A0360CE19DA90CEC_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18166980)
#define CLASS_1_A0360CE19DA90CEC_12__CTOR_OFFSET UNITYSDK_OFFSET(0x18166970)

inline static constexpr unsigned int Class_1_A0360CE19DA90CEC_12_TypeDefinitionIndex = 24669;

class Class_1_A0360CE19DA90CEC_12 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A0360CE19DA90CEC_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_12*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_12__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A0360CE19DA90CEC_12* Clone()
	{
		return ((::Class_1_A0360CE19DA90CEC_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_12_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_12_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_12_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A0360CE19DA90CEC_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_12*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A0360CE19DA90CEC_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_12*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
