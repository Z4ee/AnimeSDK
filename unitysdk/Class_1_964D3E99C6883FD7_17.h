#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_964D3E99C6883FD7_17_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180B4610)
#define CLASS_1_964D3E99C6883FD7_17_CLONE_OFFSET UNITYSDK_OFFSET(0x180B4260)
#define CLASS_1_964D3E99C6883FD7_17_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180B4410)
#define CLASS_1_964D3E99C6883FD7_17_EQUALS_OFFSET UNITYSDK_OFFSET(0x180B4350)
#define CLASS_1_964D3E99C6883FD7_17_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180B44C0)
#define CLASS_1_964D3E99C6883FD7_17_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180B4810)
#define CLASS_1_964D3E99C6883FD7_17_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180B4770)
#define CLASS_1_964D3E99C6883FD7_17_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x180B4330)
#define CLASS_1_964D3E99C6883FD7_17_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180B4310)
#define CLASS_1_964D3E99C6883FD7_17_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x180B4300)
#define CLASS_1_964D3E99C6883FD7_17_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x180B42F0)
#define CLASS_1_964D3E99C6883FD7_17_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x180B4340)
#define CLASS_1_964D3E99C6883FD7_17_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180B4320)
#define CLASS_1_964D3E99C6883FD7_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180B41C0)
#define CLASS_1_964D3E99C6883FD7_17_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180B4510)
#define CLASS_1_964D3E99C6883FD7_17_WRITETO_OFFSET UNITYSDK_OFFSET(0x180B4570)
#define CLASS_1_964D3E99C6883FD7_17__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180B41E0)
#define CLASS_1_964D3E99C6883FD7_17__CTOR_OFFSET UNITYSDK_OFFSET(0x180B41D0)

inline static constexpr unsigned int Class_1_964D3E99C6883FD7_17_TypeDefinitionIndex = 25977;

class Class_1_964D3E99C6883FD7_17 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Proto::ItemList* Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_964D3E99C6883FD7_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_964D3E99C6883FD7_17*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_964D3E99C6883FD7_17* Clone()
	{
		return ((::Class_1_964D3E99C6883FD7_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_964D3E99C6883FD7_17* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_964D3E99C6883FD7_17*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_964D3E99C6883FD7_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_964D3E99C6883FD7_17*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_17_MERGEFROM_1_OFFSET))(this, a1);
	}
};
