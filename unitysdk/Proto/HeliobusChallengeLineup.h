#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_HELIOBUSCHALLENGELINEUP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18286130)
#define PROTO_HELIOBUSCHALLENGELINEUP_CLONE_OFFSET UNITYSDK_OFFSET(0x18285D30)
#define PROTO_HELIOBUSCHALLENGELINEUP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18285E60)
#define PROTO_HELIOBUSCHALLENGELINEUP_EQUALS_OFFSET UNITYSDK_OFFSET(0x18285DB0)
#define PROTO_HELIOBUSCHALLENGELINEUP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18285F00)
#define PROTO_HELIOBUSCHALLENGELINEUP_GET_AVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x18285D60)
#define PROTO_HELIOBUSCHALLENGELINEUP_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x18285D90)
#define PROTO_HELIOBUSCHALLENGELINEUP_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x18285D70)
#define PROTO_HELIOBUSCHALLENGELINEUP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18286300)
#define PROTO_HELIOBUSCHALLENGELINEUP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182862A0)
#define PROTO_HELIOBUSCHALLENGELINEUP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18285C40)
#define PROTO_HELIOBUSCHALLENGELINEUP_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x18285DA0)
#define PROTO_HELIOBUSCHALLENGELINEUP_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x18285D80)
#define PROTO_HELIOBUSCHALLENGELINEUP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18286000)
#define PROTO_HELIOBUSCHALLENGELINEUP_WRITETO_OFFSET UNITYSDK_OFFSET(0x18286060)
#define PROTO_HELIOBUSCHALLENGELINEUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x182863D0)
#define PROTO_HELIOBUSCHALLENGELINEUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18285CA0)
#define PROTO_HELIOBUSCHALLENGELINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18285C50)

namespace Proto
{
	inline static constexpr unsigned int HeliobusChallengeLineup_TypeDefinitionIndex = 25014;

	class HeliobusChallengeLineup : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_avatarIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeLineup_TypeDefinitionIndex)->GetStaticField(0x1AAC0);
		}
		// static const ::System::Int32 AvatarIdListFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 SkillIdFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 GroupIdFieldNumber = 0x4; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* avatarIdList_; // 0x18
		::System::UInt32 skillId_; // 0x20
		::System::UInt32 groupId_; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::HeliobusChallengeLineup* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::HeliobusChallengeLineup*))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP__CCTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::HeliobusChallengeLineup* Clone()
		{
			return ((::Proto::HeliobusChallengeLineup*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_AvatarIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_GET_AVATARIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_SkillId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_SET_SKILLID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_SET_GROUPID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::HeliobusChallengeLineup* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::HeliobusChallengeLineup*))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::HeliobusChallengeLineup* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::HeliobusChallengeLineup*))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
