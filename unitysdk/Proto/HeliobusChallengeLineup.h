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
namespace System { class String; }

#define PROTO_HELIOBUSCHALLENGELINEUP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFFD330)
#define PROTO_HELIOBUSCHALLENGELINEUP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFFCEA0)
#define PROTO_HELIOBUSCHALLENGELINEUP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFFCFA0)
#define PROTO_HELIOBUSCHALLENGELINEUP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFFCF20)
#define PROTO_HELIOBUSCHALLENGELINEUP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFFD0A0)
#define PROTO_HELIOBUSCHALLENGELINEUP_GET_AVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x1DFFCF10)
#define PROTO_HELIOBUSCHALLENGELINEUP_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1DFFCED0)
#define PROTO_HELIOBUSCHALLENGELINEUP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DFFCD80)
#define PROTO_HELIOBUSCHALLENGELINEUP_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1DFFCEF0)
#define PROTO_HELIOBUSCHALLENGELINEUP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFFD4F0)
#define PROTO_HELIOBUSCHALLENGELINEUP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFFD490)
#define PROTO_HELIOBUSCHALLENGELINEUP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFFCDB0)
#define PROTO_HELIOBUSCHALLENGELINEUP_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1DFFCEE0)
#define PROTO_HELIOBUSCHALLENGELINEUP_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1DFFCF00)
#define PROTO_HELIOBUSCHALLENGELINEUP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFFD1A0)
#define PROTO_HELIOBUSCHALLENGELINEUP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFFD200)
#define PROTO_HELIOBUSCHALLENGELINEUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFFD5C0)
#define PROTO_HELIOBUSCHALLENGELINEUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFFCE10)
#define PROTO_HELIOBUSCHALLENGELINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFCDC0)

namespace Proto
{
	inline static constexpr unsigned int HeliobusChallengeLineup_TypeDefinitionIndex = 29769;

	class HeliobusChallengeLineup : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::HeliobusChallengeLineup*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::HeliobusChallengeLineup*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeLineup_TypeDefinitionIndex)->GetStaticField(0x43CF0);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_avatarIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeLineup_TypeDefinitionIndex)->GetStaticField(0x43CF8);
		}
		// static const ::System::Int32 GroupIdFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 SkillIdFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 AvatarIdListFieldNumber = 0xE; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* avatarIdList_; // 0x18
		::System::UInt32 groupId_; // 0x20
		::System::UInt32 skillId_; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::HeliobusChallengeLineup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::HeliobusChallengeLineup*))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::HeliobusChallengeLineup*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::HeliobusChallengeLineup*>*(*)())((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::HeliobusChallengeLineup* Clone()
		{
			return ((::Proto::HeliobusChallengeLineup*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_SET_SKILLID_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_AvatarIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_GET_AVATARIDLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::HeliobusChallengeLineup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::HeliobusChallengeLineup*))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::HeliobusChallengeLineup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::HeliobusChallengeLineup*))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
