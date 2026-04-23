#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_DATETIMEPRO_ADDDAYS_OFFSET UNITYSDK_OFFSET(0x22CBE90)
#define RPG_CLIENT_DATETIMEPRO_ADDHOURS_OFFSET UNITYSDK_OFFSET(0x22CBF30)
#define RPG_CLIENT_DATETIMEPRO_ADDMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x22CC110)
#define RPG_CLIENT_DATETIMEPRO_ADDMINUTES_OFFSET UNITYSDK_OFFSET(0x22CBFD0)
#define RPG_CLIENT_DATETIMEPRO_ADDMONTHSINBEIJINGTIME_OFFSET UNITYSDK_OFFSET(0x22CC290)
#define RPG_CLIENT_DATETIMEPRO_ADDMONTHSINSERVERTIME_OFFSET UNITYSDK_OFFSET(0x22CC1B0)
#define RPG_CLIENT_DATETIMEPRO_ADDMONTHSINUTCTIME_OFFSET UNITYSDK_OFFSET(0x22CC200)
#define RPG_CLIENT_DATETIMEPRO_ADDSECONDS_OFFSET UNITYSDK_OFFSET(0x22CC070)
#define RPG_CLIENT_DATETIMEPRO_ADDTICKS_OFFSET UNITYSDK_OFFSET(0x22CBDA0)
#define RPG_CLIENT_DATETIMEPRO_ADD_OFFSET UNITYSDK_OFFSET(0x22CBDA0)
#define RPG_CLIENT_DATETIMEPRO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x22A3FB0)
#define RPG_CLIENT_DATETIMEPRO_COMPARE_OFFSET UNITYSDK_OFFSET(0x19D96840)
#define RPG_CLIENT_DATETIMEPRO_CREATEBYBEIJINGTIME_OFFSET UNITYSDK_OFFSET(0x19D95B40)
#define RPG_CLIENT_DATETIMEPRO_CREATEBYSERVERTIME_OFFSET UNITYSDK_OFFSET(0x19D95A90)
#define RPG_CLIENT_DATETIMEPRO_CREATEBYTIMESTAMPMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x19D954B0)
#define RPG_CLIENT_DATETIMEPRO_CREATEBYTIMESTAMPSECONDS_OFFSET UNITYSDK_OFFSET(0x19D952C0)
#define RPG_CLIENT_DATETIMEPRO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22A4010)
#define RPG_CLIENT_DATETIMEPRO_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x22CC360)
#define RPG_CLIENT_DATETIMEPRO_EQUALS_OFFSET UNITYSDK_OFFSET(0x19D968A0)
#define RPG_CLIENT_DATETIMEPRO_GETBEIJINGLITERALDATE_OFFSET UNITYSDK_OFFSET(0x22CBA50)
#define RPG_CLIENT_DATETIMEPRO_GETBEIJINGSTARTOFDAY_OFFSET UNITYSDK_OFFSET(0x22CBBC0)
#define RPG_CLIENT_DATETIMEPRO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22A42C0)
#define RPG_CLIENT_DATETIMEPRO_GETLOCALLITERALDATE_OFFSET UNITYSDK_OFFSET(0x22CB9C0)
#define RPG_CLIENT_DATETIMEPRO_GETSERVERLITERALDATE_OFFSET UNITYSDK_OFFSET(0x22CBA20)
#define RPG_CLIENT_DATETIMEPRO_GETSERVERSTARTOFDAY_OFFSET UNITYSDK_OFFSET(0x22CBB50)
#define RPG_CLIENT_DATETIMEPRO_GETSERVERSTARTOFHOUR_OFFSET UNITYSDK_OFFSET(0x22CBCA0)
#define RPG_CLIENT_DATETIMEPRO_GETSERVERSTARTOFMONTH_OFFSET UNITYSDK_OFFSET(0x22CBD90)
#define RPG_CLIENT_DATETIMEPRO_GETTIMESTAMPMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x22CB960)
#define RPG_CLIENT_DATETIMEPRO_GETTIMESTAMPSECONDS_OFFSET UNITYSDK_OFFSET(0x22CB8F0)
#define RPG_CLIENT_DATETIMEPRO_GETUTCLITERALDATE_OFFSET UNITYSDK_OFFSET(0x22CB9F0)
#define RPG_CLIENT_DATETIMEPRO_GETUTCSTARTOFDAY_OFFSET UNITYSDK_OFFSET(0x22CBA80)
#define RPG_CLIENT_DATETIMEPRO_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x19D975F0)
#define RPG_CLIENT_DATETIMEPRO_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x19D97680)
#define RPG_CLIENT_DATETIMEPRO_GET__BEIJINGTIME_OFFSET UNITYSDK_OFFSET(0x22CC5C0)
#define RPG_CLIENT_DATETIMEPRO_GET__LOCALTIME_OFFSET UNITYSDK_OFFSET(0x22CC5B0)
#define RPG_CLIENT_DATETIMEPRO_GET__SERVERTIME_OFFSET UNITYSDK_OFFSET(0x22CC4F0)
#define RPG_CLIENT_DATETIMEPRO_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x19D969B0)
#define RPG_CLIENT_DATETIMEPRO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19D96910)
#define RPG_CLIENT_DATETIMEPRO_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x19D96990)
#define RPG_CLIENT_DATETIMEPRO_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x19D96950)
#define RPG_CLIENT_DATETIMEPRO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19D96920)
#define RPG_CLIENT_DATETIMEPRO_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x19D96970)
#define RPG_CLIENT_DATETIMEPRO_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x19D96930)
#define RPG_CLIENT_DATETIMEPRO_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0x19D96C30)
#define RPG_CLIENT_DATETIMEPRO_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x19D96B10)
#define RPG_CLIENT_DATETIMEPRO_PARSEBEIJINGTIME_OFFSET UNITYSDK_OFFSET(0x19D95880)
#define RPG_CLIENT_DATETIMEPRO_PARSESERVERTIME_OFFSET UNITYSDK_OFFSET(0x19D956A0)
#define RPG_CLIENT_DATETIMEPRO_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x22CC390)
#define RPG_CLIENT_DATETIMEPRO_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x22A4560)
#define RPG_CLIENT_DATETIMEPRO_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x22CC4C0)
#define RPG_CLIENT_DATETIMEPRO_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x22CC4D0)
#define RPG_CLIENT_DATETIMEPRO_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x22CC4E0)
#define RPG_CLIENT_DATETIMEPRO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22CC4B0)
#define RPG_CLIENT_DATETIMEPRO_TRYPARSEBEIJINGTIME_OFFSET UNITYSDK_OFFSET(0x19D958C0)
#define RPG_CLIENT_DATETIMEPRO_TRYPARSESERVERTIME_OFFSET UNITYSDK_OFFSET(0x19D956E0)
#define RPG_CLIENT_DATETIMEPRO__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D97710)
#define RPG_CLIENT_DATETIMEPRO__CREATEBYBEIJINGTIME_OFFSET UNITYSDK_OFFSET(0x19D974A0)
#define RPG_CLIENT_DATETIMEPRO__CREATEBYLOCALTIME_OFFSET UNITYSDK_OFFSET(0x19D97390)
#define RPG_CLIENT_DATETIMEPRO__CREATEBYSERVERTIME_OFFSET UNITYSDK_OFFSET(0x19D972B0)
#define RPG_CLIENT_DATETIMEPRO__CREATEBYUTCTIME_OFFSET UNITYSDK_OFFSET(0x19D96AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int DateTimePro_TypeDefinitionIndex = 9690;

	struct alignas(8) DateTimePro
	{
		static ::System::DateTime* StaticGet__TimeStampEpoch()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(DateTimePro_TypeDefinitionIndex)->GetStaticField(0x610);
		}
		static ::System::Int32* StaticGet__BeijingTimeOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimePro_TypeDefinitionIndex)->GetStaticField(0x618);
		}
		// static const ::System::UInt64 _MAX_SAFE_SECONDS = 0xD6BF94D5E5; // 0x0
		// static const ::System::UInt64 _MAX_SAFE_MILLISECONDS = 0x346DC5D638865; // 0x0
		::System::DateTime _UtcTime; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO__CCTOR_OFFSET))();
		}

		static ::RPG::Client::DateTimePro CreateByTimeStampSeconds(::System::UInt64 seconds)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_CREATEBYTIMESTAMPSECONDS_OFFSET))(seconds);
		}

		static ::RPG::Client::DateTimePro CreateByTimeStampMilliseconds(::System::UInt64 milliseconds)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_CREATEBYTIMESTAMPMILLISECONDS_OFFSET))(milliseconds);
		}

		static ::RPG::Client::DateTimePro ParseServerTime(::System::String* serverTime)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_PARSESERVERTIME_OFFSET))(serverTime);
		}

		static ::System::Boolean TryParseServerTime(::System::String* serverTime, ::RPG::Client::DateTimePro& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::RPG::Client::DateTimePro&))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_TRYPARSESERVERTIME_OFFSET))(serverTime, result);
		}

		static ::RPG::Client::DateTimePro ParseBeijingTime(::System::String* beijingTime)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_PARSEBEIJINGTIME_OFFSET))(beijingTime);
		}

		static ::System::Boolean TryParseBeijingTime(::System::String* beijingTime, ::RPG::Client::DateTimePro& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::RPG::Client::DateTimePro&))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_TRYPARSEBEIJINGTIME_OFFSET))(beijingTime, result);
		}

		static ::RPG::Client::DateTimePro CreateByServerTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_CREATEBYSERVERTIME_OFFSET))(year, month, day, hour, minute, second);
		}

		static ::RPG::Client::DateTimePro CreateByBeijingTime(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_CREATEBYBEIJINGTIME_OFFSET))(year, month, day, hour, minute, second);
		}

		::System::Int64 GetTimeStampSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GETTIMESTAMPSECONDS_OFFSET))(this);
		}

		::System::Int64 GetTimeStampMilliseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GETTIMESTAMPMILLISECONDS_OFFSET))(this);
		}

		/*
		::RPG::Client::DateTimePro_LiteralDate GetLocalLiteralDate()
		{
			return ((::RPG::Client::DateTimePro_LiteralDate(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GETLOCALLITERALDATE_OFFSET))(this);
		}
		*/

		/*
		::RPG::Client::DateTimePro_LiteralDate GetUtcLiteralDate()
		{
			return ((::RPG::Client::DateTimePro_LiteralDate(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GETUTCLITERALDATE_OFFSET))(this);
		}
		*/

		/*
		::RPG::Client::DateTimePro_LiteralDate GetServerLiteralDate()
		{
			return ((::RPG::Client::DateTimePro_LiteralDate(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GETSERVERLITERALDATE_OFFSET))(this);
		}
		*/

		/*
		::RPG::Client::DateTimePro_LiteralDate GetBeijingLiteralDate()
		{
			return ((::RPG::Client::DateTimePro_LiteralDate(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GETBEIJINGLITERALDATE_OFFSET))(this);
		}
		*/

		::RPG::Client::DateTimePro GetUtcStartOfDay()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GETUTCSTARTOFDAY_OFFSET))(this);
		}

		::RPG::Client::DateTimePro GetServerStartOfDay()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GETSERVERSTARTOFDAY_OFFSET))(this);
		}

		::RPG::Client::DateTimePro GetBeijingStartOfDay()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GETBEIJINGSTARTOFDAY_OFFSET))(this);
		}

		::RPG::Client::DateTimePro GetServerStartOfHour()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GETSERVERSTARTOFHOUR_OFFSET))(this);
		}

		::RPG::Client::DateTimePro GetServerStartOfMonth()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GETSERVERSTARTOFMONTH_OFFSET))(this);
		}

		/*
		::RPG::Client::DateTimePro Add(::System::TimeSpan value)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADD_OFFSET))(this, value);
		}
		*/

		::RPG::Client::DateTimePro AddDays(::System::Double value)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDDAYS_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro AddHours(::System::Double value)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDHOURS_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro AddMinutes(::System::Double value)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDMINUTES_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro AddSeconds(::System::Double value)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDSECONDS_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro AddMilliseconds(::System::Double value)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDMILLISECONDS_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro AddTicks(::System::Int64 value)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDTICKS_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro AddMonthsInServerTime(::System::Int32 months)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDMONTHSINSERVERTIME_OFFSET))(this, months);
		}

		::RPG::Client::DateTimePro AddMonthsInUtcTime(::System::Int32 months)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDMONTHSINUTCTIME_OFFSET))(this, months);
		}

		::RPG::Client::DateTimePro AddMonthsInBeijingTime(::System::Int32 months)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDMONTHSINBEIJINGTIME_OFFSET))(this, months);
		}

		static ::System::Int32 Compare(::RPG::Client::DateTimePro first, ::RPG::Client::DateTimePro second)
		{
			return ((::System::Int32(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_COMPARE_OFFSET))(first, second);
		}

		::System::Int32 CompareTo(::RPG::Client::DateTimePro other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_COMPARETO_OFFSET))(this, other);
		}

		static ::System::Boolean Equals(::RPG::Client::DateTimePro first, ::RPG::Client::DateTimePro second)
		{
			return ((::System::Boolean(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_EQUALS_OFFSET))(first, second);
		}

		::System::Boolean Equals_1(::RPG::Client::DateTimePro other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_EQUALS_2_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::DateTimePro left, ::RPG::Client::DateTimePro right)
		{
			return ((::System::Boolean(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::DateTimePro left, ::RPG::Client::DateTimePro right)
		{
			return ((::System::Boolean(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThan(::RPG::Client::DateTimePro left, ::RPG::Client::DateTimePro right)
		{
			return ((::System::Boolean(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_LESSTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThan(::RPG::Client::DateTimePro left, ::RPG::Client::DateTimePro right)
		{
			return ((::System::Boolean(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_GREATERTHAN_OFFSET))(left, right);
		}

		static ::System::Boolean op_LessThanOrEqual(::RPG::Client::DateTimePro left, ::RPG::Client::DateTimePro right)
		{
			return ((::System::Boolean(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_LESSTHANOREQUAL_OFFSET))(left, right);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::RPG::Client::DateTimePro left, ::RPG::Client::DateTimePro right)
		{
			return ((::System::Boolean(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_GREATERTHANOREQUAL_OFFSET))(left, right);
		}

		/*
		static ::RPG::Client::DateTimePro op_Addition(::RPG::Client::DateTimePro d, ::System::TimeSpan t)
		{
			return ((::RPG::Client::DateTimePro(*)(::RPG::Client::DateTimePro, ::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_ADDITION_OFFSET))(d, t);
		}
		*/

		/*
		static ::RPG::Client::DateTimePro op_Subtraction(::RPG::Client::DateTimePro d, ::System::TimeSpan t)
		{
			return ((::RPG::Client::DateTimePro(*)(::RPG::Client::DateTimePro, ::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_SUBTRACTION_OFFSET))(d, t);
		}
		*/

		/*
		static ::System::TimeSpan op_Subtraction_1(::RPG::Client::DateTimePro left, ::RPG::Client::DateTimePro right)
		{
			return ((::System::TimeSpan(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_SUBTRACTION_1_OFFSET))(left, right);
		}
		*/

		/*
		::System::TimeSpan Subtract(::RPG::Client::DateTimePro value)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_SUBTRACT_OFFSET))(this, value);
		}
		*/

		/*
		::RPG::Client::DateTimePro Subtract_1(::System::TimeSpan value)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_SUBTRACT_1_OFFSET))(this, value);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_TOSTRING_1_OFFSET))(this, format);
		}

		::System::String* ToString_2(::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_TOSTRING_2_OFFSET))(this, provider);
		}

		::System::String* ToString_3(::System::String* format, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_TOSTRING_3_OFFSET))(this, format, provider);
		}

		static ::RPG::Client::DateTimePro _CreateByServerTime(::System::DateTime dateTime)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::DateTime))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO__CREATEBYSERVERTIME_OFFSET))(dateTime);
		}

		static ::RPG::Client::DateTimePro _CreateByLocalTime(::System::DateTime dateTime)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::DateTime))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO__CREATEBYLOCALTIME_OFFSET))(dateTime);
		}

		static ::RPG::Client::DateTimePro _CreateByUtcTime(::System::DateTime dateTime)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::DateTime))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO__CREATEBYUTCTIME_OFFSET))(dateTime);
		}

		static ::RPG::Client::DateTimePro _CreateByBeijingTime(::System::DateTime dateTime)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::DateTime))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO__CREATEBYBEIJINGTIME_OFFSET))(dateTime);
		}

		::System::DateTime get__ServerTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GET__SERVERTIME_OFFSET))(this);
		}

		::System::DateTime get__LocalTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GET__LOCALTIME_OFFSET))(this);
		}

		::System::DateTime get__BeijingTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GET__BEIJINGTIME_OFFSET))(this);
		}

		static ::RPG::Client::DateTimePro get_MaxValue()
		{
			return ((::RPG::Client::DateTimePro(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GET_MAXVALUE_OFFSET))();
		}

		static ::RPG::Client::DateTimePro get_MinValue()
		{
			return ((::RPG::Client::DateTimePro(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GET_MINVALUE_OFFSET))();
		}
	};
}
