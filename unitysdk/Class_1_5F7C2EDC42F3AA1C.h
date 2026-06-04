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

#define CLASS_1_5F7C2EDC42F3AA1C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A9462A0)
#define CLASS_1_5F7C2EDC42F3AA1C_CLONE_OFFSET UNITYSDK_OFFSET(0x1A945E20)
#define CLASS_1_5F7C2EDC42F3AA1C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A945FC0)
#define CLASS_1_5F7C2EDC42F3AA1C_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A945EA0)
#define CLASS_1_5F7C2EDC42F3AA1C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A946070)
#define CLASS_1_5F7C2EDC42F3AA1C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A946470)
#define CLASS_1_5F7C2EDC42F3AA1C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A9463D0)
#define CLASS_1_5F7C2EDC42F3AA1C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A945E80)
#define CLASS_1_5F7C2EDC42F3AA1C_METHOD_1_10C86DED0B15D222_OFFSET UNITYSDK_OFFSET(0x1A945E70)
#define CLASS_1_5F7C2EDC42F3AA1C_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A945CA0)
#define CLASS_1_5F7C2EDC42F3AA1C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A945E90)
#define CLASS_1_5F7C2EDC42F3AA1C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A945D00)
#define CLASS_1_5F7C2EDC42F3AA1C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A946160)
#define CLASS_1_5F7C2EDC42F3AA1C_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A9461C0)
#define CLASS_1_5F7C2EDC42F3AA1C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A946640)
#define CLASS_1_5F7C2EDC42F3AA1C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A945D60)
#define CLASS_1_5F7C2EDC42F3AA1C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A945D10)

inline static constexpr unsigned int Class_1_5F7C2EDC42F3AA1C_TypeDefinitionIndex = 31090;

class Class_1_5F7C2EDC42F3AA1C : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F7C2EDC42F3AA1C_TypeDefinitionIndex)->GetStaticField(0x1BE90);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_5F7C2EDC42F3AA1C*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5F7C2EDC42F3AA1C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5F7C2EDC42F3AA1C_TypeDefinitionIndex)->GetStaticField(0x1BE98);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5F7C2EDC42F3AA1C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F7C2EDC42F3AA1C*))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5F7C2EDC42F3AA1C*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5F7C2EDC42F3AA1C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5F7C2EDC42F3AA1C* Clone()
	{
		return ((::Class_1_5F7C2EDC42F3AA1C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>* Method_1_10C86DED0B15D222()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::RogueAdventureRoomGameplayWolfGunTarget*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C_METHOD_1_10C86DED0B15D222_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5F7C2EDC42F3AA1C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5F7C2EDC42F3AA1C*))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5F7C2EDC42F3AA1C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F7C2EDC42F3AA1C*))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5F7C2EDC42F3AA1C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
