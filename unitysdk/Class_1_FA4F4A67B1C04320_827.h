#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_827_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182299D0)
#define CLASS_1_FA4F4A67B1C04320_827_CLONE_OFFSET UNITYSDK_OFFSET(0x18229760)
#define CLASS_1_FA4F4A67B1C04320_827_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18229890)
#define CLASS_1_FA4F4A67B1C04320_827_EQUALS_OFFSET UNITYSDK_OFFSET(0x182297F0)
#define CLASS_1_FA4F4A67B1C04320_827_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182298E0)
#define CLASS_1_FA4F4A67B1C04320_827_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18229A90)
#define CLASS_1_FA4F4A67B1C04320_827_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18229A60)
#define CLASS_1_FA4F4A67B1C04320_827_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x182297D0)
#define CLASS_1_FA4F4A67B1C04320_827_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x182297E0)
#define CLASS_1_FA4F4A67B1C04320_827_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18229710)
#define CLASS_1_FA4F4A67B1C04320_827_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18229910)
#define CLASS_1_FA4F4A67B1C04320_827_WRITETO_OFFSET UNITYSDK_OFFSET(0x18229970)
#define CLASS_1_FA4F4A67B1C04320_827__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18229730)
#define CLASS_1_FA4F4A67B1C04320_827__CTOR_OFFSET UNITYSDK_OFFSET(0x18229720)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_827_TypeDefinitionIndex = 26924;

class Class_1_FA4F4A67B1C04320_827 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_827__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_827* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_827*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_827__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_827_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_827* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_827*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_827_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_827_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_827_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_827_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_827* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_827*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_827_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_827_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_827_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_827_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_827_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_827* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_827*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_827_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_827_MERGEFROM_1_OFFSET))(this, a1);
	}
};
