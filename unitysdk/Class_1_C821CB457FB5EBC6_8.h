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

#define CLASS_1_C821CB457FB5EBC6_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EDBE8B0)
#define CLASS_1_C821CB457FB5EBC6_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1EDBE320)
#define CLASS_1_C821CB457FB5EBC6_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EDBE560)
#define CLASS_1_C821CB457FB5EBC6_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EDBE3E0)
#define CLASS_1_C821CB457FB5EBC6_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EDBE6E0)
#define CLASS_1_C821CB457FB5EBC6_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EDBEA10)
#define CLASS_1_C821CB457FB5EBC6_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EDBE980)
#define CLASS_1_C821CB457FB5EBC6_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EDBE3A0)
#define CLASS_1_C821CB457FB5EBC6_8_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EDBE260)
#define CLASS_1_C821CB457FB5EBC6_8_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1EDBE3D0)
#define CLASS_1_C821CB457FB5EBC6_8_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1EDBE3C0)
#define CLASS_1_C821CB457FB5EBC6_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EDBE3B0)
#define CLASS_1_C821CB457FB5EBC6_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EDBE290)
#define CLASS_1_C821CB457FB5EBC6_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EDBE770)
#define CLASS_1_C821CB457FB5EBC6_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EDBE7D0)
#define CLASS_1_C821CB457FB5EBC6_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDBEBD0)
#define CLASS_1_C821CB457FB5EBC6_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EDBE2B0)
#define CLASS_1_C821CB457FB5EBC6_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDBE2A0)

inline static constexpr unsigned int Class_1_C821CB457FB5EBC6_8_TypeDefinitionIndex = 29633;

class Class_1_C821CB457FB5EBC6_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_8*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C821CB457FB5EBC6_8_TypeDefinitionIndex)->GetStaticField(0x52200);
	}
	// static const ::System::Int32 PLDKENJLKME = 0x5; // 0x0
	// static const ::System::Int32 DFABHHAPAEA = 0xF; // 0x0
	::Proto::ItemList* MIEINLKPIMJ; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C821CB457FB5EBC6_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_8*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_8*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C821CB457FB5EBC6_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C821CB457FB5EBC6_8* Clone()
	{
		return ((::Class_1_C821CB457FB5EBC6_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C821CB457FB5EBC6_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_8*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C821CB457FB5EBC6_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_8*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C821CB457FB5EBC6_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
