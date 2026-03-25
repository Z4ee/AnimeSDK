#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A0360CE19DA90CEC_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AC9880)
#define CLASS_1_A0360CE19DA90CEC_13_CLONE_OFFSET UNITYSDK_OFFSET(0x17AC9600)
#define CLASS_1_A0360CE19DA90CEC_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AC9730)
#define CLASS_1_A0360CE19DA90CEC_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AC9690)
#define CLASS_1_A0360CE19DA90CEC_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AC9790)
#define CLASS_1_A0360CE19DA90CEC_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AC98E0)
#define CLASS_1_A0360CE19DA90CEC_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AC98B0)
#define CLASS_1_A0360CE19DA90CEC_13_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17AC9680)
#define CLASS_1_A0360CE19DA90CEC_13_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17AC9670)
#define CLASS_1_A0360CE19DA90CEC_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AC95B0)
#define CLASS_1_A0360CE19DA90CEC_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AC97C0)
#define CLASS_1_A0360CE19DA90CEC_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AC9820)
#define CLASS_1_A0360CE19DA90CEC_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AC95D0)
#define CLASS_1_A0360CE19DA90CEC_13__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC95C0)

inline static constexpr unsigned int Class_1_A0360CE19DA90CEC_13_TypeDefinitionIndex = 24856;

class Class_1_A0360CE19DA90CEC_13 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A0360CE19DA90CEC_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_13*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_13__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A0360CE19DA90CEC_13* Clone()
	{
		return ((::Class_1_A0360CE19DA90CEC_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_13_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_13_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_13_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A0360CE19DA90CEC_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_13*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A0360CE19DA90CEC_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_13*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
