#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_766E1CF11E204F43_10;
class Class_1_D17272E82AE804C2_768;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_GETRAIDINFOSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0F0DC0)
#define PROTO_GETRAIDINFOSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0F07D0)
#define PROTO_GETRAIDINFOSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0F0880)
#define PROTO_GETRAIDINFOSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0F0850)
#define PROTO_GETRAIDINFOSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0F0990)
#define PROTO_GETRAIDINFOSCRSP_GET_CHALLENGERAIDLIST_OFFSET UNITYSDK_OFFSET(0x1A0F0800)
#define PROTO_GETRAIDINFOSCRSP_GET_CHALLENGETAKENREWARDIDLIST_OFFSET UNITYSDK_OFFSET(0x1A0F0820)
#define PROTO_GETRAIDINFOSCRSP_GET_FINISHEDRAIDINFOLIST_OFFSET UNITYSDK_OFFSET(0x1A0F0810)
#define PROTO_GETRAIDINFOSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A0F05B0)
#define PROTO_GETRAIDINFOSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1A0F0830)
#define PROTO_GETRAIDINFOSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0F1070)
#define PROTO_GETRAIDINFOSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0F0F50)
#define PROTO_GETRAIDINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0F05E0)
#define PROTO_GETRAIDINFOSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1A0F0840)
#define PROTO_GETRAIDINFOSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0F0BF0)
#define PROTO_GETRAIDINFOSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0F0C50)
#define PROTO_GETRAIDINFOSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0F11F0)
#define PROTO_GETRAIDINFOSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0F0690)
#define PROTO_GETRAIDINFOSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F05F0)

namespace Proto
{
	inline static constexpr unsigned int GetRaidInfoScRsp_TypeDefinitionIndex = 30469;

	class GetRaidInfoScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_768*>** StaticGet__repeated_challengeRaidList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_768*>**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x435A0);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::GetRaidInfoScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GetRaidInfoScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x435A8);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_challengeTakenRewardIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x435B0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_766E1CF11E204F43_10*>** StaticGet__repeated_finishedRaidInfoList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_766E1CF11E204F43_10*>**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x435B8);
		}
		// static const ::System::Int32 ChallengeRaidListFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 FinishedRaidInfoListFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 ChallengeTakenRewardIdListFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x6; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* challengeTakenRewardIdList_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_766E1CF11E204F43_10*>* finishedRaidInfoList_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_768*>* challengeRaidList_; // 0x28
		::System::UInt32 retcode_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetRaidInfoScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::GetRaidInfoScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::GetRaidInfoScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetRaidInfoScRsp* Clone()
		{
			return ((::Proto::GetRaidInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_768*>* get_ChallengeRaidList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_768*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_CHALLENGERAIDLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_766E1CF11E204F43_10*>* get_FinishedRaidInfoList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_766E1CF11E204F43_10*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_FINISHEDRAIDINFOLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_ChallengeTakenRewardIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_CHALLENGETAKENREWARDIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::GetRaidInfoScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetRaidInfoScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
