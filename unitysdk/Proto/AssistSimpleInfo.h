#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ASSISTSIMPLEINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182737E0)
#define PROTO_ASSISTSIMPLEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x18273460)
#define PROTO_ASSISTSIMPLEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18273600)
#define PROTO_ASSISTSIMPLEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x18273550)
#define PROTO_ASSISTSIMPLEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18273670)
#define PROTO_ASSISTSIMPLEINFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x18273510)
#define PROTO_ASSISTSIMPLEINFO_GET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0x18273530)
#define PROTO_ASSISTSIMPLEINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x182734D0)
#define PROTO_ASSISTSIMPLEINFO_GET_POS_OFFSET UNITYSDK_OFFSET(0x182734F0)
#define PROTO_ASSISTSIMPLEINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18273A40)
#define PROTO_ASSISTSIMPLEINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182739F0)
#define PROTO_ASSISTSIMPLEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18273410)
#define PROTO_ASSISTSIMPLEINFO_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x18273520)
#define PROTO_ASSISTSIMPLEINFO_SET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0x18273540)
#define PROTO_ASSISTSIMPLEINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x182734E0)
#define PROTO_ASSISTSIMPLEINFO_SET_POS_OFFSET UNITYSDK_OFFSET(0x18273500)
#define PROTO_ASSISTSIMPLEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182736B0)
#define PROTO_ASSISTSIMPLEINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x18273710)
#define PROTO_ASSISTSIMPLEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18273430)
#define PROTO_ASSISTSIMPLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18273420)

namespace Proto
{
	inline static constexpr unsigned int AssistSimpleInfo_TypeDefinitionIndex = 24582;

	class AssistSimpleInfo : public ::System::Object
	{
	public:
		// static const ::System::Int32 LevelFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 PosFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 AvatarIdFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 DressedSkinIdFieldNumber = 0xF; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 dressedSkinId_; // 0x18
		::System::UInt32 pos_; // 0x1C
		::System::UInt32 avatarId_; // 0x20
		::System::UInt32 level_; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::AssistSimpleInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AssistSimpleInfo*))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::AssistSimpleInfo* Clone()
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Pos()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_SET_POS_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_SET_AVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_DressedSkinId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_GET_DRESSEDSKINID_OFFSET))(this);
		}

		::System::Void set_DressedSkinId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_SET_DRESSEDSKINID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::AssistSimpleInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::AssistSimpleInfo*))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::AssistSimpleInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AssistSimpleInfo*))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
