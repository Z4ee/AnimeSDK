#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E621F95B064E7051_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_GETBASICINFOSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1827EC50)
#define PROTO_GETBASICINFOSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1827E660)
#define PROTO_GETBASICINFOSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1827E870)
#define PROTO_GETBASICINFOSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1827E840)
#define PROTO_GETBASICINFOSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1827E980)
#define PROTO_GETBASICINFOSCRSP_GET_CURDAY_OFFSET UNITYSDK_OFFSET(0x1827E760)
#define PROTO_GETBASICINFOSCRSP_GET_EXCHANGETIMES_OFFSET UNITYSDK_OFFSET(0x1827E740)
#define PROTO_GETBASICINFOSCRSP_GET_GAMEPLAYBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1827E720)
#define PROTO_GETBASICINFOSCRSP_GET_GENDER_OFFSET UNITYSDK_OFFSET(0x1827E700)
#define PROTO_GETBASICINFOSCRSP_GET_ISGENDERSET_OFFSET UNITYSDK_OFFSET(0x1827E800)
#define PROTO_GETBASICINFOSCRSP_GET_LASTSETNICKNAMETIME_OFFSET UNITYSDK_OFFSET(0x1827E7C0)
#define PROTO_GETBASICINFOSCRSP_GET_NEXTRECOVERTIME_OFFSET UNITYSDK_OFFSET(0x1827E820)
#define PROTO_GETBASICINFOSCRSP_GET_PLAYERSETTINGINFO_OFFSET UNITYSDK_OFFSET(0x1827E7E0)
#define PROTO_GETBASICINFOSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1827E780)
#define PROTO_GETBASICINFOSCRSP_GET_WEEKCOCOONFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1827E7A0)
#define PROTO_GETBASICINFOSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1827F1F0)
#define PROTO_GETBASICINFOSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1827F120)
#define PROTO_GETBASICINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1827E5B0)
#define PROTO_GETBASICINFOSCRSP_SET_CURDAY_OFFSET UNITYSDK_OFFSET(0x1827E770)
#define PROTO_GETBASICINFOSCRSP_SET_EXCHANGETIMES_OFFSET UNITYSDK_OFFSET(0x1827E750)
#define PROTO_GETBASICINFOSCRSP_SET_GAMEPLAYBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1827E730)
#define PROTO_GETBASICINFOSCRSP_SET_GENDER_OFFSET UNITYSDK_OFFSET(0x1827E710)
#define PROTO_GETBASICINFOSCRSP_SET_ISGENDERSET_OFFSET UNITYSDK_OFFSET(0x1827E810)
#define PROTO_GETBASICINFOSCRSP_SET_LASTSETNICKNAMETIME_OFFSET UNITYSDK_OFFSET(0x1827E7D0)
#define PROTO_GETBASICINFOSCRSP_SET_NEXTRECOVERTIME_OFFSET UNITYSDK_OFFSET(0x1827E830)
#define PROTO_GETBASICINFOSCRSP_SET_PLAYERSETTINGINFO_OFFSET UNITYSDK_OFFSET(0x1827E7F0)
#define PROTO_GETBASICINFOSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1827E790)
#define PROTO_GETBASICINFOSCRSP_SET_WEEKCOCOONFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1827E7B0)
#define PROTO_GETBASICINFOSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1827EA20)
#define PROTO_GETBASICINFOSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1827EA80)
#define PROTO_GETBASICINFOSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1827E5D0)
#define PROTO_GETBASICINFOSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1827E5C0)

namespace Proto
{
	inline static constexpr unsigned int GetBasicInfoScRsp_TypeDefinitionIndex = 25965;

	class GetBasicInfoScRsp : public ::System::Object
	{
	public:
		// static const ::System::Int32 GenderFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 GameplayBirthdayFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 ExchangeTimesFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 CurDayFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 WeekCocoonFinishedCountFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 LastSetNicknameTimeFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 PlayerSettingInfoFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 IsGenderSetFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 NextRecoverTimeFieldNumber = 0x3; // 0x0
		::Class_1_E621F95B064E7051_4* playerSettingInfo_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::Int64 nextRecoverTime_; // 0x20
		::System::Int64 lastSetNicknameTime_; // 0x28
		::System::UInt32 gender_; // 0x30
		::System::UInt32 gameplayBirthday_; // 0x34
		::System::Boolean isGenderSet_; // 0x38
		::System::UInt32 retcode_; // 0x3C
		::System::UInt32 weekCocoonFinishedCount_; // 0x40
		::System::UInt32 curDay_; // 0x44
		::System::UInt32 exchangeTimes_; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetBasicInfoScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetBasicInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetBasicInfoScRsp* Clone()
		{
			return ((::Proto::GetBasicInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_Gender()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_GENDER_OFFSET))(this);
		}

		::System::Void set_Gender(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_GENDER_OFFSET))(this, value);
		}

		::System::UInt32 get_GameplayBirthday()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_GAMEPLAYBIRTHDAY_OFFSET))(this);
		}

		::System::Void set_GameplayBirthday(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_GAMEPLAYBIRTHDAY_OFFSET))(this, value);
		}

		::System::UInt32 get_ExchangeTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_EXCHANGETIMES_OFFSET))(this);
		}

		::System::Void set_ExchangeTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_EXCHANGETIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_CurDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_CURDAY_OFFSET))(this);
		}

		::System::Void set_CurDay(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_CURDAY_OFFSET))(this, value);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::UInt32 get_WeekCocoonFinishedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_WEEKCOCOONFINISHEDCOUNT_OFFSET))(this);
		}

		::System::Void set_WeekCocoonFinishedCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_WEEKCOCOONFINISHEDCOUNT_OFFSET))(this, value);
		}

		::System::Int64 get_LastSetNicknameTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_LASTSETNICKNAMETIME_OFFSET))(this);
		}

		::System::Void set_LastSetNicknameTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_LASTSETNICKNAMETIME_OFFSET))(this, value);
		}

		::Class_1_E621F95B064E7051_4* get_PlayerSettingInfo()
		{
			return ((::Class_1_E621F95B064E7051_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_PLAYERSETTINGINFO_OFFSET))(this);
		}

		::System::Void set_PlayerSettingInfo(::Class_1_E621F95B064E7051_4* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E621F95B064E7051_4*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_PLAYERSETTINGINFO_OFFSET))(this, value);
		}

		::System::Boolean get_IsGenderSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_ISGENDERSET_OFFSET))(this);
		}

		::System::Void set_IsGenderSet(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_ISGENDERSET_OFFSET))(this, value);
		}

		::System::Int64 get_NextRecoverTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_NEXTRECOVERTIME_OFFSET))(this);
		}

		::System::Void set_NextRecoverTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_NEXTRECOVERTIME_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::GetBasicInfoScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetBasicInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetBasicInfoScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetBasicInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
