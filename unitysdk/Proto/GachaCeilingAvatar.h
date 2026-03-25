#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_GACHACEILINGAVATAR_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1827E3E0)
#define PROTO_GACHACEILINGAVATAR_CLONE_OFFSET UNITYSDK_OFFSET(0x1827E120)
#define PROTO_GACHACEILINGAVATAR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1827E270)
#define PROTO_GACHACEILINGAVATAR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1827E1D0)
#define PROTO_GACHACEILINGAVATAR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1827E2D0)
#define PROTO_GACHACEILINGAVATAR_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1827E190)
#define PROTO_GACHACEILINGAVATAR_GET_REPEATEDCNT_OFFSET UNITYSDK_OFFSET(0x1827E1B0)
#define PROTO_GACHACEILINGAVATAR_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1827E530)
#define PROTO_GACHACEILINGAVATAR_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1827E4F0)
#define PROTO_GACHACEILINGAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1827E0D0)
#define PROTO_GACHACEILINGAVATAR_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1827E1A0)
#define PROTO_GACHACEILINGAVATAR_SET_REPEATEDCNT_OFFSET UNITYSDK_OFFSET(0x1827E1C0)
#define PROTO_GACHACEILINGAVATAR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1827E300)
#define PROTO_GACHACEILINGAVATAR_WRITETO_OFFSET UNITYSDK_OFFSET(0x1827E360)
#define PROTO_GACHACEILINGAVATAR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1827E0F0)
#define PROTO_GACHACEILINGAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1827E0E0)

namespace Proto
{
	inline static constexpr unsigned int GachaCeilingAvatar_TypeDefinitionIndex = 24691;

	class GachaCeilingAvatar : public ::System::Object
	{
	public:
		// static const ::System::Int32 AvatarIdFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 RepeatedCntFieldNumber = 0xD; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 repeatedCnt_; // 0x18
		::System::UInt32 avatarId_; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GachaCeilingAvatar* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GachaCeilingAvatar*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GachaCeilingAvatar* Clone()
		{
			return ((::Proto::GachaCeilingAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_SET_AVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_RepeatedCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_GET_REPEATEDCNT_OFFSET))(this);
		}

		::System::Void set_RepeatedCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_SET_REPEATEDCNT_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::GachaCeilingAvatar* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GachaCeilingAvatar*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GachaCeilingAvatar* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GachaCeilingAvatar*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
