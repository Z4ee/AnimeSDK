#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_75.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_087E1A32DF42CA66_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D5B630)
#define CLASS_1_087E1A32DF42CA66_CLONE_OFFSET UNITYSDK_OFFSET(0x17D5B280)
#define CLASS_1_087E1A32DF42CA66_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D5B420)
#define CLASS_1_087E1A32DF42CA66_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D5B360)
#define CLASS_1_087E1A32DF42CA66_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D5B4D0)
#define CLASS_1_087E1A32DF42CA66_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D5B850)
#define CLASS_1_087E1A32DF42CA66_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D5B7B0)
#define CLASS_1_087E1A32DF42CA66_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D5B300)
#define CLASS_1_087E1A32DF42CA66_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17D5B330)
#define CLASS_1_087E1A32DF42CA66_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17D5B350)
#define CLASS_1_087E1A32DF42CA66_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17D5B340)
#define CLASS_1_087E1A32DF42CA66_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D5B310)
#define CLASS_1_087E1A32DF42CA66_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17D5B320)
#define CLASS_1_087E1A32DF42CA66_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D5B1F0)
#define CLASS_1_087E1A32DF42CA66_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D5B510)
#define CLASS_1_087E1A32DF42CA66_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D5B570)
#define CLASS_1_087E1A32DF42CA66__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D5B210)
#define CLASS_1_087E1A32DF42CA66__CTOR_OFFSET UNITYSDK_OFFSET(0x17D5B200)

inline static constexpr unsigned int Class_1_087E1A32DF42CA66_TypeDefinitionIndex = 27489;

class Class_1_087E1A32DF42CA66 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xE; // 0x0
	::Proto::ItemList* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::Enum_3_0A3761FE34514D6C_75 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_087E1A32DF42CA66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_087E1A32DF42CA66*))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_087E1A32DF42CA66* Clone()
	{
		return ((::Class_1_087E1A32DF42CA66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_75 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_75(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_75 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_75))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_087E1A32DF42CA66* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_087E1A32DF42CA66*))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_087E1A32DF42CA66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_087E1A32DF42CA66*))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_087E1A32DF42CA66_MERGEFROM_1_OFFSET))(this, a1);
	}
};
