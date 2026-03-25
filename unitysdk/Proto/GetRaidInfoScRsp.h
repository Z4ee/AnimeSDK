#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B3B48B7EEC81A99A_6;
class Class_1_FA4F4A67B1C04320_697;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_GETRAIDINFOSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18281C10)
#define PROTO_GETRAIDINFOSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x18281620)
#define PROTO_GETRAIDINFOSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182816D0)
#define PROTO_GETRAIDINFOSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x182816A0)
#define PROTO_GETRAIDINFOSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182817F0)
#define PROTO_GETRAIDINFOSCRSP_GET_CHALLENGERAIDLIST_OFFSET UNITYSDK_OFFSET(0x18281680)
#define PROTO_GETRAIDINFOSCRSP_GET_CHALLENGETAKENREWARDIDLIST_OFFSET UNITYSDK_OFFSET(0x18281650)
#define PROTO_GETRAIDINFOSCRSP_GET_FINISHEDRAIDINFOLIST_OFFSET UNITYSDK_OFFSET(0x18281690)
#define PROTO_GETRAIDINFOSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x18281660)
#define PROTO_GETRAIDINFOSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18281EE0)
#define PROTO_GETRAIDINFOSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18281DC0)
#define PROTO_GETRAIDINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18281440)
#define PROTO_GETRAIDINFOSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x18281670)
#define PROTO_GETRAIDINFOSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18281A70)
#define PROTO_GETRAIDINFOSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x18281AD0)
#define PROTO_GETRAIDINFOSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x18282050)
#define PROTO_GETRAIDINFOSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182814E0)
#define PROTO_GETRAIDINFOSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x18281450)

namespace Proto
{
	inline static constexpr unsigned int GetRaidInfoScRsp_TypeDefinitionIndex = 26140;

	class GetRaidInfoScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_challengeTakenRewardIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x1A750);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_B3B48B7EEC81A99A_6*>** StaticGet__repeated_finishedRaidInfoList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_B3B48B7EEC81A99A_6*>**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x1A758);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_697*>** StaticGet__repeated_challengeRaidList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_697*>**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x1A760);
		}
		// static const ::System::Int32 ChallengeTakenRewardIdListFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 ChallengeRaidListFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 FinishedRaidInfoListFieldNumber = 0x5; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* challengeTakenRewardIdList_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_697*>* challengeRaidList_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B3B48B7EEC81A99A_6*>* finishedRaidInfoList_; // 0x20
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x28
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

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetRaidInfoScRsp* Clone()
		{
			return ((::Proto::GetRaidInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_ChallengeTakenRewardIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_CHALLENGETAKENREWARDIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_697*>* get_ChallengeRaidList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_697*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_CHALLENGERAIDLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B3B48B7EEC81A99A_6*>* get_FinishedRaidInfoList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B3B48B7EEC81A99A_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_FINISHEDRAIDINFOLIST_OFFSET))(this);
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
