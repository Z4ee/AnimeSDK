#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7EDAB23D97798C5_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_467A37B75E128533_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CAD280)
#define CLASS_1_467A37B75E128533_CLONE_OFFSET UNITYSDK_OFFSET(0x17CACD30)
#define CLASS_1_467A37B75E128533_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CACFC0)
#define CLASS_1_467A37B75E128533_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CACEB0)
#define CLASS_1_467A37B75E128533_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CAD0A0)
#define CLASS_1_467A37B75E128533_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CAD530)
#define CLASS_1_467A37B75E128533_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CAD450)
#define CLASS_1_467A37B75E128533_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17CACE90)
#define CLASS_1_467A37B75E128533_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17CACE10)
#define CLASS_1_467A37B75E128533_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17CACE20)
#define CLASS_1_467A37B75E128533_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17CACDF0)
#define CLASS_1_467A37B75E128533_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17CACEA0)
#define CLASS_1_467A37B75E128533_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17CACE00)
#define CLASS_1_467A37B75E128533_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CACC80)
#define CLASS_1_467A37B75E128533_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CAD170)
#define CLASS_1_467A37B75E128533_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CAD1D0)
#define CLASS_1_467A37B75E128533__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CACCA0)
#define CLASS_1_467A37B75E128533__CTOR_OFFSET UNITYSDK_OFFSET(0x17CACC90)

inline static constexpr unsigned int Class_1_467A37B75E128533_TypeDefinitionIndex = 26920;

class Class_1_467A37B75E128533 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xE; // 0x0
	::Class_1_E7EDAB23D97798C5_3* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::String* Field_1_4; // 0x20
	::System::UInt32 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_467A37B75E128533* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_467A37B75E128533*))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_467A37B75E128533* Clone()
	{
		return ((::Class_1_467A37B75E128533*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_CLONE_OFFSET))(this);
	}

	::Class_1_E7EDAB23D97798C5_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E7EDAB23D97798C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E7EDAB23D97798C5_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7EDAB23D97798C5_3*))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_467A37B75E128533* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_467A37B75E128533*))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_467A37B75E128533* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_467A37B75E128533*))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_467A37B75E128533_MERGEFROM_1_OFFSET))(this, a1);
	}
};
