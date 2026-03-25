#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_STRONGCHALLENGEAVATAR_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1829D0E0)
#define PROTO_STRONGCHALLENGEAVATAR_CLONE_OFFSET UNITYSDK_OFFSET(0x1829CE10)
#define PROTO_STRONGCHALLENGEAVATAR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1829CF60)
#define PROTO_STRONGCHALLENGEAVATAR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1829CEC0)
#define PROTO_STRONGCHALLENGEAVATAR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1829CFC0)
#define PROTO_STRONGCHALLENGEAVATAR_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1829CE80)
#define PROTO_STRONGCHALLENGEAVATAR_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1829CEA0)
#define PROTO_STRONGCHALLENGEAVATAR_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1829D270)
#define PROTO_STRONGCHALLENGEAVATAR_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1829D230)
#define PROTO_STRONGCHALLENGEAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1829CDC0)
#define PROTO_STRONGCHALLENGEAVATAR_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1829CE90)
#define PROTO_STRONGCHALLENGEAVATAR_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1829CEB0)
#define PROTO_STRONGCHALLENGEAVATAR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1829CFF0)
#define PROTO_STRONGCHALLENGEAVATAR_WRITETO_OFFSET UNITYSDK_OFFSET(0x1829D050)
#define PROTO_STRONGCHALLENGEAVATAR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1829CDE0)
#define PROTO_STRONGCHALLENGEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1829CDD0)

namespace Proto
{
	inline static constexpr unsigned int StrongChallengeAvatar_TypeDefinitionIndex = 27189;

	class StrongChallengeAvatar : public ::System::Object
	{
	public:
		// static const ::System::Int32 AvatarIdFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 AvatarTypeFieldNumber = 0xD; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Enum_3_A35B38E5F9115A76 avatarType_; // 0x18
		::System::UInt32 avatarId_; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::StrongChallengeAvatar* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::StrongChallengeAvatar* Clone()
		{
			return ((::Proto::StrongChallengeAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_SET_AVATARID_OFFSET))(this, value);
		}

		::Enum_3_A35B38E5F9115A76 get_AvatarType()
		{
			return ((::Enum_3_A35B38E5F9115A76(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_GET_AVATARTYPE_OFFSET))(this);
		}

		::System::Void set_AvatarType(::Enum_3_A35B38E5F9115A76 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_SET_AVATARTYPE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::StrongChallengeAvatar* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::StrongChallengeAvatar* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
