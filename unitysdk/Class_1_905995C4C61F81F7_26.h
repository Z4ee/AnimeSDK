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

#define CLASS_1_905995C4C61F81F7_26_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197E9EB0)
#define CLASS_1_905995C4C61F81F7_26_CLONE_OFFSET UNITYSDK_OFFSET(0x197E9B20)
#define CLASS_1_905995C4C61F81F7_26_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197E9CC0)
#define CLASS_1_905995C4C61F81F7_26_EQUALS_OFFSET UNITYSDK_OFFSET(0x197E9C00)
#define CLASS_1_905995C4C61F81F7_26_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197E9D70)
#define CLASS_1_905995C4C61F81F7_26_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197EA0A0)
#define CLASS_1_905995C4C61F81F7_26_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197EA000)
#define CLASS_1_905995C4C61F81F7_26_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x197E9BE0)
#define CLASS_1_905995C4C61F81F7_26_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x197E9BA0)
#define CLASS_1_905995C4C61F81F7_26_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x197E9A60)
#define CLASS_1_905995C4C61F81F7_26_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x197E9BD0)
#define CLASS_1_905995C4C61F81F7_26_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x197E9BC0)
#define CLASS_1_905995C4C61F81F7_26_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x197E9BF0)
#define CLASS_1_905995C4C61F81F7_26_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x197E9BB0)
#define CLASS_1_905995C4C61F81F7_26_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197E9A90)
#define CLASS_1_905995C4C61F81F7_26_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197E9DB0)
#define CLASS_1_905995C4C61F81F7_26_WRITETO_OFFSET UNITYSDK_OFFSET(0x197E9E10)
#define CLASS_1_905995C4C61F81F7_26__CCTOR_OFFSET UNITYSDK_OFFSET(0x197EA170)
#define CLASS_1_905995C4C61F81F7_26__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197E9AB0)
#define CLASS_1_905995C4C61F81F7_26__CTOR_OFFSET UNITYSDK_OFFSET(0x197E9AA0)

inline static constexpr unsigned int Class_1_905995C4C61F81F7_26_TypeDefinitionIndex = 32613;

class Class_1_905995C4C61F81F7_26 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_26*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_26*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_905995C4C61F81F7_26_TypeDefinitionIndex)->GetStaticField(0x63CB0);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	::Proto::ItemList* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_905995C4C61F81F7_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_26*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_26*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_26*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_905995C4C61F81F7_26* Clone()
	{
		return ((::Class_1_905995C4C61F81F7_26*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_905995C4C61F81F7_26* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_905995C4C61F81F7_26*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_905995C4C61F81F7_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_26*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_26_MERGEFROM_1_OFFSET))(this, a1);
	}
};
