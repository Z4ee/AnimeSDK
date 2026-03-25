#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E621F95B064E7051_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9D5608F598A30CAC_39_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F7B040)
#define CLASS_1_9D5608F598A30CAC_39_CLONE_OFFSET UNITYSDK_OFFSET(0x17F7AD00)
#define CLASS_1_9D5608F598A30CAC_39_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F7AE70)
#define CLASS_1_9D5608F598A30CAC_39_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F7ADC0)
#define CLASS_1_9D5608F598A30CAC_39_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F7AF20)
#define CLASS_1_9D5608F598A30CAC_39_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F7B180)
#define CLASS_1_9D5608F598A30CAC_39_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F7B110)
#define CLASS_1_9D5608F598A30CAC_39_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F7AD80)
#define CLASS_1_9D5608F598A30CAC_39_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17F7ADA0)
#define CLASS_1_9D5608F598A30CAC_39_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F7AD90)
#define CLASS_1_9D5608F598A30CAC_39_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17F7ADB0)
#define CLASS_1_9D5608F598A30CAC_39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F7AC70)
#define CLASS_1_9D5608F598A30CAC_39_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F7AF60)
#define CLASS_1_9D5608F598A30CAC_39_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F7AFC0)
#define CLASS_1_9D5608F598A30CAC_39__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F7AC90)
#define CLASS_1_9D5608F598A30CAC_39__CTOR_OFFSET UNITYSDK_OFFSET(0x17F7AC80)

inline static constexpr unsigned int Class_1_9D5608F598A30CAC_39_TypeDefinitionIndex = 26952;

class Class_1_9D5608F598A30CAC_39 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Class_1_E621F95B064E7051_5* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9D5608F598A30CAC_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D5608F598A30CAC_39*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9D5608F598A30CAC_39* Clone()
	{
		return ((::Class_1_9D5608F598A30CAC_39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_E621F95B064E7051_5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E621F95B064E7051_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E621F95B064E7051_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E621F95B064E7051_5*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9D5608F598A30CAC_39* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9D5608F598A30CAC_39*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9D5608F598A30CAC_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D5608F598A30CAC_39*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9D5608F598A30CAC_39_MERGEFROM_1_OFFSET))(this, a1);
	}
};
