#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_48;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_6C1B2192731DC04E_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BEDCC0)
#define CLASS_1_6C1B2192731DC04E_6_CLONE_OFFSET UNITYSDK_OFFSET(0x17BED7F0)
#define CLASS_1_6C1B2192731DC04E_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BED970)
#define CLASS_1_6C1B2192731DC04E_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BED880)
#define CLASS_1_6C1B2192731DC04E_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BEDA60)
#define CLASS_1_6C1B2192731DC04E_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BEDFF0)
#define CLASS_1_6C1B2192731DC04E_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BEDDC0)
#define CLASS_1_6C1B2192731DC04E_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17BED820)
#define CLASS_1_6C1B2192731DC04E_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17BED860)
#define CLASS_1_6C1B2192731DC04E_6_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17BED850)
#define CLASS_1_6C1B2192731DC04E_6_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17BED840)
#define CLASS_1_6C1B2192731DC04E_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17BED830)
#define CLASS_1_6C1B2192731DC04E_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17BED870)
#define CLASS_1_6C1B2192731DC04E_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BED640)
#define CLASS_1_6C1B2192731DC04E_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BEDBC0)
#define CLASS_1_6C1B2192731DC04E_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BEDC20)
#define CLASS_1_6C1B2192731DC04E_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BED660)
#define CLASS_1_6C1B2192731DC04E_6__CTOR_OFFSET UNITYSDK_OFFSET(0x17BED650)

inline static constexpr unsigned int Class_1_6C1B2192731DC04E_6_TypeDefinitionIndex = 26176;

class Class_1_6C1B2192731DC04E_6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	::Class_1_99BD961747420BEB_48* Field_1_6; // 0x10
	::Proto::ItemList* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6C1B2192731DC04E_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6C1B2192731DC04E_6*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6C1B2192731DC04E_6* Clone()
	{
		return ((::Class_1_6C1B2192731DC04E_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Class_1_99BD961747420BEB_48* Method_1_24748FC20F375725()
	{
		return ((::Class_1_99BD961747420BEB_48*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_99BD961747420BEB_48* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_48*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6C1B2192731DC04E_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C1B2192731DC04E_6*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6C1B2192731DC04E_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6C1B2192731DC04E_6*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
