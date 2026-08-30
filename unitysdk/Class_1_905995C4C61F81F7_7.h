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

#define CLASS_1_905995C4C61F81F7_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DB91E20)
#define CLASS_1_905995C4C61F81F7_7_CLONE_OFFSET UNITYSDK_OFFSET(0x1DB91820)
#define CLASS_1_905995C4C61F81F7_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DB91A60)
#define CLASS_1_905995C4C61F81F7_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DB91930)
#define CLASS_1_905995C4C61F81F7_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DB91BF0)
#define CLASS_1_905995C4C61F81F7_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DB92010)
#define CLASS_1_905995C4C61F81F7_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DB91F70)
#define CLASS_1_905995C4C61F81F7_7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DB91910)
#define CLASS_1_905995C4C61F81F7_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DB918D0)
#define CLASS_1_905995C4C61F81F7_7_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DB91730)
#define CLASS_1_905995C4C61F81F7_7_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1DB91900)
#define CLASS_1_905995C4C61F81F7_7_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1DB918F0)
#define CLASS_1_905995C4C61F81F7_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DB91920)
#define CLASS_1_905995C4C61F81F7_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DB918E0)
#define CLASS_1_905995C4C61F81F7_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DB91790)
#define CLASS_1_905995C4C61F81F7_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB91C80)
#define CLASS_1_905995C4C61F81F7_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DB91CE0)
#define CLASS_1_905995C4C61F81F7_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB921F0)
#define CLASS_1_905995C4C61F81F7_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB917B0)
#define CLASS_1_905995C4C61F81F7_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB917A0)

inline static constexpr unsigned int Class_1_905995C4C61F81F7_7_TypeDefinitionIndex = 27547;

class Class_1_905995C4C61F81F7_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_7*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_905995C4C61F81F7_7_TypeDefinitionIndex)->GetStaticField(0x45A60);
	}
	// static const ::System::Int32 FEGJODHHKKJ = 0xB; // 0x0
	// static const ::System::Int32 IBJGFEEBBID = 0xE; // 0x0
	// static const ::System::Int32 FBCFBAPNOGL = 0xD; // 0x0
	::Proto::ItemList* EHCHIBLKBBP; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 EHCFPHJABDL; // 0x20
	::System::UInt32 AJPNGCJCMEB; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_905995C4C61F81F7_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_7*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_7*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_905995C4C61F81F7_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_905995C4C61F81F7_7* Clone()
	{
		return ((::Class_1_905995C4C61F81F7_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_905995C4C61F81F7_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_905995C4C61F81F7_7*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_905995C4C61F81F7_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_905995C4C61F81F7_7*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_905995C4C61F81F7_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
