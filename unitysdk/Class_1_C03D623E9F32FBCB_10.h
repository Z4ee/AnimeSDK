#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E85FDBE62E39A5EA_8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1823DAF0)
#define CLASS_1_C03D623E9F32FBCB_10_CLONE_OFFSET UNITYSDK_OFFSET(0x1823D7F0)
#define CLASS_1_C03D623E9F32FBCB_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1823D940)
#define CLASS_1_C03D623E9F32FBCB_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x1823D890)
#define CLASS_1_C03D623E9F32FBCB_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1823D9E0)
#define CLASS_1_C03D623E9F32FBCB_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1823DBE0)
#define CLASS_1_C03D623E9F32FBCB_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1823DB50)
#define CLASS_1_C03D623E9F32FBCB_10_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1823D870)
#define CLASS_1_C03D623E9F32FBCB_10_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1823D880)
#define CLASS_1_C03D623E9F32FBCB_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1823D760)
#define CLASS_1_C03D623E9F32FBCB_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1823DA30)
#define CLASS_1_C03D623E9F32FBCB_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x1823DA90)
#define CLASS_1_C03D623E9F32FBCB_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1823D780)
#define CLASS_1_C03D623E9F32FBCB_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1823D770)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_10_TypeDefinitionIndex = 26454;

class Class_1_C03D623E9F32FBCB_10 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_E85FDBE62E39A5EA_8* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_10*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_10__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_10* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_10_CLONE_OFFSET))(this);
	}

	::Class_1_E85FDBE62E39A5EA_8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E85FDBE62E39A5EA_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_10_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E85FDBE62E39A5EA_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_8*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_10_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_10*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_10*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
