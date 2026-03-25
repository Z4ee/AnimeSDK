#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_FEDDCAB84542D9C0_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E16350)
#define CLASS_1_FEDDCAB84542D9C0_10_CLONE_OFFSET UNITYSDK_OFFSET(0x17E16010)
#define CLASS_1_FEDDCAB84542D9C0_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E16180)
#define CLASS_1_FEDDCAB84542D9C0_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E160D0)
#define CLASS_1_FEDDCAB84542D9C0_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E16230)
#define CLASS_1_FEDDCAB84542D9C0_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E164B0)
#define CLASS_1_FEDDCAB84542D9C0_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E16420)
#define CLASS_1_FEDDCAB84542D9C0_10_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E16090)
#define CLASS_1_FEDDCAB84542D9C0_10_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17E160C0)
#define CLASS_1_FEDDCAB84542D9C0_10_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17E160B0)
#define CLASS_1_FEDDCAB84542D9C0_10_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E160A0)
#define CLASS_1_FEDDCAB84542D9C0_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E15F80)
#define CLASS_1_FEDDCAB84542D9C0_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E16270)
#define CLASS_1_FEDDCAB84542D9C0_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E162D0)
#define CLASS_1_FEDDCAB84542D9C0_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E15FA0)
#define CLASS_1_FEDDCAB84542D9C0_10__CTOR_OFFSET UNITYSDK_OFFSET(0x17E15F90)

inline static constexpr unsigned int Class_1_FEDDCAB84542D9C0_10_TypeDefinitionIndex = 27065;

class Class_1_FEDDCAB84542D9C0_10 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Proto::ItemList* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FEDDCAB84542D9C0_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FEDDCAB84542D9C0_10*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FEDDCAB84542D9C0_10* Clone()
	{
		return ((::Class_1_FEDDCAB84542D9C0_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FEDDCAB84542D9C0_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FEDDCAB84542D9C0_10*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FEDDCAB84542D9C0_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FEDDCAB84542D9C0_10*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDCAB84542D9C0_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
