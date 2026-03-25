#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_964D3E99C6883FD7_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E07DD0)
#define CLASS_1_964D3E99C6883FD7_8_CLONE_OFFSET UNITYSDK_OFFSET(0x17E079F0)
#define CLASS_1_964D3E99C6883FD7_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E07BE0)
#define CLASS_1_964D3E99C6883FD7_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E07B00)
#define CLASS_1_964D3E99C6883FD7_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E07C90)
#define CLASS_1_964D3E99C6883FD7_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E07FC0)
#define CLASS_1_964D3E99C6883FD7_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E07F20)
#define CLASS_1_964D3E99C6883FD7_8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17E07AE0)
#define CLASS_1_964D3E99C6883FD7_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E07AA0)
#define CLASS_1_964D3E99C6883FD7_8_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17E07AD0)
#define CLASS_1_964D3E99C6883FD7_8_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17E07AC0)
#define CLASS_1_964D3E99C6883FD7_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17E07AF0)
#define CLASS_1_964D3E99C6883FD7_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E07AB0)
#define CLASS_1_964D3E99C6883FD7_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E07960)
#define CLASS_1_964D3E99C6883FD7_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E07CD0)
#define CLASS_1_964D3E99C6883FD7_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E07D30)
#define CLASS_1_964D3E99C6883FD7_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E07980)
#define CLASS_1_964D3E99C6883FD7_8__CTOR_OFFSET UNITYSDK_OFFSET(0x17E07970)

inline static constexpr unsigned int Class_1_964D3E99C6883FD7_8_TypeDefinitionIndex = 25004;

class Class_1_964D3E99C6883FD7_8 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	::Proto::ItemList* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_964D3E99C6883FD7_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_964D3E99C6883FD7_8*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_964D3E99C6883FD7_8* Clone()
	{
		return ((::Class_1_964D3E99C6883FD7_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_964D3E99C6883FD7_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_964D3E99C6883FD7_8*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_964D3E99C6883FD7_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_964D3E99C6883FD7_8*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
