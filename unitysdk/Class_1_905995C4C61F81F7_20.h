#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_905995C4C61F81F7_20_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C13930)
#define CLASS_1_905995C4C61F81F7_20_CLONE_OFFSET UNITYSDK_OFFSET(0x19C135A0)
#define CLASS_1_905995C4C61F81F7_20_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C13740)
#define CLASS_1_905995C4C61F81F7_20_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C13680)
#define CLASS_1_905995C4C61F81F7_20_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C137F0)
#define CLASS_1_905995C4C61F81F7_20_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C13B10)
#define CLASS_1_905995C4C61F81F7_20_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C13A70)
#define CLASS_1_905995C4C61F81F7_20_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19C13640)
#define CLASS_1_905995C4C61F81F7_20_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19C13620)
#define CLASS_1_905995C4C61F81F7_20_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19C134E0)
#define CLASS_1_905995C4C61F81F7_20_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x19C13670)
#define CLASS_1_905995C4C61F81F7_20_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x19C13660)
#define CLASS_1_905995C4C61F81F7_20_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19C13650)
#define CLASS_1_905995C4C61F81F7_20_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19C13630)
#define CLASS_1_905995C4C61F81F7_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C13510)
#define CLASS_1_905995C4C61F81F7_20_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C13830)
#define CLASS_1_905995C4C61F81F7_20_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C13890)
#define CLASS_1_905995C4C61F81F7_20__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C13BE0)
#define CLASS_1_905995C4C61F81F7_20__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C13530)
#define CLASS_1_905995C4C61F81F7_20__CTOR_OFFSET UNITYSDK_OFFSET(0x19C13520)

inline static constexpr unsigned int Class_1_905995C4C61F81F7_20_TypeDefinitionIndex = 30320;

class Class_1_905995C4C61F81F7_20 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_20*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_20*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_905995C4C61F81F7_20_TypeDefinitionIndex)->GetStaticField(0x29B60);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Proto::ItemList* Field_1_7; // 0x18
	::System::UInt32 Field_1_5; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_905995C4C61F81F7_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_20*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_20*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_20*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_905995C4C61F81F7_20* Clone()
	{
		return ((::Class_1_905995C4C61F81F7_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_905995C4C61F81F7_20* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_905995C4C61F81F7_20*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_905995C4C61F81F7_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_20*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_20_MERGEFROM_1_OFFSET))(this, a1);
	}
};
