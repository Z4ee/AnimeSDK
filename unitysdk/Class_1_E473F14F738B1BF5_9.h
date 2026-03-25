#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2135BD0826D34A80;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E473F14F738B1BF5_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E92A30)
#define CLASS_1_E473F14F738B1BF5_9_CLONE_OFFSET UNITYSDK_OFFSET(0x17E926F0)
#define CLASS_1_E473F14F738B1BF5_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E92860)
#define CLASS_1_E473F14F738B1BF5_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E927B0)
#define CLASS_1_E473F14F738B1BF5_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E92910)
#define CLASS_1_E473F14F738B1BF5_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E92BD0)
#define CLASS_1_E473F14F738B1BF5_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E92B00)
#define CLASS_1_E473F14F738B1BF5_9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E92770)
#define CLASS_1_E473F14F738B1BF5_9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E92790)
#define CLASS_1_E473F14F738B1BF5_9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E92780)
#define CLASS_1_E473F14F738B1BF5_9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E927A0)
#define CLASS_1_E473F14F738B1BF5_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E92660)
#define CLASS_1_E473F14F738B1BF5_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E92950)
#define CLASS_1_E473F14F738B1BF5_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E929B0)
#define CLASS_1_E473F14F738B1BF5_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E92680)
#define CLASS_1_E473F14F738B1BF5_9__CTOR_OFFSET UNITYSDK_OFFSET(0x17E92670)

inline static constexpr unsigned int Class_1_E473F14F738B1BF5_9_TypeDefinitionIndex = 23978;

class Class_1_E473F14F738B1BF5_9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_2135BD0826D34A80* Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E473F14F738B1BF5_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E473F14F738B1BF5_9*))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E473F14F738B1BF5_9* Clone()
	{
		return ((::Class_1_E473F14F738B1BF5_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_2135BD0826D34A80* Method_1_24748FC20F375725()
	{
		return ((::Class_1_2135BD0826D34A80*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_2135BD0826D34A80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2135BD0826D34A80*))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E473F14F738B1BF5_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E473F14F738B1BF5_9*))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E473F14F738B1BF5_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E473F14F738B1BF5_9*))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E473F14F738B1BF5_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
