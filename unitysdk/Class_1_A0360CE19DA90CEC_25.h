#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A0360CE19DA90CEC_25_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180D4F10)
#define CLASS_1_A0360CE19DA90CEC_25_CLONE_OFFSET UNITYSDK_OFFSET(0x180D4C80)
#define CLASS_1_A0360CE19DA90CEC_25_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180D4D90)
#define CLASS_1_A0360CE19DA90CEC_25_EQUALS_OFFSET UNITYSDK_OFFSET(0x180D4D10)
#define CLASS_1_A0360CE19DA90CEC_25_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180D4E00)
#define CLASS_1_A0360CE19DA90CEC_25_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180D4F80)
#define CLASS_1_A0360CE19DA90CEC_25_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180D4F40)
#define CLASS_1_A0360CE19DA90CEC_25_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x180D4D00)
#define CLASS_1_A0360CE19DA90CEC_25_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x180D4CE0)
#define CLASS_1_A0360CE19DA90CEC_25_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x180D4CF0)
#define CLASS_1_A0360CE19DA90CEC_25_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x180D4CD0)
#define CLASS_1_A0360CE19DA90CEC_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180D4C20)
#define CLASS_1_A0360CE19DA90CEC_25_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180D4E30)
#define CLASS_1_A0360CE19DA90CEC_25_WRITETO_OFFSET UNITYSDK_OFFSET(0x180D4E90)
#define CLASS_1_A0360CE19DA90CEC_25__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180D4C40)
#define CLASS_1_A0360CE19DA90CEC_25__CTOR_OFFSET UNITYSDK_OFFSET(0x180D4C30)

inline static constexpr unsigned int Class_1_A0360CE19DA90CEC_25_TypeDefinitionIndex = 27007;

class Class_1_A0360CE19DA90CEC_25 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_4; // 0x18
	::System::Boolean Field_1_2; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A0360CE19DA90CEC_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_25*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A0360CE19DA90CEC_25* Clone()
	{
		return ((::Class_1_A0360CE19DA90CEC_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A0360CE19DA90CEC_25* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_25*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A0360CE19DA90CEC_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_25*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_25_MERGEFROM_1_OFFSET))(this, a1);
	}
};
