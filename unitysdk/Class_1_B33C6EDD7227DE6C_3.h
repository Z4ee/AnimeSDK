#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_4.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B33C6EDD7227DE6C_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F9A4F0)
#define CLASS_1_B33C6EDD7227DE6C_3_CLONE_OFFSET UNITYSDK_OFFSET(0x17F9A200)
#define CLASS_1_B33C6EDD7227DE6C_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F9A330)
#define CLASS_1_B33C6EDD7227DE6C_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F9A2B0)
#define CLASS_1_B33C6EDD7227DE6C_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F9A3A0)
#define CLASS_1_B33C6EDD7227DE6C_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F9A6A0)
#define CLASS_1_B33C6EDD7227DE6C_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F9A650)
#define CLASS_1_B33C6EDD7227DE6C_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F9A250)
#define CLASS_1_B33C6EDD7227DE6C_3_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17F9A280)
#define CLASS_1_B33C6EDD7227DE6C_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F9A260)
#define CLASS_1_B33C6EDD7227DE6C_3_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17F9A270)
#define CLASS_1_B33C6EDD7227DE6C_3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17F9A2A0)
#define CLASS_1_B33C6EDD7227DE6C_3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17F9A290)
#define CLASS_1_B33C6EDD7227DE6C_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F9A1A0)
#define CLASS_1_B33C6EDD7227DE6C_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F9A3D0)
#define CLASS_1_B33C6EDD7227DE6C_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F9A430)
#define CLASS_1_B33C6EDD7227DE6C_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F9A1C0)
#define CLASS_1_B33C6EDD7227DE6C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17F9A1B0)

inline static constexpr unsigned int Class_1_B33C6EDD7227DE6C_3_TypeDefinitionIndex = 27049;

class Class_1_B33C6EDD7227DE6C_3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::Boolean Field_1_6; // 0x1C
	::Enum_3_71AA90D596A09AC8_4 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B33C6EDD7227DE6C_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B33C6EDD7227DE6C_3*))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B33C6EDD7227DE6C_3* Clone()
	{
		return ((::Class_1_B33C6EDD7227DE6C_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_71AA90D596A09AC8_4 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_71AA90D596A09AC8_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_71AA90D596A09AC8_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_4))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B33C6EDD7227DE6C_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B33C6EDD7227DE6C_3*))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B33C6EDD7227DE6C_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B33C6EDD7227DE6C_3*))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B33C6EDD7227DE6C_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
