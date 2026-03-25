#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_365_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D0BDF0)
#define CLASS_1_FA4F4A67B1C04320_365_CLONE_OFFSET UNITYSDK_OFFSET(0x17D0BB80)
#define CLASS_1_FA4F4A67B1C04320_365_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D0BCB0)
#define CLASS_1_FA4F4A67B1C04320_365_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D0BC10)
#define CLASS_1_FA4F4A67B1C04320_365_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D0BD00)
#define CLASS_1_FA4F4A67B1C04320_365_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D0BEB0)
#define CLASS_1_FA4F4A67B1C04320_365_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D0BE80)
#define CLASS_1_FA4F4A67B1C04320_365_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D0BBF0)
#define CLASS_1_FA4F4A67B1C04320_365_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D0BC00)
#define CLASS_1_FA4F4A67B1C04320_365_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D0BB30)
#define CLASS_1_FA4F4A67B1C04320_365_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D0BD30)
#define CLASS_1_FA4F4A67B1C04320_365_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D0BD90)
#define CLASS_1_FA4F4A67B1C04320_365__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D0BB50)
#define CLASS_1_FA4F4A67B1C04320_365__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0BB40)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_365_TypeDefinitionIndex = 24783;

class Class_1_FA4F4A67B1C04320_365 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_365__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_365* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_365*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_365__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_365_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_365* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_365*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_365_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_365_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_365_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_365_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_365* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_365*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_365_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_365_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_365_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_365_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_365_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_365* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_365*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_365_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_365_MERGEFROM_1_OFFSET))(this, a1);
	}
};
