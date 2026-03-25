#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_964D3E99C6883FD7_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DB52A0)
#define CLASS_1_964D3E99C6883FD7_7_CLONE_OFFSET UNITYSDK_OFFSET(0x17DB4EB0)
#define CLASS_1_964D3E99C6883FD7_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DB50A0)
#define CLASS_1_964D3E99C6883FD7_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DB4FC0)
#define CLASS_1_964D3E99C6883FD7_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DB5150)
#define CLASS_1_964D3E99C6883FD7_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DB54A0)
#define CLASS_1_964D3E99C6883FD7_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DB5400)
#define CLASS_1_964D3E99C6883FD7_7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17DB4FA0)
#define CLASS_1_964D3E99C6883FD7_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17DB4F80)
#define CLASS_1_964D3E99C6883FD7_7_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17DB4F70)
#define CLASS_1_964D3E99C6883FD7_7_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17DB4F60)
#define CLASS_1_964D3E99C6883FD7_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17DB4FB0)
#define CLASS_1_964D3E99C6883FD7_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17DB4F90)
#define CLASS_1_964D3E99C6883FD7_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DB4E10)
#define CLASS_1_964D3E99C6883FD7_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DB51A0)
#define CLASS_1_964D3E99C6883FD7_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DB5200)
#define CLASS_1_964D3E99C6883FD7_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DB4E30)
#define CLASS_1_964D3E99C6883FD7_7__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB4E20)

inline static constexpr unsigned int Class_1_964D3E99C6883FD7_7_TypeDefinitionIndex = 24198;

class Class_1_964D3E99C6883FD7_7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	::Proto::ItemList* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_964D3E99C6883FD7_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_964D3E99C6883FD7_7*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_964D3E99C6883FD7_7* Clone()
	{
		return ((::Class_1_964D3E99C6883FD7_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_964D3E99C6883FD7_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_964D3E99C6883FD7_7*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_964D3E99C6883FD7_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_964D3E99C6883FD7_7*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_964D3E99C6883FD7_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
