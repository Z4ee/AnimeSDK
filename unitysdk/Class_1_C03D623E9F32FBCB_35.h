#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF746D82C24EA645;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_35_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1816F9B0)
#define CLASS_1_C03D623E9F32FBCB_35_CLONE_OFFSET UNITYSDK_OFFSET(0x1816F6B0)
#define CLASS_1_C03D623E9F32FBCB_35_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1816F800)
#define CLASS_1_C03D623E9F32FBCB_35_EQUALS_OFFSET UNITYSDK_OFFSET(0x1816F750)
#define CLASS_1_C03D623E9F32FBCB_35_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1816F8A0)
#define CLASS_1_C03D623E9F32FBCB_35_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1816FB20)
#define CLASS_1_C03D623E9F32FBCB_35_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1816FA10)
#define CLASS_1_C03D623E9F32FBCB_35_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1816F730)
#define CLASS_1_C03D623E9F32FBCB_35_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1816F740)
#define CLASS_1_C03D623E9F32FBCB_35_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1816F620)
#define CLASS_1_C03D623E9F32FBCB_35_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1816F8F0)
#define CLASS_1_C03D623E9F32FBCB_35_WRITETO_OFFSET UNITYSDK_OFFSET(0x1816F950)
#define CLASS_1_C03D623E9F32FBCB_35__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1816F640)
#define CLASS_1_C03D623E9F32FBCB_35__CTOR_OFFSET UNITYSDK_OFFSET(0x1816F630)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_35_TypeDefinitionIndex = 24968;

class Class_1_C03D623E9F32FBCB_35 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_FF746D82C24EA645* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_35__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_35*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_35__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_35_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_35* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_35*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_35_CLONE_OFFSET))(this);
	}

	::Class_1_FF746D82C24EA645* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FF746D82C24EA645*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_35_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FF746D82C24EA645* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF746D82C24EA645*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_35_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_35_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_35* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_35*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_35_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_35_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_35_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_35_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_35_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_35*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_35_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_35_MERGEFROM_1_OFFSET))(this, a1);
	}
};
