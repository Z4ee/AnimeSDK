#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02098A44CBBFEEE1_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_31_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1802EAF0)
#define CLASS_1_C03D623E9F32FBCB_31_CLONE_OFFSET UNITYSDK_OFFSET(0x1802E7D0)
#define CLASS_1_C03D623E9F32FBCB_31_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1802E940)
#define CLASS_1_C03D623E9F32FBCB_31_EQUALS_OFFSET UNITYSDK_OFFSET(0x1802E890)
#define CLASS_1_C03D623E9F32FBCB_31_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1802E9E0)
#define CLASS_1_C03D623E9F32FBCB_31_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1802EC70)
#define CLASS_1_C03D623E9F32FBCB_31_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1802EB50)
#define CLASS_1_C03D623E9F32FBCB_31_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1802E870)
#define CLASS_1_C03D623E9F32FBCB_31_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1802E880)
#define CLASS_1_C03D623E9F32FBCB_31_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1802E720)
#define CLASS_1_C03D623E9F32FBCB_31_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1802EA30)
#define CLASS_1_C03D623E9F32FBCB_31_WRITETO_OFFSET UNITYSDK_OFFSET(0x1802EA90)
#define CLASS_1_C03D623E9F32FBCB_31__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1802E740)
#define CLASS_1_C03D623E9F32FBCB_31__CTOR_OFFSET UNITYSDK_OFFSET(0x1802E730)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_31_TypeDefinitionIndex = 24528;

class Class_1_C03D623E9F32FBCB_31 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_02098A44CBBFEEE1_1* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_31__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_31*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_31__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_31_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_31* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_31_CLONE_OFFSET))(this);
	}

	::Class_1_02098A44CBBFEEE1_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_02098A44CBBFEEE1_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_31_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_02098A44CBBFEEE1_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02098A44CBBFEEE1_1*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_31_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_31_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_31* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_31*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_31_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_31_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_31_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_31_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_31_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_31*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_31_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_31_MERGEFROM_1_OFFSET))(this, a1);
	}
};
