#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35379441886C7D20;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_29898769088F4021_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1804C0B0)
#define CLASS_1_29898769088F4021_CLONE_OFFSET UNITYSDK_OFFSET(0x1804BB40)
#define CLASS_1_29898769088F4021_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1804BDD0)
#define CLASS_1_29898769088F4021_EQUALS_OFFSET UNITYSDK_OFFSET(0x1804BCC0)
#define CLASS_1_29898769088F4021_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1804BEB0)
#define CLASS_1_29898769088F4021_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1804C3F0)
#define CLASS_1_29898769088F4021_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1804C2D0)
#define CLASS_1_29898769088F4021_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1804BC00)
#define CLASS_1_29898769088F4021_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x1804BC10)
#define CLASS_1_29898769088F4021_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1804BCA0)
#define CLASS_1_29898769088F4021_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1804BC90)
#define CLASS_1_29898769088F4021_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1804BCB0)
#define CLASS_1_29898769088F4021_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1804BC80)
#define CLASS_1_29898769088F4021_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1804BA80)
#define CLASS_1_29898769088F4021_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1804BF90)
#define CLASS_1_29898769088F4021_WRITETO_OFFSET UNITYSDK_OFFSET(0x1804BFF0)
#define CLASS_1_29898769088F4021__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1804BAA0)
#define CLASS_1_29898769088F4021__CTOR_OFFSET UNITYSDK_OFFSET(0x1804BA90)

inline static constexpr unsigned int Class_1_29898769088F4021_TypeDefinitionIndex = 25255;

class Class_1_29898769088F4021 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	::System::String* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_35379441886C7D20* Field_1_6; // 0x20
	::System::UInt64 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_29898769088F4021* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_29898769088F4021*))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_29898769088F4021* Clone()
	{
		return ((::Class_1_29898769088F4021*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Class_1_35379441886C7D20* Method_1_24748FC20F375725()
	{
		return ((::Class_1_35379441886C7D20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_35379441886C7D20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35379441886C7D20*))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_29898769088F4021* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_29898769088F4021*))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_29898769088F4021* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_29898769088F4021*))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_29898769088F4021_MERGEFROM_1_OFFSET))(this, a1);
	}
};
