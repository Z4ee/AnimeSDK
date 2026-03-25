#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A0360CE19DA90CEC_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C50F20)
#define CLASS_1_A0360CE19DA90CEC_9_CLONE_OFFSET UNITYSDK_OFFSET(0x17C50A90)
#define CLASS_1_A0360CE19DA90CEC_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C50CB0)
#define CLASS_1_A0360CE19DA90CEC_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C50BB0)
#define CLASS_1_A0360CE19DA90CEC_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C50D70)
#define CLASS_1_A0360CE19DA90CEC_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C50FF0)
#define CLASS_1_A0360CE19DA90CEC_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C50F90)
#define CLASS_1_A0360CE19DA90CEC_9_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17C50B40)
#define CLASS_1_A0360CE19DA90CEC_9_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x17C50B60)
#define CLASS_1_A0360CE19DA90CEC_9_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x17C50B80)
#define CLASS_1_A0360CE19DA90CEC_9_METHOD_1_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0x17C50BA0)
#define CLASS_1_A0360CE19DA90CEC_9_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17C50B20)
#define CLASS_1_A0360CE19DA90CEC_9_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17C50B30)
#define CLASS_1_A0360CE19DA90CEC_9_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x17C50B50)
#define CLASS_1_A0360CE19DA90CEC_9_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x17C50B70)
#define CLASS_1_A0360CE19DA90CEC_9_METHOD_1_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x17C50B90)
#define CLASS_1_A0360CE19DA90CEC_9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17C50B10)
#define CLASS_1_A0360CE19DA90CEC_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C50A30)
#define CLASS_1_A0360CE19DA90CEC_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C50DC0)
#define CLASS_1_A0360CE19DA90CEC_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C50E20)
#define CLASS_1_A0360CE19DA90CEC_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C50A50)
#define CLASS_1_A0360CE19DA90CEC_9__CTOR_OFFSET UNITYSDK_OFFSET(0x17C50A40)

inline static constexpr unsigned int Class_1_A0360CE19DA90CEC_9_TypeDefinitionIndex = 24595;

class Class_1_A0360CE19DA90CEC_9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_10; // 0x18
	::System::Boolean Field_1_4; // 0x19
	::System::Boolean Field_1_8; // 0x1A
	::System::Boolean Field_1_6; // 0x1B
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A0360CE19DA90CEC_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_9*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A0360CE19DA90CEC_9* Clone()
	{
		return ((::Class_1_A0360CE19DA90CEC_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_METHOD_1_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_METHOD_1_C74E50CBD41F0264_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A0360CE19DA90CEC_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_9*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A0360CE19DA90CEC_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_9*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A0360CE19DA90CEC_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
