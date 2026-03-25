#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_142_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F0D8E0)
#define CLASS_1_FA4F4A67B1C04320_142_CLONE_OFFSET UNITYSDK_OFFSET(0x17F0D670)
#define CLASS_1_FA4F4A67B1C04320_142_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F0D7A0)
#define CLASS_1_FA4F4A67B1C04320_142_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F0D700)
#define CLASS_1_FA4F4A67B1C04320_142_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F0D7F0)
#define CLASS_1_FA4F4A67B1C04320_142_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F0D9A0)
#define CLASS_1_FA4F4A67B1C04320_142_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F0D970)
#define CLASS_1_FA4F4A67B1C04320_142_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F0D6E0)
#define CLASS_1_FA4F4A67B1C04320_142_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F0D6F0)
#define CLASS_1_FA4F4A67B1C04320_142_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F0D620)
#define CLASS_1_FA4F4A67B1C04320_142_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F0D820)
#define CLASS_1_FA4F4A67B1C04320_142_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F0D880)
#define CLASS_1_FA4F4A67B1C04320_142__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F0D640)
#define CLASS_1_FA4F4A67B1C04320_142__CTOR_OFFSET UNITYSDK_OFFSET(0x17F0D630)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_142_TypeDefinitionIndex = 23624;

class Class_1_FA4F4A67B1C04320_142 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_142__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_142* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_142*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_142__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_142_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_142* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_142*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_142_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_142_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_142_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_142_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_142* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_142*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_142_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_142_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_142_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_142_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_142_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_142* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_142*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_142_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_142_MERGEFROM_1_OFFSET))(this, a1);
	}
};
