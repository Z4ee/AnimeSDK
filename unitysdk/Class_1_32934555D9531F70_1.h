#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_69F06BA11FF28429_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_32934555D9531F70_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18203B80)
#define CLASS_1_32934555D9531F70_1_CLONE_OFFSET UNITYSDK_OFFSET(0x18203830)
#define CLASS_1_32934555D9531F70_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182039B0)
#define CLASS_1_32934555D9531F70_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x182038F0)
#define CLASS_1_32934555D9531F70_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18203A60)
#define CLASS_1_32934555D9531F70_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18203CE0)
#define CLASS_1_32934555D9531F70_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18203BE0)
#define CLASS_1_32934555D9531F70_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x182038D0)
#define CLASS_1_32934555D9531F70_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x182038E0)
#define CLASS_1_32934555D9531F70_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x182038C0)
#define CLASS_1_32934555D9531F70_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x182038B0)
#define CLASS_1_32934555D9531F70_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182037A0)
#define CLASS_1_32934555D9531F70_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18203AA0)
#define CLASS_1_32934555D9531F70_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x18203B00)
#define CLASS_1_32934555D9531F70_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182037C0)
#define CLASS_1_32934555D9531F70_1__CTOR_OFFSET UNITYSDK_OFFSET(0x182037B0)

inline static constexpr unsigned int Class_1_32934555D9531F70_1_TypeDefinitionIndex = 26522;

class Class_1_32934555D9531F70_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Class_1_69F06BA11FF28429_2* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_32934555D9531F70_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32934555D9531F70_1*))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_32934555D9531F70_1* Clone()
	{
		return ((::Class_1_32934555D9531F70_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_69F06BA11FF28429_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_69F06BA11FF28429_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_69F06BA11FF28429_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_69F06BA11FF28429_2*))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_32934555D9531F70_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_32934555D9531F70_1*))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_32934555D9531F70_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32934555D9531F70_1*))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_32934555D9531F70_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
