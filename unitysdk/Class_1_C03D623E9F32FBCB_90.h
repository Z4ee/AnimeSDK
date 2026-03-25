#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5CF1DDAFE12F0E87_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C03D623E9F32FBCB_90_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1826E3D0)
#define CLASS_1_C03D623E9F32FBCB_90_CLONE_OFFSET UNITYSDK_OFFSET(0x1826E0D0)
#define CLASS_1_C03D623E9F32FBCB_90_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1826E220)
#define CLASS_1_C03D623E9F32FBCB_90_EQUALS_OFFSET UNITYSDK_OFFSET(0x1826E170)
#define CLASS_1_C03D623E9F32FBCB_90_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1826E2C0)
#define CLASS_1_C03D623E9F32FBCB_90_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1826E540)
#define CLASS_1_C03D623E9F32FBCB_90_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1826E430)
#define CLASS_1_C03D623E9F32FBCB_90_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1826E150)
#define CLASS_1_C03D623E9F32FBCB_90_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1826E160)
#define CLASS_1_C03D623E9F32FBCB_90_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1826E040)
#define CLASS_1_C03D623E9F32FBCB_90_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1826E310)
#define CLASS_1_C03D623E9F32FBCB_90_WRITETO_OFFSET UNITYSDK_OFFSET(0x1826E370)
#define CLASS_1_C03D623E9F32FBCB_90__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1826E060)
#define CLASS_1_C03D623E9F32FBCB_90__CTOR_OFFSET UNITYSDK_OFFSET(0x1826E050)

inline static constexpr unsigned int Class_1_C03D623E9F32FBCB_90_TypeDefinitionIndex = 26571;

class Class_1_C03D623E9F32FBCB_90 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Class_1_5CF1DDAFE12F0E87_3* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_90__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C03D623E9F32FBCB_90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_90*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_90__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_90_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_90* Clone()
	{
		return ((::Class_1_C03D623E9F32FBCB_90*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_90_CLONE_OFFSET))(this);
	}

	::Class_1_5CF1DDAFE12F0E87_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5CF1DDAFE12F0E87_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_90_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5CF1DDAFE12F0E87_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CF1DDAFE12F0E87_3*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_90_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_90_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C03D623E9F32FBCB_90* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_90*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_90_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_90_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_90_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_90_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_90_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C03D623E9F32FBCB_90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_90*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_90_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C03D623E9F32FBCB_90_MERGEFROM_1_OFFSET))(this, a1);
	}
};
