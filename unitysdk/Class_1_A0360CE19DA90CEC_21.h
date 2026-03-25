#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A0360CE19DA90CEC_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181FE8F0)
#define CLASS_1_A0360CE19DA90CEC_21_CLONE_OFFSET UNITYSDK_OFFSET(0x181FE670)
#define CLASS_1_A0360CE19DA90CEC_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181FE7A0)
#define CLASS_1_A0360CE19DA90CEC_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x181FE700)
#define CLASS_1_A0360CE19DA90CEC_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181FE800)
#define CLASS_1_A0360CE19DA90CEC_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181FE950)
#define CLASS_1_A0360CE19DA90CEC_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181FE920)
#define CLASS_1_A0360CE19DA90CEC_21_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x181FE6F0)
#define CLASS_1_A0360CE19DA90CEC_21_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x181FE6E0)
#define CLASS_1_A0360CE19DA90CEC_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181FE620)
#define CLASS_1_A0360CE19DA90CEC_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181FE830)
#define CLASS_1_A0360CE19DA90CEC_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x181FE890)
#define CLASS_1_A0360CE19DA90CEC_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181FE640)
#define CLASS_1_A0360CE19DA90CEC_21__CTOR_OFFSET UNITYSDK_OFFSET(0x181FE630)

inline static constexpr unsigned int Class_1_A0360CE19DA90CEC_21_TypeDefinitionIndex = 26812;

class Class_1_A0360CE19DA90CEC_21 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A0360CE19DA90CEC_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_21*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_21__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A0360CE19DA90CEC_21* Clone()
	{
		return ((::Class_1_A0360CE19DA90CEC_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_21_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_21_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_21_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A0360CE19DA90CEC_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_21*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A0360CE19DA90CEC_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_21*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
