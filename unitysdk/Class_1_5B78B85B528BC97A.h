#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_45.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_5B78B85B528BC97A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C6F0B40)
#define CLASS_1_5B78B85B528BC97A_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6F0580)
#define CLASS_1_5B78B85B528BC97A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C6F06F0)
#define CLASS_1_5B78B85B528BC97A_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6F0680)
#define CLASS_1_5B78B85B528BC97A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C6F0890)
#define CLASS_1_5B78B85B528BC97A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C6F0DF0)
#define CLASS_1_5B78B85B528BC97A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C6F0D40)
#define CLASS_1_5B78B85B528BC97A_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C6F0640)
#define CLASS_1_5B78B85B528BC97A_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C6F0600)
#define CLASS_1_5B78B85B528BC97A_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C6F0630)
#define CLASS_1_5B78B85B528BC97A_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C6F04C0)
#define CLASS_1_5B78B85B528BC97A_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1C6F0670)
#define CLASS_1_5B78B85B528BC97A_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1C6F0660)
#define CLASS_1_5B78B85B528BC97A_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C6F0650)
#define CLASS_1_5B78B85B528BC97A_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C6F0610)
#define CLASS_1_5B78B85B528BC97A_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C6F0620)
#define CLASS_1_5B78B85B528BC97A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C6F04F0)
#define CLASS_1_5B78B85B528BC97A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6F0930)
#define CLASS_1_5B78B85B528BC97A_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C6F0990)
#define CLASS_1_5B78B85B528BC97A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6F0EE0)
#define CLASS_1_5B78B85B528BC97A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6F0510)
#define CLASS_1_5B78B85B528BC97A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F0500)

inline static constexpr unsigned int Class_1_5B78B85B528BC97A_TypeDefinitionIndex = 28805;

class Class_1_5B78B85B528BC97A : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B78B85B528BC97A*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B78B85B528BC97A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B78B85B528BC97A_TypeDefinitionIndex)->GetStaticField(0x4B390);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Proto::ItemList* Field_1_6; // 0x18
	::Enum_3_0A3761FE34514D6C_45 Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x24
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B78B85B528BC97A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B78B85B528BC97A*))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B78B85B528BC97A*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B78B85B528BC97A*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B78B85B528BC97A* Clone()
	{
		return ((::Class_1_5B78B85B528BC97A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_45 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_45(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_45 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_45))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B78B85B528BC97A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B78B85B528BC97A*))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B78B85B528BC97A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B78B85B528BC97A*))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B78B85B528BC97A_MERGEFROM_1_OFFSET))(this, a1);
	}
};
