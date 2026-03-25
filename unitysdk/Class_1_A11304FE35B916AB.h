#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_A11304FE35B916AB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1801BB00)
#define CLASS_1_A11304FE35B916AB_CLONE_OFFSET UNITYSDK_OFFSET(0x1801B6F0)
#define CLASS_1_A11304FE35B916AB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1801B8C0)
#define CLASS_1_A11304FE35B916AB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1801B7F0)
#define CLASS_1_A11304FE35B916AB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1801B990)
#define CLASS_1_A11304FE35B916AB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1801BD00)
#define CLASS_1_A11304FE35B916AB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1801BC50)
#define CLASS_1_A11304FE35B916AB_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1801B7D0)
#define CLASS_1_A11304FE35B916AB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1801B790)
#define CLASS_1_A11304FE35B916AB_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1801B7C0)
#define CLASS_1_A11304FE35B916AB_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1801B7B0)
#define CLASS_1_A11304FE35B916AB_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1801B7E0)
#define CLASS_1_A11304FE35B916AB_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1801B7A0)
#define CLASS_1_A11304FE35B916AB_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1801B780)
#define CLASS_1_A11304FE35B916AB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1801B770)
#define CLASS_1_A11304FE35B916AB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1801B660)
#define CLASS_1_A11304FE35B916AB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1801B9D0)
#define CLASS_1_A11304FE35B916AB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1801BA30)
#define CLASS_1_A11304FE35B916AB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1801B680)
#define CLASS_1_A11304FE35B916AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1801B670)

inline static constexpr unsigned int Class_1_A11304FE35B916AB_TypeDefinitionIndex = 24132;

class Class_1_A11304FE35B916AB : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	::Proto::ItemList* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::UInt32 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A11304FE35B916AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A11304FE35B916AB*))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A11304FE35B916AB* Clone()
	{
		return ((::Class_1_A11304FE35B916AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A11304FE35B916AB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A11304FE35B916AB*))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A11304FE35B916AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A11304FE35B916AB*))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A11304FE35B916AB_MERGEFROM_1_OFFSET))(this, a1);
	}
};
