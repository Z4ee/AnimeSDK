#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E59740C01A594634_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E076F80)
#define CLASS_1_E59740C01A594634_CLONE_OFFSET UNITYSDK_OFFSET(0x1E076B30)
#define CLASS_1_E59740C01A594634_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E076CE0)
#define CLASS_1_E59740C01A594634_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E076BB0)
#define CLASS_1_E59740C01A594634_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E076DD0)
#define CLASS_1_E59740C01A594634_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0770E0)
#define CLASS_1_E59740C01A594634_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E077090)
#define CLASS_1_E59740C01A594634_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E076B80)
#define CLASS_1_E59740C01A594634_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E0769E0)
#define CLASS_1_E59740C01A594634_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E076B90)
#define CLASS_1_E59740C01A594634_METHOD_1_F64A1871C5AC5ACE_OFFSET UNITYSDK_OFFSET(0x1E076BA0)
#define CLASS_1_E59740C01A594634_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E076A40)
#define CLASS_1_E59740C01A594634_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E076E20)
#define CLASS_1_E59740C01A594634_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E076E80)
#define CLASS_1_E59740C01A594634__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0772B0)
#define CLASS_1_E59740C01A594634__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E076AA0)
#define CLASS_1_E59740C01A594634__CTOR_OFFSET UNITYSDK_OFFSET(0x1E076A50)

inline static constexpr unsigned int Class_1_E59740C01A594634_TypeDefinitionIndex = 25312;

class Class_1_E59740C01A594634 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Double>** StaticGet_FDJODLDJEJP()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E59740C01A594634_TypeDefinitionIndex)->GetStaticField(0xE7E0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_E59740C01A594634*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E59740C01A594634*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E59740C01A594634_TypeDefinitionIndex)->GetStaticField(0xE7E8);
	}
	// static const ::System::Int32 KOEOEHIMOEI = 0x1; // 0x0
	// static const ::System::Int32 PLCKJBEHLCN = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* BPPLOCGIEKE; // 0x18
	::System::UInt32 LJDBCGPFFDH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E59740C01A594634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E59740C01A594634*))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E59740C01A594634*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E59740C01A594634*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E59740C01A594634* Clone()
	{
		return ((::Class_1_E59740C01A594634*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* Method_1_F64A1871C5AC5ACE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634_METHOD_1_F64A1871C5AC5ACE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E59740C01A594634* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E59740C01A594634*))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E59740C01A594634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E59740C01A594634*))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E59740C01A594634_MERGEFROM_1_OFFSET))(this, a1);
	}
};
