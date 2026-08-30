#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class RogueAdventureRoomGameplayWolfGunTarget; }
namespace System { class String; }

#define CLASS_1_C80CD3A7F22118CD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E11BF70)
#define CLASS_1_C80CD3A7F22118CD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E11BA70)
#define CLASS_1_C80CD3A7F22118CD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E11BC80)
#define CLASS_1_C80CD3A7F22118CD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E11BAF0)
#define CLASS_1_C80CD3A7F22118CD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E11BDA0)
#define CLASS_1_C80CD3A7F22118CD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E11C140)
#define CLASS_1_C80CD3A7F22118CD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E11C0A0)
#define CLASS_1_C80CD3A7F22118CD_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E11BAD0)
#define CLASS_1_C80CD3A7F22118CD_METHOD_1_10C86DED0B15D222_OFFSET UNITYSDK_OFFSET(0x1E11BAC0)
#define CLASS_1_C80CD3A7F22118CD_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E11B8F0)
#define CLASS_1_C80CD3A7F22118CD_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E11BAE0)
#define CLASS_1_C80CD3A7F22118CD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E11B950)
#define CLASS_1_C80CD3A7F22118CD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E11BE10)
#define CLASS_1_C80CD3A7F22118CD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E11BE70)
#define CLASS_1_C80CD3A7F22118CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11C310)
#define CLASS_1_C80CD3A7F22118CD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E11B9B0)
#define CLASS_1_C80CD3A7F22118CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E11B960)

inline static constexpr unsigned int Class_1_C80CD3A7F22118CD_TypeDefinitionIndex = 32283;

class Class_1_C80CD3A7F22118CD : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C80CD3A7F22118CD*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C80CD3A7F22118CD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C80CD3A7F22118CD_TypeDefinitionIndex)->GetStaticField(0x42610);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>** StaticGet_MNCHCOFMDMM()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C80CD3A7F22118CD_TypeDefinitionIndex)->GetStaticField(0x42618);
	}
	// static const ::System::Int32 AIICFPIDLIB = 0x7; // 0x0
	// static const ::System::Int32 GFHDHLMBGAJ = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>* NKAGCEJIBEN; // 0x18
	::System::UInt32 AFDGLKJENFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C80CD3A7F22118CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C80CD3A7F22118CD*))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C80CD3A7F22118CD*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C80CD3A7F22118CD*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C80CD3A7F22118CD* Clone()
	{
		return ((::Class_1_C80CD3A7F22118CD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>* Method_1_10C86DED0B15D222()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD_METHOD_1_10C86DED0B15D222_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C80CD3A7F22118CD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C80CD3A7F22118CD*))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C80CD3A7F22118CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C80CD3A7F22118CD*))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD_MERGEFROM_1_OFFSET))(this, a1);
	}
};
