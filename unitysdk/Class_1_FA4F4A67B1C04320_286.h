#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_286_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F439D0)
#define CLASS_1_FA4F4A67B1C04320_286_CLONE_OFFSET UNITYSDK_OFFSET(0x17F437D0)
#define CLASS_1_FA4F4A67B1C04320_286_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F43890)
#define CLASS_1_FA4F4A67B1C04320_286_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F43830)
#define CLASS_1_FA4F4A67B1C04320_286_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F438E0)
#define CLASS_1_FA4F4A67B1C04320_286_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F43A90)
#define CLASS_1_FA4F4A67B1C04320_286_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F43A60)
#define CLASS_1_FA4F4A67B1C04320_286_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F43810)
#define CLASS_1_FA4F4A67B1C04320_286_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F43820)
#define CLASS_1_FA4F4A67B1C04320_286_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F43780)
#define CLASS_1_FA4F4A67B1C04320_286_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F43910)
#define CLASS_1_FA4F4A67B1C04320_286_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F43970)
#define CLASS_1_FA4F4A67B1C04320_286__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F437A0)
#define CLASS_1_FA4F4A67B1C04320_286__CTOR_OFFSET UNITYSDK_OFFSET(0x17F43790)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_286_TypeDefinitionIndex = 24359;

class Class_1_FA4F4A67B1C04320_286 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_286__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_286* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_286*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_286__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_286_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_286* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_286*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_286_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_286_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_286_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_286_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_286* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_286*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_286_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_286_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_286_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_286_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_286_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_286* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_286*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_286_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_286_MERGEFROM_1_OFFSET))(this, a1);
	}
};
