#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A0360CE19DA90CEC_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C6CA20)
#define CLASS_1_A0360CE19DA90CEC_7_CLONE_OFFSET UNITYSDK_OFFSET(0x17C6C7A0)
#define CLASS_1_A0360CE19DA90CEC_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C6C8D0)
#define CLASS_1_A0360CE19DA90CEC_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C6C830)
#define CLASS_1_A0360CE19DA90CEC_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C6C930)
#define CLASS_1_A0360CE19DA90CEC_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C6CA80)
#define CLASS_1_A0360CE19DA90CEC_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C6CA50)
#define CLASS_1_A0360CE19DA90CEC_7_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17C6C820)
#define CLASS_1_A0360CE19DA90CEC_7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17C6C810)
#define CLASS_1_A0360CE19DA90CEC_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C6C750)
#define CLASS_1_A0360CE19DA90CEC_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C6C960)
#define CLASS_1_A0360CE19DA90CEC_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C6C9C0)
#define CLASS_1_A0360CE19DA90CEC_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C6C770)
#define CLASS_1_A0360CE19DA90CEC_7__CTOR_OFFSET UNITYSDK_OFFSET(0x17C6C760)

inline static constexpr unsigned int Class_1_A0360CE19DA90CEC_7_TypeDefinitionIndex = 24321;

class Class_1_A0360CE19DA90CEC_7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A0360CE19DA90CEC_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_7*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_7__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A0360CE19DA90CEC_7* Clone()
	{
		return ((::Class_1_A0360CE19DA90CEC_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_7_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_7_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A0360CE19DA90CEC_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_7*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A0360CE19DA90CEC_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_7*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
