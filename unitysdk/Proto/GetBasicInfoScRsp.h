#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0119785E582EFC4A;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_GETBASICINFOSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1933A9C0)
#define PROTO_GETBASICINFOSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1933A3F0)
#define PROTO_GETBASICINFOSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1933A600)
#define PROTO_GETBASICINFOSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1933A5D0)
#define PROTO_GETBASICINFOSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1933A710)
#define PROTO_GETBASICINFOSCRSP_GET_CURDAY_OFFSET UNITYSDK_OFFSET(0x1933A510)
#define PROTO_GETBASICINFOSCRSP_GET_EXCHANGETIMES_OFFSET UNITYSDK_OFFSET(0x1933A4F0)
#define PROTO_GETBASICINFOSCRSP_GET_GAMEPLAYBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1933A530)
#define PROTO_GETBASICINFOSCRSP_GET_GENDER_OFFSET UNITYSDK_OFFSET(0x1933A590)
#define PROTO_GETBASICINFOSCRSP_GET_ISGENDERSET_OFFSET UNITYSDK_OFFSET(0x1933A4B0)
#define PROTO_GETBASICINFOSCRSP_GET_LASTSETNICKNAMETIME_OFFSET UNITYSDK_OFFSET(0x1933A5B0)
#define PROTO_GETBASICINFOSCRSP_GET_NEXTRECOVERTIME_OFFSET UNITYSDK_OFFSET(0x1933A4D0)
#define PROTO_GETBASICINFOSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1933A310)
#define PROTO_GETBASICINFOSCRSP_GET_PLAYERSETTINGINFO_OFFSET UNITYSDK_OFFSET(0x1933A570)
#define PROTO_GETBASICINFOSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1933A550)
#define PROTO_GETBASICINFOSCRSP_GET_WEEKCOCOONFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1933A490)
#define PROTO_GETBASICINFOSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1933AF50)
#define PROTO_GETBASICINFOSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1933AE80)
#define PROTO_GETBASICINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1933A340)
#define PROTO_GETBASICINFOSCRSP_SET_CURDAY_OFFSET UNITYSDK_OFFSET(0x1933A520)
#define PROTO_GETBASICINFOSCRSP_SET_EXCHANGETIMES_OFFSET UNITYSDK_OFFSET(0x1933A500)
#define PROTO_GETBASICINFOSCRSP_SET_GAMEPLAYBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1933A540)
#define PROTO_GETBASICINFOSCRSP_SET_GENDER_OFFSET UNITYSDK_OFFSET(0x1933A5A0)
#define PROTO_GETBASICINFOSCRSP_SET_ISGENDERSET_OFFSET UNITYSDK_OFFSET(0x1933A4C0)
#define PROTO_GETBASICINFOSCRSP_SET_LASTSETNICKNAMETIME_OFFSET UNITYSDK_OFFSET(0x1933A5C0)
#define PROTO_GETBASICINFOSCRSP_SET_NEXTRECOVERTIME_OFFSET UNITYSDK_OFFSET(0x1933A4E0)
#define PROTO_GETBASICINFOSCRSP_SET_PLAYERSETTINGINFO_OFFSET UNITYSDK_OFFSET(0x1933A580)
#define PROTO_GETBASICINFOSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1933A560)
#define PROTO_GETBASICINFOSCRSP_SET_WEEKCOCOONFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1933A4A0)
#define PROTO_GETBASICINFOSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1933A790)
#define PROTO_GETBASICINFOSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1933A7F0)
#define PROTO_GETBASICINFOSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1933B0D0)
#define PROTO_GETBASICINFOSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1933A360)
#define PROTO_GETBASICINFOSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1933A350)

namespace Proto
{
	inline static constexpr unsigned int GetBasicInfoScRsp_TypeDefinitionIndex = 30018;

	class GetBasicInfoScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::GetBasicInfoScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GetBasicInfoScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(GetBasicInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x63A20);
		}
		// static const ::System::Int32 WeekCocoonFinishedCountFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 IsGenderSetFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 NextRecoverTimeFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 ExchangeTimesFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 CurDayFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 GameplayBirthdayFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 PlayerSettingInfoFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 GenderFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 LastSetNicknameTimeFieldNumber = 0xE; // 0x0
		::Class_1_0119785E582EFC4A* playerSettingInfo_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::Int64 nextRecoverTime_; // 0x20
		::System::UInt32 curDay_; // 0x28
		::System::UInt32 gender_; // 0x2C
		::System::UInt32 gameplayBirthday_; // 0x30
		::System::UInt32 retcode_; // 0x34
		::System::Int64 lastSetNicknameTime_; // 0x38
		::System::Boolean isGenderSet_; // 0x40
		::System::UInt32 exchangeTimes_; // 0x44
		::System::UInt32 weekCocoonFinishedCount_; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetBasicInfoScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetBasicInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::GetBasicInfoScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::GetBasicInfoScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetBasicInfoScRsp* Clone()
		{
			return ((::Proto::GetBasicInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_WeekCocoonFinishedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_WEEKCOCOONFINISHEDCOUNT_OFFSET))(this);
		}

		::System::Void set_WeekCocoonFinishedCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_WEEKCOCOONFINISHEDCOUNT_OFFSET))(this, value);
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

		::System::UInt32 get_GameplayBirthday()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_GAMEPLAYBIRTHDAY_OFFSET))(this);
		}

		::System::Void set_GameplayBirthday(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_GAMEPLAYBIRTHDAY_OFFSET))(this, value);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::Class_1_0119785E582EFC4A* get_PlayerSettingInfo()
		{
			return ((::Class_1_0119785E582EFC4A*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_PLAYERSETTINGINFO_OFFSET))(this);
		}

		::System::Void set_PlayerSettingInfo(::Class_1_0119785E582EFC4A* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0119785E582EFC4A*))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_PLAYERSETTINGINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_Gender()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_GENDER_OFFSET))(this);
		}

		::System::Void set_Gender(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_GENDER_OFFSET))(this, value);
		}

		::System::Int64 get_LastSetNicknameTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_GET_LASTSETNICKNAMETIME_OFFSET))(this);
		}

		::System::Void set_LastSetNicknameTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP_SET_LASTSETNICKNAMETIME_OFFSET))(this, value);
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
