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

#define CLASS_1_905995C4C61F81F7_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1986BD40)
#define CLASS_1_905995C4C61F81F7_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1986B9B0)
#define CLASS_1_905995C4C61F81F7_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1986BB50)
#define CLASS_1_905995C4C61F81F7_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1986BA90)
#define CLASS_1_905995C4C61F81F7_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1986BC00)
#define CLASS_1_905995C4C61F81F7_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1986BF30)
#define CLASS_1_905995C4C61F81F7_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1986BE90)
#define CLASS_1_905995C4C61F81F7_4_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1986BA70)
#define CLASS_1_905995C4C61F81F7_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1986BA30)
#define CLASS_1_905995C4C61F81F7_4_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1986B8F0)
#define CLASS_1_905995C4C61F81F7_4_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1986BA60)
#define CLASS_1_905995C4C61F81F7_4_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1986BA50)
#define CLASS_1_905995C4C61F81F7_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1986BA80)
#define CLASS_1_905995C4C61F81F7_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1986BA40)
#define CLASS_1_905995C4C61F81F7_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1986B920)
#define CLASS_1_905995C4C61F81F7_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1986BC40)
#define CLASS_1_905995C4C61F81F7_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1986BCA0)
#define CLASS_1_905995C4C61F81F7_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1986C000)
#define CLASS_1_905995C4C61F81F7_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1986B940)
#define CLASS_1_905995C4C61F81F7_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1986B930)

inline static constexpr unsigned int Class_1_905995C4C61F81F7_4_TypeDefinitionIndex = 24910;

class Class_1_905995C4C61F81F7_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_905995C4C61F81F7_4_TypeDefinitionIndex)->GetStaticField(0x4A200);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Proto::ItemList* Field_1_5; // 0x18
	::System::UInt32 Field_1_3; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_905995C4C61F81F7_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_4*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_4*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_905995C4C61F81F7_4* Clone()
	{
		return ((::Class_1_905995C4C61F81F7_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_905995C4C61F81F7_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_905995C4C61F81F7_4*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_905995C4C61F81F7_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_4*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
