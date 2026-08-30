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

#define CLASS_1_EA02AD81FF55A3CC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3B9850)
#define CLASS_1_EA02AD81FF55A3CC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3B9250)
#define CLASS_1_EA02AD81FF55A3CC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3B94F0)
#define CLASS_1_EA02AD81FF55A3CC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3B9340)
#define CLASS_1_EA02AD81FF55A3CC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3B9670)
#define CLASS_1_EA02AD81FF55A3CC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3B99B0)
#define CLASS_1_EA02AD81FF55A3CC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3B9920)
#define CLASS_1_EA02AD81FF55A3CC_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E3B9320)
#define CLASS_1_EA02AD81FF55A3CC_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E3B9160)
#define CLASS_1_EA02AD81FF55A3CC_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1E3B9310)
#define CLASS_1_EA02AD81FF55A3CC_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1E3B9300)
#define CLASS_1_EA02AD81FF55A3CC_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E3B9330)
#define CLASS_1_EA02AD81FF55A3CC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3B91C0)
#define CLASS_1_EA02AD81FF55A3CC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3B9710)
#define CLASS_1_EA02AD81FF55A3CC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3B9770)
#define CLASS_1_EA02AD81FF55A3CC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B9B70)
#define CLASS_1_EA02AD81FF55A3CC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3B91E0)
#define CLASS_1_EA02AD81FF55A3CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B91D0)

inline static constexpr unsigned int Class_1_EA02AD81FF55A3CC_TypeDefinitionIndex = 26149;

class Class_1_EA02AD81FF55A3CC : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EA02AD81FF55A3CC*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EA02AD81FF55A3CC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA02AD81FF55A3CC_TypeDefinitionIndex)->GetStaticField(0x3A430);
	}
	// static const ::System::Int32 DPPAFBAHEFH = 0xE; // 0x0
	// static const ::System::Int32 AOEBNCAILPJ = 0xF; // 0x0
	::Proto::ItemList* DALKEINMPBH; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 DNKADAFBILN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EA02AD81FF55A3CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA02AD81FF55A3CC*))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EA02AD81FF55A3CC*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EA02AD81FF55A3CC*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EA02AD81FF55A3CC* Clone()
	{
		return ((::Class_1_EA02AD81FF55A3CC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EA02AD81FF55A3CC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EA02AD81FF55A3CC*))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EA02AD81FF55A3CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA02AD81FF55A3CC*))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA02AD81FF55A3CC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
