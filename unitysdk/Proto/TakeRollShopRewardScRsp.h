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

#define PROTO_TAKEROLLSHOPREWARDSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19360A30)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x19360640)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19360800)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x19360740)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193608C0)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x19360720)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19360580)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x19360700)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_GET_REWARD_OFFSET UNITYSDK_OFFSET(0x193606E0)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_GET_ROLLSHOPID_OFFSET UNITYSDK_OFFSET(0x193606C0)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19360CA0)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19360BF0)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193605B0)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_SET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x19360730)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x19360710)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_SET_REWARD_OFFSET UNITYSDK_OFFSET(0x193606F0)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_SET_ROLLSHOPID_OFFSET UNITYSDK_OFFSET(0x193606D0)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19360900)
#define PROTO_TAKEROLLSHOPREWARDSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x19360960)
#define PROTO_TAKEROLLSHOPREWARDSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x19360D90)
#define PROTO_TAKEROLLSHOPREWARDSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193605D0)
#define PROTO_TAKEROLLSHOPREWARDSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x193605C0)

namespace Proto
{
	inline static constexpr unsigned int TakeRollShopRewardScRsp_TypeDefinitionIndex = 31965;

	class TakeRollShopRewardScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::TakeRollShopRewardScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::TakeRollShopRewardScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(TakeRollShopRewardScRsp_TypeDefinitionIndex)->GetStaticField(0x660A0);
		}
		// static const ::System::Int32 RollShopIdFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 RewardFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 GroupTypeFieldNumber = 0x6; // 0x0
		::Proto::ItemList* reward_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 retcode_; // 0x20
		::System::UInt32 rollShopId_; // 0x24
		::System::UInt32 groupType_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::TakeRollShopRewardScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TakeRollShopRewardScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::TakeRollShopRewardScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::TakeRollShopRewardScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::TakeRollShopRewardScRsp* Clone()
		{
			return ((::Proto::TakeRollShopRewardScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_RollShopId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_GET_ROLLSHOPID_OFFSET))(this);
		}

		::System::Void set_RollShopId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_SET_ROLLSHOPID_OFFSET))(this, value);
		}

		::Proto::ItemList* get_Reward()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_GET_REWARD_OFFSET))(this);
		}

		::System::Void set_Reward(::Proto::ItemList* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_SET_REWARD_OFFSET))(this, value);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::Void set_GroupType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_SET_GROUPTYPE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::TakeRollShopRewardScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::TakeRollShopRewardScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::TakeRollShopRewardScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TakeRollShopRewardScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
