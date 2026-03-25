#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A0360CE19DA90CEC_19_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B195C0)
#define CLASS_1_A0360CE19DA90CEC_19_CLONE_OFFSET UNITYSDK_OFFSET(0x17B19340)
#define CLASS_1_A0360CE19DA90CEC_19_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B19470)
#define CLASS_1_A0360CE19DA90CEC_19_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B193D0)
#define CLASS_1_A0360CE19DA90CEC_19_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B194D0)
#define CLASS_1_A0360CE19DA90CEC_19_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B19620)
#define CLASS_1_A0360CE19DA90CEC_19_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B195F0)
#define CLASS_1_A0360CE19DA90CEC_19_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17B193C0)
#define CLASS_1_A0360CE19DA90CEC_19_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17B193B0)
#define CLASS_1_A0360CE19DA90CEC_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B192F0)
#define CLASS_1_A0360CE19DA90CEC_19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B19500)
#define CLASS_1_A0360CE19DA90CEC_19_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B19560)
#define CLASS_1_A0360CE19DA90CEC_19__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B19310)
#define CLASS_1_A0360CE19DA90CEC_19__CTOR_OFFSET UNITYSDK_OFFSET(0x17B19300)

inline static constexpr unsigned int Class_1_A0360CE19DA90CEC_19_TypeDefinitionIndex = 26230;

class Class_1_A0360CE19DA90CEC_19 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_19__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A0360CE19DA90CEC_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_19*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_19__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A0360CE19DA90CEC_19* Clone()
	{
		return ((::Class_1_A0360CE19DA90CEC_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_19_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_19_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_19_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_19_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A0360CE19DA90CEC_19* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_19*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_19_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_19_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_19_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_19_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_19_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A0360CE19DA90CEC_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_19*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_19_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_19_MERGEFROM_1_OFFSET))(this, a1);
	}
};
