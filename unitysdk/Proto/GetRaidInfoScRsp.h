#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5A55E8BED8FA46A4_5;
class Class_1_D17272E82AE804C2_732;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_GETRAIDINFOSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1933DE80)
#define PROTO_GETRAIDINFOSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1933D850)
#define PROTO_GETRAIDINFOSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1933D900)
#define PROTO_GETRAIDINFOSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1933D8D0)
#define PROTO_GETRAIDINFOSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1933DA20)
#define PROTO_GETRAIDINFOSCRSP_GET_CHALLENGERAIDLIST_OFFSET UNITYSDK_OFFSET(0x1933D8B0)
#define PROTO_GETRAIDINFOSCRSP_GET_CHALLENGETAKENREWARDIDLIST_OFFSET UNITYSDK_OFFSET(0x1933D8C0)
#define PROTO_GETRAIDINFOSCRSP_GET_FINISHEDRAIDINFOLIST_OFFSET UNITYSDK_OFFSET(0x1933D8A0)
#define PROTO_GETRAIDINFOSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1933D630)
#define PROTO_GETRAIDINFOSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1933D880)
#define PROTO_GETRAIDINFOSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1933E110)
#define PROTO_GETRAIDINFOSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1933DFF0)
#define PROTO_GETRAIDINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1933D660)
#define PROTO_GETRAIDINFOSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1933D890)
#define PROTO_GETRAIDINFOSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1933DCB0)
#define PROTO_GETRAIDINFOSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1933DD10)
#define PROTO_GETRAIDINFOSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1933E280)
#define PROTO_GETRAIDINFOSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1933D710)
#define PROTO_GETRAIDINFOSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1933D670)

namespace Proto
{
	inline static constexpr unsigned int GetRaidInfoScRsp_TypeDefinitionIndex = 30362;

	class GetRaidInfoScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_732*>** StaticGet__repeated_challengeRaidList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_732*>**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x63C20);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_5A55E8BED8FA46A4_5*>** StaticGet__repeated_finishedRaidInfoList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_5A55E8BED8FA46A4_5*>**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x63C28);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::GetRaidInfoScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GetRaidInfoScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x63C30);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_challengeTakenRewardIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x63C38);
		}
		// static const ::System::Int32 RetcodeFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 FinishedRaidInfoListFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 ChallengeRaidListFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 ChallengeTakenRewardIdListFieldNumber = 0x7; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_732*>* challengeRaidList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5A55E8BED8FA46A4_5*>* finishedRaidInfoList_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* challengeTakenRewardIdList_; // 0x28
		::System::UInt32 retcode_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetRaidInfoScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP__CTOR_1_OFFSET))(this, other);
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

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5A55E8BED8FA46A4_5*>* get_FinishedRaidInfoList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5A55E8BED8FA46A4_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_FINISHEDRAIDINFOLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_732*>* get_ChallengeRaidList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_732*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_CHALLENGERAIDLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_ChallengeTakenRewardIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_CHALLENGETAKENREWARDIDLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::GetRaidInfoScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetRaidInfoScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
