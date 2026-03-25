#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6852A427C81E3F96;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_8B0C86A2CAB5E0E9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180398B0)
#define CLASS_1_8B0C86A2CAB5E0E9_CLONE_OFFSET UNITYSDK_OFFSET(0x180393F0)
#define CLASS_1_8B0C86A2CAB5E0E9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180395E0)
#define CLASS_1_8B0C86A2CAB5E0E9_EQUALS_OFFSET UNITYSDK_OFFSET(0x180394A0)
#define CLASS_1_8B0C86A2CAB5E0E9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18039710)
#define CLASS_1_8B0C86A2CAB5E0E9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18039B50)
#define CLASS_1_8B0C86A2CAB5E0E9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180399F0)
#define CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18039480)
#define CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18039440)
#define CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x18039470)
#define CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x18039430)
#define CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x18039460)
#define CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x18039420)
#define CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18039490)
#define CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18039450)
#define CLASS_1_8B0C86A2CAB5E0E9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180392F0)
#define CLASS_1_8B0C86A2CAB5E0E9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18039780)
#define CLASS_1_8B0C86A2CAB5E0E9_WRITETO_OFFSET UNITYSDK_OFFSET(0x180397E0)
#define CLASS_1_8B0C86A2CAB5E0E9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18039310)
#define CLASS_1_8B0C86A2CAB5E0E9__CTOR_OFFSET UNITYSDK_OFFSET(0x18039300)

inline static constexpr unsigned int Class_1_8B0C86A2CAB5E0E9_TypeDefinitionIndex = 26343;

class Class_1_8B0C86A2CAB5E0E9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_6852A427C81E3F96* Field_1_4; // 0x18
	::Proto::ItemList* Field_1_2; // 0x20
	::Proto::ItemList* Field_1_6; // 0x28
	::System::UInt32 Field_1_8; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8B0C86A2CAB5E0E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8B0C86A2CAB5E0E9*))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8B0C86A2CAB5E0E9* Clone()
	{
		return ((::Class_1_8B0C86A2CAB5E0E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Class_1_6852A427C81E3F96* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6852A427C81E3F96*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6852A427C81E3F96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6852A427C81E3F96*))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8B0C86A2CAB5E0E9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8B0C86A2CAB5E0E9*))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8B0C86A2CAB5E0E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8B0C86A2CAB5E0E9*))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8B0C86A2CAB5E0E9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
