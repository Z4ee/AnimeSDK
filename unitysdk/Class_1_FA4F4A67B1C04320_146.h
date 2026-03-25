#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_146_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1813E220)
#define CLASS_1_FA4F4A67B1C04320_146_CLONE_OFFSET UNITYSDK_OFFSET(0x1813E020)
#define CLASS_1_FA4F4A67B1C04320_146_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1813E0E0)
#define CLASS_1_FA4F4A67B1C04320_146_EQUALS_OFFSET UNITYSDK_OFFSET(0x1813E080)
#define CLASS_1_FA4F4A67B1C04320_146_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1813E130)
#define CLASS_1_FA4F4A67B1C04320_146_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1813E2E0)
#define CLASS_1_FA4F4A67B1C04320_146_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1813E2B0)
#define CLASS_1_FA4F4A67B1C04320_146_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1813E060)
#define CLASS_1_FA4F4A67B1C04320_146_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1813E070)
#define CLASS_1_FA4F4A67B1C04320_146_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1813DFD0)
#define CLASS_1_FA4F4A67B1C04320_146_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1813E160)
#define CLASS_1_FA4F4A67B1C04320_146_WRITETO_OFFSET UNITYSDK_OFFSET(0x1813E1C0)
#define CLASS_1_FA4F4A67B1C04320_146__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1813DFF0)
#define CLASS_1_FA4F4A67B1C04320_146__CTOR_OFFSET UNITYSDK_OFFSET(0x1813DFE0)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_146_TypeDefinitionIndex = 23654;

class Class_1_FA4F4A67B1C04320_146 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_146__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_146* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_146*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_146__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_146_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_146* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_146*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_146_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_146_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_146_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_146_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_146* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_146*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_146_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_146_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_146_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_146_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_146_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_146* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_146*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_146_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_146_MERGEFROM_1_OFFSET))(this, a1);
	}
};
