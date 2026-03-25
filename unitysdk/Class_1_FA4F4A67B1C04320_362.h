#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_362_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BF7BF0)
#define CLASS_1_FA4F4A67B1C04320_362_CLONE_OFFSET UNITYSDK_OFFSET(0x17BF7930)
#define CLASS_1_FA4F4A67B1C04320_362_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BF7A80)
#define CLASS_1_FA4F4A67B1C04320_362_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BF79E0)
#define CLASS_1_FA4F4A67B1C04320_362_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BF7AE0)
#define CLASS_1_FA4F4A67B1C04320_362_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BF7D40)
#define CLASS_1_FA4F4A67B1C04320_362_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BF7D00)
#define CLASS_1_FA4F4A67B1C04320_362_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17BF79C0)
#define CLASS_1_FA4F4A67B1C04320_362_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17BF79A0)
#define CLASS_1_FA4F4A67B1C04320_362_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17BF79D0)
#define CLASS_1_FA4F4A67B1C04320_362_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17BF79B0)
#define CLASS_1_FA4F4A67B1C04320_362_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BF78E0)
#define CLASS_1_FA4F4A67B1C04320_362_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BF7B10)
#define CLASS_1_FA4F4A67B1C04320_362_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BF7B70)
#define CLASS_1_FA4F4A67B1C04320_362__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BF7900)
#define CLASS_1_FA4F4A67B1C04320_362__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF78F0)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_362_TypeDefinitionIndex = 24771;

class Class_1_FA4F4A67B1C04320_362 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_362* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_362*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_362* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_362*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_362* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_362*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_362* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_362*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_362_MERGEFROM_1_OFFSET))(this, a1);
	}
};
