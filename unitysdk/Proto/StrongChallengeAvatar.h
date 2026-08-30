#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_STRONGCHALLENGEAVATAR_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD55AE0)
#define PROTO_STRONGCHALLENGEAVATAR_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD556D0)
#define PROTO_STRONGCHALLENGEAVATAR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD55890)
#define PROTO_STRONGCHALLENGEAVATAR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD55780)
#define PROTO_STRONGCHALLENGEAVATAR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD55960)
#define PROTO_STRONGCHALLENGEAVATAR_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1DD55760)
#define PROTO_STRONGCHALLENGEAVATAR_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1DD55740)
#define PROTO_STRONGCHALLENGEAVATAR_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DD55620)
#define PROTO_STRONGCHALLENGEAVATAR_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD55C70)
#define PROTO_STRONGCHALLENGEAVATAR_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD55C30)
#define PROTO_STRONGCHALLENGEAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD55680)
#define PROTO_STRONGCHALLENGEAVATAR_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1DD55770)
#define PROTO_STRONGCHALLENGEAVATAR_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1DD55750)
#define PROTO_STRONGCHALLENGEAVATAR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD55990)
#define PROTO_STRONGCHALLENGEAVATAR_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD559F0)
#define PROTO_STRONGCHALLENGEAVATAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD55DF0)
#define PROTO_STRONGCHALLENGEAVATAR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD556A0)
#define PROTO_STRONGCHALLENGEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD55690)

namespace Proto
{
	inline static constexpr unsigned int StrongChallengeAvatar_TypeDefinitionIndex = 33598;

	class StrongChallengeAvatar : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::StrongChallengeAvatar*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::StrongChallengeAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeAvatar_TypeDefinitionIndex)->GetStaticField(0x1B7E0);
		}
		// static const ::System::Int32 AvatarTypeFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 AvatarIdFieldNumber = 0x6; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 avatarId_; // 0x18
		::Enum_3_01618AD0437C8486 avatarType_; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::StrongChallengeAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::StrongChallengeAvatar*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::StrongChallengeAvatar*>*(*)())((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::StrongChallengeAvatar* Clone()
		{
			return ((::Proto::StrongChallengeAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_CLONE_OFFSET))(this);
		}

		::Enum_3_01618AD0437C8486 get_AvatarType()
		{
			return ((::Enum_3_01618AD0437C8486(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_GET_AVATARTYPE_OFFSET))(this);
		}

		::System::Void set_AvatarType(::Enum_3_01618AD0437C8486 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_SET_AVATARTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::StrongChallengeAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::StrongChallengeAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
