#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_127_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E78150)
#define CLASS_1_FA4F4A67B1C04320_127_CLONE_OFFSET UNITYSDK_OFFSET(0x17E77E90)
#define CLASS_1_FA4F4A67B1C04320_127_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E77FE0)
#define CLASS_1_FA4F4A67B1C04320_127_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E77F40)
#define CLASS_1_FA4F4A67B1C04320_127_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E78040)
#define CLASS_1_FA4F4A67B1C04320_127_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E782A0)
#define CLASS_1_FA4F4A67B1C04320_127_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E78260)
#define CLASS_1_FA4F4A67B1C04320_127_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17E77F20)
#define CLASS_1_FA4F4A67B1C04320_127_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E77F00)
#define CLASS_1_FA4F4A67B1C04320_127_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17E77F30)
#define CLASS_1_FA4F4A67B1C04320_127_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E77F10)
#define CLASS_1_FA4F4A67B1C04320_127_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E77E40)
#define CLASS_1_FA4F4A67B1C04320_127_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E78070)
#define CLASS_1_FA4F4A67B1C04320_127_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E780D0)
#define CLASS_1_FA4F4A67B1C04320_127__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E77E60)
#define CLASS_1_FA4F4A67B1C04320_127__CTOR_OFFSET UNITYSDK_OFFSET(0x17E77E50)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_127_TypeDefinitionIndex = 23549;

class Class_1_FA4F4A67B1C04320_127 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_127* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_127*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_127* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_127*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_127* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_127*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_127* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_127*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_127_MERGEFROM_1_OFFSET))(this, a1);
	}
};
