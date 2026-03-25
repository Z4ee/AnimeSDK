#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_734_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E4B910)
#define CLASS_1_FA4F4A67B1C04320_734_CLONE_OFFSET UNITYSDK_OFFSET(0x17E34380)
#define CLASS_1_FA4F4A67B1C04320_734_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E344B0)
#define CLASS_1_FA4F4A67B1C04320_734_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E34410)
#define CLASS_1_FA4F4A67B1C04320_734_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E4B820)
#define CLASS_1_FA4F4A67B1C04320_734_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E4B9D0)
#define CLASS_1_FA4F4A67B1C04320_734_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E4B9A0)
#define CLASS_1_FA4F4A67B1C04320_734_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E343F0)
#define CLASS_1_FA4F4A67B1C04320_734_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E34400)
#define CLASS_1_FA4F4A67B1C04320_734_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E34330)
#define CLASS_1_FA4F4A67B1C04320_734_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E4B850)
#define CLASS_1_FA4F4A67B1C04320_734_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E4B8B0)
#define CLASS_1_FA4F4A67B1C04320_734__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E34350)
#define CLASS_1_FA4F4A67B1C04320_734__CTOR_OFFSET UNITYSDK_OFFSET(0x17E34340)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_734_TypeDefinitionIndex = 26416;

class Class_1_FA4F4A67B1C04320_734 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_734__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_734* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_734*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_734__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_734_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_734* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_734*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_734_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_734_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_734_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_734_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_734* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_734*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_734_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_734_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_734_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_734_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_734_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_734* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_734*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_734_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_734_MERGEFROM_1_OFFSET))(this, a1);
	}
};
