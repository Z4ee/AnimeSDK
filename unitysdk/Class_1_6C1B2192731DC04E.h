#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A1329B6B19F70B0;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_6C1B2192731DC04E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CCB780)
#define CLASS_1_6C1B2192731DC04E_CLONE_OFFSET UNITYSDK_OFFSET(0x17CCB320)
#define CLASS_1_6C1B2192731DC04E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CCB540)
#define CLASS_1_6C1B2192731DC04E_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CCB450)
#define CLASS_1_6C1B2192731DC04E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CCB630)
#define CLASS_1_6C1B2192731DC04E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CCBA20)
#define CLASS_1_6C1B2192731DC04E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CCB880)
#define CLASS_1_6C1B2192731DC04E_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17CCB3F0)
#define CLASS_1_6C1B2192731DC04E_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17CCB410)
#define CLASS_1_6C1B2192731DC04E_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17CCB440)
#define CLASS_1_6C1B2192731DC04E_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17CCB430)
#define CLASS_1_6C1B2192731DC04E_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17CCB400)
#define CLASS_1_6C1B2192731DC04E_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17CCB420)
#define CLASS_1_6C1B2192731DC04E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CCB240)
#define CLASS_1_6C1B2192731DC04E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CCB680)
#define CLASS_1_6C1B2192731DC04E_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CCB6E0)
#define CLASS_1_6C1B2192731DC04E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CCB260)
#define CLASS_1_6C1B2192731DC04E__CTOR_OFFSET UNITYSDK_OFFSET(0x17CCB250)

inline static constexpr unsigned int Class_1_6C1B2192731DC04E_TypeDefinitionIndex = 23241;

class Class_1_6C1B2192731DC04E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	::Class_1_0A1329B6B19F70B0* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Proto::ItemList* Field_1_6; // 0x20
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6C1B2192731DC04E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6C1B2192731DC04E*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6C1B2192731DC04E* Clone()
	{
		return ((::Class_1_6C1B2192731DC04E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_0A1329B6B19F70B0* Method_1_24748FC20F375725()
	{
		return ((::Class_1_0A1329B6B19F70B0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_0A1329B6B19F70B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A1329B6B19F70B0*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6C1B2192731DC04E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C1B2192731DC04E*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6C1B2192731DC04E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6C1B2192731DC04E*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6C1B2192731DC04E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
