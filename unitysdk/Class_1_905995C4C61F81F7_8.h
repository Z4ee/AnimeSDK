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

#define CLASS_1_905995C4C61F81F7_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ED6FDC0)
#define CLASS_1_905995C4C61F81F7_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1ED6F790)
#define CLASS_1_905995C4C61F81F7_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ED6FA00)
#define CLASS_1_905995C4C61F81F7_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ED6F870)
#define CLASS_1_905995C4C61F81F7_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ED6FB90)
#define CLASS_1_905995C4C61F81F7_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ED6FFB0)
#define CLASS_1_905995C4C61F81F7_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ED6FF10)
#define CLASS_1_905995C4C61F81F7_8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1ED6F850)
#define CLASS_1_905995C4C61F81F7_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1ED6F810)
#define CLASS_1_905995C4C61F81F7_8_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1ED6F6D0)
#define CLASS_1_905995C4C61F81F7_8_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1ED6F840)
#define CLASS_1_905995C4C61F81F7_8_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1ED6F830)
#define CLASS_1_905995C4C61F81F7_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1ED6F860)
#define CLASS_1_905995C4C61F81F7_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1ED6F820)
#define CLASS_1_905995C4C61F81F7_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ED6F700)
#define CLASS_1_905995C4C61F81F7_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ED6FC20)
#define CLASS_1_905995C4C61F81F7_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ED6FC80)
#define CLASS_1_905995C4C61F81F7_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED70190)
#define CLASS_1_905995C4C61F81F7_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED6F720)
#define CLASS_1_905995C4C61F81F7_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED6F710)

inline static constexpr unsigned int Class_1_905995C4C61F81F7_8_TypeDefinitionIndex = 29366;

class Class_1_905995C4C61F81F7_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_8*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_905995C4C61F81F7_8_TypeDefinitionIndex)->GetStaticField(0x3B6C0);
	}
	// static const ::System::Int32 PLDKENJLKME = 0x5; // 0x0
	// static const ::System::Int32 HPGDFCOBPGH = 0x2; // 0x0
	// static const ::System::Int32 BLNDLLNEPII = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Proto::ItemList* JEDJCPJBEOM; // 0x18
	::System::UInt32 OEIJJLNNBHF; // 0x20
	::System::UInt32 NAEACGPKNNH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_905995C4C61F81F7_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_8*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_8*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_905995C4C61F81F7_8* Clone()
	{
		return ((::Class_1_905995C4C61F81F7_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_905995C4C61F81F7_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_905995C4C61F81F7_8*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_905995C4C61F81F7_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_8*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
