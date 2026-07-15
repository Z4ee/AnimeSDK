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
namespace Proto { class ItemList; }
namespace System { class String; }

#define PROTO_TAKEQUESTREWARDSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BEF93E0)
#define PROTO_TAKEQUESTREWARDSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1BEF8D40)
#define PROTO_TAKEQUESTREWARDSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BEF8E00)
#define PROTO_TAKEQUESTREWARDSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BEF8DD0)
#define PROTO_TAKEQUESTREWARDSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BEF8FE0)
#define PROTO_TAKEQUESTREWARDSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BEF8AD0)
#define PROTO_TAKEQUESTREWARDSCRSP_GET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x1BEF8D70)
#define PROTO_TAKEQUESTREWARDSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1BEF8D80)
#define PROTO_TAKEQUESTREWARDSCRSP_GET_REWARD_OFFSET UNITYSDK_OFFSET(0x1BEF8DB0)
#define PROTO_TAKEQUESTREWARDSCRSP_GET_SUCCQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x1BEF8DA0)
#define PROTO_TAKEQUESTREWARDSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BEF96B0)
#define PROTO_TAKEQUESTREWARDSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BEF9540)
#define PROTO_TAKEQUESTREWARDSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BEF8B00)
#define PROTO_TAKEQUESTREWARDSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1BEF8D90)
#define PROTO_TAKEQUESTREWARDSCRSP_SET_REWARD_OFFSET UNITYSDK_OFFSET(0x1BEF8DC0)
#define PROTO_TAKEQUESTREWARDSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BEF9200)
#define PROTO_TAKEQUESTREWARDSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BEF9260)
#define PROTO_TAKEQUESTREWARDSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEF9820)
#define PROTO_TAKEQUESTREWARDSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEF8BA0)
#define PROTO_TAKEQUESTREWARDSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEF8B10)

namespace Proto
{
	inline static constexpr unsigned int TakeQuestRewardScRsp_TypeDefinitionIndex = 30951;

	class TakeQuestRewardScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_succQuestIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TakeQuestRewardScRsp_TypeDefinitionIndex)->GetStaticField(0x40CC0);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_questIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TakeQuestRewardScRsp_TypeDefinitionIndex)->GetStaticField(0x40CC8);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::TakeQuestRewardScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::TakeQuestRewardScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(TakeQuestRewardScRsp_TypeDefinitionIndex)->GetStaticField(0x40CD0);
		}
		// static const ::System::Int32 QuestIdListFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 SuccQuestIdListFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 RewardFieldNumber = 0x9; // 0x0
		::Proto::ItemList* reward_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* succQuestIdList_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* questIdList_; // 0x28
		::System::UInt32 retcode_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::TakeQuestRewardScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TakeQuestRewardScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::TakeQuestRewardScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::TakeQuestRewardScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::TakeQuestRewardScRsp* Clone()
		{
			return ((::Proto::TakeQuestRewardScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_QuestIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_GET_QUESTIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_SuccQuestIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_GET_SUCCQUESTIDLIST_OFFSET))(this);
		}

		::Proto::ItemList* get_Reward()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_GET_REWARD_OFFSET))(this);
		}

		::System::Void set_Reward(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_SET_REWARD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::TakeQuestRewardScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::TakeQuestRewardScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::TakeQuestRewardScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TakeQuestRewardScRsp*))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_TAKEQUESTREWARDSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
