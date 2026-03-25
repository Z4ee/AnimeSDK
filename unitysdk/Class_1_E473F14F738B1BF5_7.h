#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D8EAED2BCF3F4D39_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E473F14F738B1BF5_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FDAE10)
#define CLASS_1_E473F14F738B1BF5_7_CLONE_OFFSET UNITYSDK_OFFSET(0x17FDA8C0)
#define CLASS_1_E473F14F738B1BF5_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FDAA80)
#define CLASS_1_E473F14F738B1BF5_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FDA9A0)
#define CLASS_1_E473F14F738B1BF5_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FDAB30)
#define CLASS_1_E473F14F738B1BF5_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FDB0E0)
#define CLASS_1_E473F14F738B1BF5_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FDAEE0)
#define CLASS_1_E473F14F738B1BF5_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17FDA960)
#define CLASS_1_E473F14F738B1BF5_7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17FDA980)
#define CLASS_1_E473F14F738B1BF5_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17FDA970)
#define CLASS_1_E473F14F738B1BF5_7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17FDA990)
#define CLASS_1_E473F14F738B1BF5_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FDA800)
#define CLASS_1_E473F14F738B1BF5_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FDAD30)
#define CLASS_1_E473F14F738B1BF5_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FDAD90)
#define CLASS_1_E473F14F738B1BF5_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FDA820)
#define CLASS_1_E473F14F738B1BF5_7__CTOR_OFFSET UNITYSDK_OFFSET(0x17FDA810)

inline static constexpr unsigned int Class_1_E473F14F738B1BF5_7_TypeDefinitionIndex = 24004;

class Class_1_E473F14F738B1BF5_7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	::Class_1_D8EAED2BCF3F4D39_4* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E473F14F738B1BF5_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E473F14F738B1BF5_7*))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E473F14F738B1BF5_7* Clone()
	{
		return ((::Class_1_E473F14F738B1BF5_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_D8EAED2BCF3F4D39_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D8EAED2BCF3F4D39_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D8EAED2BCF3F4D39_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_4*))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E473F14F738B1BF5_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E473F14F738B1BF5_7*))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E473F14F738B1BF5_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E473F14F738B1BF5_7*))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
