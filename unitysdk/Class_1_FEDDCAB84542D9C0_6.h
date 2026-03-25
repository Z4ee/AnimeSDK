#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_FEDDCAB84542D9C0_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1802E220)
#define CLASS_1_FEDDCAB84542D9C0_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1802DEE0)
#define CLASS_1_FEDDCAB84542D9C0_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1802E050)
#define CLASS_1_FEDDCAB84542D9C0_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1802DFA0)
#define CLASS_1_FEDDCAB84542D9C0_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1802E100)
#define CLASS_1_FEDDCAB84542D9C0_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1802E380)
#define CLASS_1_FEDDCAB84542D9C0_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1802E2F0)
#define CLASS_1_FEDDCAB84542D9C0_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1802DF60)
#define CLASS_1_FEDDCAB84542D9C0_6_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1802DF90)
#define CLASS_1_FEDDCAB84542D9C0_6_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1802DF80)
#define CLASS_1_FEDDCAB84542D9C0_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1802DF70)
#define CLASS_1_FEDDCAB84542D9C0_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1802DE50)
#define CLASS_1_FEDDCAB84542D9C0_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1802E140)
#define CLASS_1_FEDDCAB84542D9C0_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1802E1A0)
#define CLASS_1_FEDDCAB84542D9C0_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1802DE70)
#define CLASS_1_FEDDCAB84542D9C0_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1802DE60)

inline static constexpr unsigned int Class_1_FEDDCAB84542D9C0_6_TypeDefinitionIndex = 25492;

class Class_1_FEDDCAB84542D9C0_6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	::Proto::ItemList* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FEDDCAB84542D9C0_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FEDDCAB84542D9C0_6*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FEDDCAB84542D9C0_6* Clone()
	{
		return ((::Class_1_FEDDCAB84542D9C0_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FEDDCAB84542D9C0_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FEDDCAB84542D9C0_6*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FEDDCAB84542D9C0_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FEDDCAB84542D9C0_6*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
