#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7A7E21E3A9C2156C_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EC0E30)
#define CLASS_1_7A7E21E3A9C2156C_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17EC0AF0)
#define CLASS_1_7A7E21E3A9C2156C_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EC0C80)
#define CLASS_1_7A7E21E3A9C2156C_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EC0BD0)
#define CLASS_1_7A7E21E3A9C2156C_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EC0CF0)
#define CLASS_1_7A7E21E3A9C2156C_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EC1060)
#define CLASS_1_7A7E21E3A9C2156C_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EC1010)
#define CLASS_1_7A7E21E3A9C2156C_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17EC0B90)
#define CLASS_1_7A7E21E3A9C2156C_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17EC0B70)
#define CLASS_1_7A7E21E3A9C2156C_1_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x17EC0BC0)
#define CLASS_1_7A7E21E3A9C2156C_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17EC0BA0)
#define CLASS_1_7A7E21E3A9C2156C_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17EC0B80)
#define CLASS_1_7A7E21E3A9C2156C_1_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x17EC0BB0)
#define CLASS_1_7A7E21E3A9C2156C_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EC0A90)
#define CLASS_1_7A7E21E3A9C2156C_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EC0D30)
#define CLASS_1_7A7E21E3A9C2156C_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EC0D90)
#define CLASS_1_7A7E21E3A9C2156C_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EC0AB0)
#define CLASS_1_7A7E21E3A9C2156C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC0AA0)

inline static constexpr unsigned int Class_1_7A7E21E3A9C2156C_1_TypeDefinitionIndex = 24781;

class Class_1_7A7E21E3A9C2156C_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::System::Int64 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7A7E21E3A9C2156C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A7E21E3A9C2156C_1*))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7A7E21E3A9C2156C_1* Clone()
	{
		return ((::Class_1_7A7E21E3A9C2156C_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7A7E21E3A9C2156C_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7A7E21E3A9C2156C_1*))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7A7E21E3A9C2156C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A7E21E3A9C2156C_1*))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7A7E21E3A9C2156C_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
