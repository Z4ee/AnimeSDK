#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D5D53619B020DDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_102_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B49BA0)
#define CLASS_1_C03D623E9F32FBCB_102_CLONE_OFFSET UNITYSDK_OFFSET(0x17B498A0)
#define CLASS_1_C03D623E9F32FBCB_102_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B499F0)
#define CLASS_1_C03D623E9F32FBCB_102_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B49940)
#define CLASS_1_C03D623E9F32FBCB_102_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B49A90)
#define CLASS_1_C03D623E9F32FBCB_102_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B49C90)
#define CLASS_1_C03D623E9F32FBCB_102_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B49C00)
#define CLASS_1_C03D623E9F32FBCB_102_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17B49920)
#define CLASS_1_C03D623E9F32FBCB_102_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17B49930)
#define CLASS_1_C03D623E9F32FBCB_102_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B49810)
#define CLASS_1_C03D623E9F32FBCB_102_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B49AE0)
#define CLASS_1_C03D623E9F32FBCB_102_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B49B40)
#define CLASS_1_C03D623E9F32FBCB_102__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B49830)
#define CLASS_1_C03D623E9F32FBCB_102__CTOR_OFFSET UNITYSDK_OFFSET(0x17B49820)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_102_TypeDefinitionIndex = 26960;

class Class_1_C03D623E9F32FBCB_102 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_4D5D53619B020DDD* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_102__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_102*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_102__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_102_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_102* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_102*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_102_CLONE_OFFSET))(this);
	}

	::Class_1_4D5D53619B020DDD* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4D5D53619B020DDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_102_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4D5D53619B020DDD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_102_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_102_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_102* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_102*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_102_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_102_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_102_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_102_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_102_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_102*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_102_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_102_MERGEFROM_1_OFFSET))(this, a1);
	}
};
