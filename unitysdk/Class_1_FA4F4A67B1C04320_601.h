#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_601_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EB2410)
#define CLASS_1_FA4F4A67B1C04320_601_CLONE_OFFSET UNITYSDK_OFFSET(0x17EB2150)
#define CLASS_1_FA4F4A67B1C04320_601_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EB22A0)
#define CLASS_1_FA4F4A67B1C04320_601_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EB2200)
#define CLASS_1_FA4F4A67B1C04320_601_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EB2300)
#define CLASS_1_FA4F4A67B1C04320_601_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EB2560)
#define CLASS_1_FA4F4A67B1C04320_601_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EB2520)
#define CLASS_1_FA4F4A67B1C04320_601_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17EB21E0)
#define CLASS_1_FA4F4A67B1C04320_601_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17EB21C0)
#define CLASS_1_FA4F4A67B1C04320_601_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17EB21F0)
#define CLASS_1_FA4F4A67B1C04320_601_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17EB21D0)
#define CLASS_1_FA4F4A67B1C04320_601_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EB2100)
#define CLASS_1_FA4F4A67B1C04320_601_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EB2330)
#define CLASS_1_FA4F4A67B1C04320_601_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EB2390)
#define CLASS_1_FA4F4A67B1C04320_601__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EB2120)
#define CLASS_1_FA4F4A67B1C04320_601__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB2110)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_601_TypeDefinitionIndex = 25696;

class Class_1_FA4F4A67B1C04320_601 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_601* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_601*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_601* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_601*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_601* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_601*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_601* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_601*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_601_MERGEFROM_1_OFFSET))(this, a1);
	}
};
