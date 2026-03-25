#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_614_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EA2B80)
#define CLASS_1_FA4F4A67B1C04320_614_CLONE_OFFSET UNITYSDK_OFFSET(0x17EA2910)
#define CLASS_1_FA4F4A67B1C04320_614_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EA2A40)
#define CLASS_1_FA4F4A67B1C04320_614_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EA29A0)
#define CLASS_1_FA4F4A67B1C04320_614_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EA2A90)
#define CLASS_1_FA4F4A67B1C04320_614_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EA2C40)
#define CLASS_1_FA4F4A67B1C04320_614_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EA2C10)
#define CLASS_1_FA4F4A67B1C04320_614_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17EA2980)
#define CLASS_1_FA4F4A67B1C04320_614_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17EA2990)
#define CLASS_1_FA4F4A67B1C04320_614_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EA28C0)
#define CLASS_1_FA4F4A67B1C04320_614_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EA2AC0)
#define CLASS_1_FA4F4A67B1C04320_614_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EA2B20)
#define CLASS_1_FA4F4A67B1C04320_614__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EA28E0)
#define CLASS_1_FA4F4A67B1C04320_614__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA28D0)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_614_TypeDefinitionIndex = 25726;

class Class_1_FA4F4A67B1C04320_614 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_614__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_614*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_614__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_614_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_614* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_614*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_614_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_614_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_614_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_614_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_614* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_614*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_614_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_614_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_614_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_614_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_614_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_614*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_614_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_614_MERGEFROM_1_OFFSET))(this, a1);
	}
};
