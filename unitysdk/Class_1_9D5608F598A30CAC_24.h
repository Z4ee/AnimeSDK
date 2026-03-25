#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_18;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9D5608F598A30CAC_24_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E1C410)
#define CLASS_1_9D5608F598A30CAC_24_CLONE_OFFSET UNITYSDK_OFFSET(0x17E1C080)
#define CLASS_1_9D5608F598A30CAC_24_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E1C210)
#define CLASS_1_9D5608F598A30CAC_24_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E1C160)
#define CLASS_1_9D5608F598A30CAC_24_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E1C2C0)
#define CLASS_1_9D5608F598A30CAC_24_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E1C5B0)
#define CLASS_1_9D5608F598A30CAC_24_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E1C4E0)
#define CLASS_1_9D5608F598A30CAC_24_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E1C120)
#define CLASS_1_9D5608F598A30CAC_24_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E1C140)
#define CLASS_1_9D5608F598A30CAC_24_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E1C130)
#define CLASS_1_9D5608F598A30CAC_24_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E1C150)
#define CLASS_1_9D5608F598A30CAC_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E1BFD0)
#define CLASS_1_9D5608F598A30CAC_24_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E1C330)
#define CLASS_1_9D5608F598A30CAC_24_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E1C390)
#define CLASS_1_9D5608F598A30CAC_24__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E1BFF0)
#define CLASS_1_9D5608F598A30CAC_24__CTOR_OFFSET UNITYSDK_OFFSET(0x17E1BFE0)

inline static constexpr unsigned int Class_1_9D5608F598A30CAC_24_TypeDefinitionIndex = 25188;

class Class_1_9D5608F598A30CAC_24 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Class_1_EBB10EC01CCC4716_18* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9D5608F598A30CAC_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D5608F598A30CAC_24*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9D5608F598A30CAC_24* Clone()
	{
		return ((::Class_1_9D5608F598A30CAC_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_EBB10EC01CCC4716_18* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_18*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9D5608F598A30CAC_24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9D5608F598A30CAC_24*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9D5608F598A30CAC_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D5608F598A30CAC_24*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_24_MERGEFROM_1_OFFSET))(this, a1);
	}
};
