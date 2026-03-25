#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_390_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CDC6F0)
#define CLASS_1_FA4F4A67B1C04320_390_CLONE_OFFSET UNITYSDK_OFFSET(0x17CDC4F0)
#define CLASS_1_FA4F4A67B1C04320_390_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CDC5B0)
#define CLASS_1_FA4F4A67B1C04320_390_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CDC550)
#define CLASS_1_FA4F4A67B1C04320_390_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CDC600)
#define CLASS_1_FA4F4A67B1C04320_390_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CDC7B0)
#define CLASS_1_FA4F4A67B1C04320_390_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CDC780)
#define CLASS_1_FA4F4A67B1C04320_390_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17CDC530)
#define CLASS_1_FA4F4A67B1C04320_390_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17CDC540)
#define CLASS_1_FA4F4A67B1C04320_390_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CDC4A0)
#define CLASS_1_FA4F4A67B1C04320_390_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CDC630)
#define CLASS_1_FA4F4A67B1C04320_390_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CDC690)
#define CLASS_1_FA4F4A67B1C04320_390__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CDC4C0)
#define CLASS_1_FA4F4A67B1C04320_390__CTOR_OFFSET UNITYSDK_OFFSET(0x17CDC4B0)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_390_TypeDefinitionIndex = 24855;

class Class_1_FA4F4A67B1C04320_390 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_390__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_390* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_390*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_390__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_390_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_390* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_390*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_390_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_390_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_390_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_390_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_390* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_390*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_390_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_390_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_390_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_390_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_390_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_390* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_390*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_390_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_390_MERGEFROM_1_OFFSET))(this, a1);
	}
};
