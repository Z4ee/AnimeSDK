#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E93A4BF277C226A6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_59_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180D9310)
#define CLASS_1_C03D623E9F32FBCB_59_CLONE_OFFSET UNITYSDK_OFFSET(0x180D8FF0)
#define CLASS_1_C03D623E9F32FBCB_59_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180D9160)
#define CLASS_1_C03D623E9F32FBCB_59_EQUALS_OFFSET UNITYSDK_OFFSET(0x180D90B0)
#define CLASS_1_C03D623E9F32FBCB_59_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180D9200)
#define CLASS_1_C03D623E9F32FBCB_59_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180D94A0)
#define CLASS_1_C03D623E9F32FBCB_59_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180D9370)
#define CLASS_1_C03D623E9F32FBCB_59_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x180D9090)
#define CLASS_1_C03D623E9F32FBCB_59_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x180D90A0)
#define CLASS_1_C03D623E9F32FBCB_59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180D8F40)
#define CLASS_1_C03D623E9F32FBCB_59_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180D9250)
#define CLASS_1_C03D623E9F32FBCB_59_WRITETO_OFFSET UNITYSDK_OFFSET(0x180D92B0)
#define CLASS_1_C03D623E9F32FBCB_59__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180D8F60)
#define CLASS_1_C03D623E9F32FBCB_59__CTOR_OFFSET UNITYSDK_OFFSET(0x180D8F50)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_59_TypeDefinitionIndex = 25993;

class Class_1_C03D623E9F32FBCB_59 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_E93A4BF277C226A6* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_59__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_59*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_59__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_59_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_59* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_59*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_59_CLONE_OFFSET))(this);
	}

	::Class_1_E93A4BF277C226A6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E93A4BF277C226A6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_59_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E93A4BF277C226A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E93A4BF277C226A6*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_59_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_59_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_59* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_59*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_59_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_59_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_59_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_59_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_59_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_59*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_59_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_59_MERGEFROM_1_OFFSET))(this, a1);
	}
};
