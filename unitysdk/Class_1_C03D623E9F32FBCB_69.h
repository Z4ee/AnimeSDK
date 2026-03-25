#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_50;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_69_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C943B0)
#define CLASS_1_C03D623E9F32FBCB_69_CLONE_OFFSET UNITYSDK_OFFSET(0x17C94040)
#define CLASS_1_C03D623E9F32FBCB_69_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C94200)
#define CLASS_1_C03D623E9F32FBCB_69_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C94130)
#define CLASS_1_C03D623E9F32FBCB_69_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C942A0)
#define CLASS_1_C03D623E9F32FBCB_69_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C94520)
#define CLASS_1_C03D623E9F32FBCB_69_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C94410)
#define CLASS_1_C03D623E9F32FBCB_69_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17C94110)
#define CLASS_1_C03D623E9F32FBCB_69_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17C94120)
#define CLASS_1_C03D623E9F32FBCB_69_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C93F90)
#define CLASS_1_C03D623E9F32FBCB_69_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C942F0)
#define CLASS_1_C03D623E9F32FBCB_69_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C94350)
#define CLASS_1_C03D623E9F32FBCB_69__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C93FB0)
#define CLASS_1_C03D623E9F32FBCB_69__CTOR_OFFSET UNITYSDK_OFFSET(0x17C93FA0)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_69_TypeDefinitionIndex = 26242;

class Class_1_C03D623E9F32FBCB_69 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::Class_1_99BD961747420BEB_50* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_69__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_69*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_69__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_69_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_69* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_69*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_69_CLONE_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_50* Method_1_24748FC20F375725()
	{
		return ((::Class_1_99BD961747420BEB_50*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_69_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_99BD961747420BEB_50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_50*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_69_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_69_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_69* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_69*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_69_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_69_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_69_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_69_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_69_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_69*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_69_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_69_MERGEFROM_1_OFFSET))(this, a1);
	}
};
