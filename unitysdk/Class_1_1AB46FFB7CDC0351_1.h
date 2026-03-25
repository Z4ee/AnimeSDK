#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D5D53619B020DDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1AB46FFB7CDC0351_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D90B00)
#define CLASS_1_1AB46FFB7CDC0351_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17D90550)
#define CLASS_1_1AB46FFB7CDC0351_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D90830)
#define CLASS_1_1AB46FFB7CDC0351_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D906E0)
#define CLASS_1_1AB46FFB7CDC0351_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D90940)
#define CLASS_1_1AB46FFB7CDC0351_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D90D20)
#define CLASS_1_1AB46FFB7CDC0351_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D90C20)
#define CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D90640)
#define CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17D906A0)
#define CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17D90660)
#define CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D90650)
#define CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17D906B0)
#define CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17D90670)
#define CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17D906D0)
#define CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17D90690)
#define CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17D906C0)
#define CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17D90680)
#define CLASS_1_1AB46FFB7CDC0351_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D90480)
#define CLASS_1_1AB46FFB7CDC0351_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D909A0)
#define CLASS_1_1AB46FFB7CDC0351_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D90A00)
#define CLASS_1_1AB46FFB7CDC0351_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D904A0)
#define CLASS_1_1AB46FFB7CDC0351_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17D90490)

inline static constexpr unsigned int Class_1_1AB46FFB7CDC0351_1_TypeDefinitionIndex = 26481;

class Class_1_1AB46FFB7CDC0351_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xC; // 0x0
	::Class_1_4D5D53619B020DDD* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_4D5D53619B020DDD* Field_1_4; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::Boolean Field_1_10; // 0x2C
	::System::Boolean Field_1_6; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1AB46FFB7CDC0351_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1AB46FFB7CDC0351_1*))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1AB46FFB7CDC0351_1* Clone()
	{
		return ((::Class_1_1AB46FFB7CDC0351_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_4D5D53619B020DDD* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4D5D53619B020DDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4D5D53619B020DDD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_4D5D53619B020DDD* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_4D5D53619B020DDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_4D5D53619B020DDD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1AB46FFB7CDC0351_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1AB46FFB7CDC0351_1*))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1AB46FFB7CDC0351_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1AB46FFB7CDC0351_1*))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1AB46FFB7CDC0351_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
