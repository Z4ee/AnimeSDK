#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_910_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AB4590)
#define CLASS_1_FA4F4A67B1C04320_910_CLONE_OFFSET UNITYSDK_OFFSET(0x17AB4390)
#define CLASS_1_FA4F4A67B1C04320_910_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AB4450)
#define CLASS_1_FA4F4A67B1C04320_910_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AB43F0)
#define CLASS_1_FA4F4A67B1C04320_910_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AB44A0)
#define CLASS_1_FA4F4A67B1C04320_910_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AB4650)
#define CLASS_1_FA4F4A67B1C04320_910_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AB4620)
#define CLASS_1_FA4F4A67B1C04320_910_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17AB43D0)
#define CLASS_1_FA4F4A67B1C04320_910_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17AB43E0)
#define CLASS_1_FA4F4A67B1C04320_910_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AB4340)
#define CLASS_1_FA4F4A67B1C04320_910_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AB44D0)
#define CLASS_1_FA4F4A67B1C04320_910_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AB4530)
#define CLASS_1_FA4F4A67B1C04320_910__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AB4360)
#define CLASS_1_FA4F4A67B1C04320_910__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB4350)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_910_TypeDefinitionIndex = 27297;

class Class_1_FA4F4A67B1C04320_910 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_910__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_910* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_910*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_910__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_910_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_910* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_910*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_910_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_910_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_910_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_910_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_910* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_910*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_910_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_910_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_910_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_910_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_910_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_910* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_910*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_910_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_910_MERGEFROM_1_OFFSET))(this, a1);
	}
};
