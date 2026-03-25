#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_964D3E99C6883FD7_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F003D0)
#define CLASS_1_964D3E99C6883FD7_12_CLONE_OFFSET UNITYSDK_OFFSET(0x17F00040)
#define CLASS_1_964D3E99C6883FD7_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F001E0)
#define CLASS_1_964D3E99C6883FD7_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F00120)
#define CLASS_1_964D3E99C6883FD7_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F00290)
#define CLASS_1_964D3E99C6883FD7_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F005B0)
#define CLASS_1_964D3E99C6883FD7_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F00510)
#define CLASS_1_964D3E99C6883FD7_12_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17F000E0)
#define CLASS_1_964D3E99C6883FD7_12_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F000C0)
#define CLASS_1_964D3E99C6883FD7_12_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17F00110)
#define CLASS_1_964D3E99C6883FD7_12_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17F00100)
#define CLASS_1_964D3E99C6883FD7_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17F000F0)
#define CLASS_1_964D3E99C6883FD7_12_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F000D0)
#define CLASS_1_964D3E99C6883FD7_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EFFFB0)
#define CLASS_1_964D3E99C6883FD7_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F002D0)
#define CLASS_1_964D3E99C6883FD7_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F00330)
#define CLASS_1_964D3E99C6883FD7_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EFFFD0)
#define CLASS_1_964D3E99C6883FD7_12__CTOR_OFFSET UNITYSDK_OFFSET(0x17EFFFC0)

inline static constexpr unsigned int Class_1_964D3E99C6883FD7_12_TypeDefinitionIndex = 25491;

class Class_1_964D3E99C6883FD7_12 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Proto::ItemList* Field_1_6; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_964D3E99C6883FD7_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_964D3E99C6883FD7_12*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_964D3E99C6883FD7_12* Clone()
	{
		return ((::Class_1_964D3E99C6883FD7_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_964D3E99C6883FD7_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_964D3E99C6883FD7_12*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_964D3E99C6883FD7_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_964D3E99C6883FD7_12*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
