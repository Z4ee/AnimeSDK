#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_74;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F591FD2BDE985BAF_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182AF480)
#define CLASS_1_F591FD2BDE985BAF_6_CLONE_OFFSET UNITYSDK_OFFSET(0x182AF110)
#define CLASS_1_F591FD2BDE985BAF_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182AF2D0)
#define CLASS_1_F591FD2BDE985BAF_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x182AF200)
#define CLASS_1_F591FD2BDE985BAF_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182AF370)
#define CLASS_1_F591FD2BDE985BAF_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182AF5E0)
#define CLASS_1_F591FD2BDE985BAF_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182AF4E0)
#define CLASS_1_F591FD2BDE985BAF_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x182AF1E0)
#define CLASS_1_F591FD2BDE985BAF_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x182AF1F0)
#define CLASS_1_F591FD2BDE985BAF_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182AF060)
#define CLASS_1_F591FD2BDE985BAF_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182AF3C0)
#define CLASS_1_F591FD2BDE985BAF_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x182AF420)
#define CLASS_1_F591FD2BDE985BAF_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182AF080)
#define CLASS_1_F591FD2BDE985BAF_6__CTOR_OFFSET UNITYSDK_OFFSET(0x182AF070)

inline static constexpr unsigned int Class_1_F591FD2BDE985BAF_6_TypeDefinitionIndex = 26302;

class Class_1_F591FD2BDE985BAF_6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_6E708EAB438EC183_74* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F591FD2BDE985BAF_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F591FD2BDE985BAF_6*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_6__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F591FD2BDE985BAF_6* Clone()
	{
		return ((::Class_1_F591FD2BDE985BAF_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_6_CLONE_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_74* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6E708EAB438EC183_74*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6E708EAB438EC183_74* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_74*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F591FD2BDE985BAF_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F591FD2BDE985BAF_6*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F591FD2BDE985BAF_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F591FD2BDE985BAF_6*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
