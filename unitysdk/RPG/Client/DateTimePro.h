#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_DATETIMEPRO_ADDDAYS_OFFSET UNITYSDK_OFFSET(0x38656F0)
#define RPG_CLIENT_DATETIMEPRO_ADDHOURS_OFFSET UNITYSDK_OFFSET(0x3865790)
#define RPG_CLIENT_DATETIMEPRO_ADDMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x3865970)
#define RPG_CLIENT_DATETIMEPRO_ADDMINUTES_OFFSET UNITYSDK_OFFSET(0x3865830)
#define RPG_CLIENT_DATETIMEPRO_ADDMONTHSINBEIJINGTIME_OFFSET UNITYSDK_OFFSET(0x3865AF0)
#define RPG_CLIENT_DATETIMEPRO_ADDMONTHSINSERVERTIME_OFFSET UNITYSDK_OFFSET(0x3865A10)
#define RPG_CLIENT_DATETIMEPRO_ADDMONTHSINUTCTIME_OFFSET UNITYSDK_OFFSET(0x3865A60)
#define RPG_CLIENT_DATETIMEPRO_ADDSECONDS_OFFSET UNITYSDK_OFFSET(0x38658D0)
#define RPG_CLIENT_DATETIMEPRO_ADDTICKS_OFFSET UNITYSDK_OFFSET(0x3865600)
#define RPG_CLIENT_DATETIMEPRO_ADD_OFFSET UNITYSDK_OFFSET(0x3865600)
#define RPG_CLIENT_DATETIMEPRO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3833EB0)
#define RPG_CLIENT_DATETIMEPRO_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AC147C0)
#define RPG_CLIENT_DATETIMEPRO_CREATEBYBEIJINGTIME_OFFSET UNITYSDK_OFFSET(0x1AC139B0)
#define RPG_CLIENT_DATETIMEPRO_CREATEBYSERVERTIME_OFFSET UNITYSDK_OFFSET(0x1AC13900)
#define RPG_CLIENT_DATETIMEPRO_CREATEBYTIMESTAMPMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1AC13350)
#define RPG_CLIENT_DATETIMEPRO_CREATEBYTIMESTAMPSECONDS_OFFSET UNITYSDK_OFFSET(0x1AC13160)
#define RPG_CLIENT_DATETIMEPRO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3833F10)
#define RPG_CLIENT_DATETIMEPRO_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3865BC0)
#define RPG_CLIENT_DATETIMEPRO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AC14820)
#define RPG_CLIENT_DATETIMEPRO_GETBEIJINGLITERALDATE_OFFSET UNITYSDK_OFFSET(0x38652B0)
#define RPG_CLIENT_DATETIMEPRO_GETBEIJINGSTARTOFDAY_OFFSET UNITYSDK_OFFSET(0x3865420)
#define RPG_CLIENT_DATETIMEPRO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38341C0)
#define RPG_CLIENT_DATETIMEPRO_GETLOCALLITERALDATE_OFFSET UNITYSDK_OFFSET(0x3865220)
#define RPG_CLIENT_DATETIMEPRO_GETSERVERLITERALDATE_OFFSET UNITYSDK_OFFSET(0x3865280)
#define RPG_CLIENT_DATETIMEPRO_GETSERVERSTARTOFDAY_OFFSET UNITYSDK_OFFSET(0x38653B0)
#define RPG_CLIENT_DATETIMEPRO_GETSERVERSTARTOFHOUR_OFFSET UNITYSDK_OFFSET(0x3865500)
#define RPG_CLIENT_DATETIMEPRO_GETSERVERSTARTOFMONTH_OFFSET UNITYSDK_OFFSET(0x38655F0)
#define RPG_CLIENT_DATETIMEPRO_GETTIMESTAMPMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x38651C0)
#define RPG_CLIENT_DATETIMEPRO_GETTIMESTAMPSECONDS_OFFSET UNITYSDK_OFFSET(0x3865150)
#define RPG_CLIENT_DATETIMEPRO_GETUTCLITERALDATE_OFFSET UNITYSDK_OFFSET(0x3865250)
#define RPG_CLIENT_DATETIMEPRO_GETUTCSTARTOFDAY_OFFSET UNITYSDK_OFFSET(0x38652E0)
#define RPG_CLIENT_DATETIMEPRO_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1AC15570)
#define RPG_CLIENT_DATETIMEPRO_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1AC15600)
#define RPG_CLIENT_DATETIMEPRO_GET__BEIJINGTIME_OFFSET UNITYSDK_OFFSET(0x3865E20)
#define RPG_CLIENT_DATETIMEPRO_GET__LOCALTIME_OFFSET UNITYSDK_OFFSET(0x3865E10)
#define RPG_CLIENT_DATETIMEPRO_GET__SERVERTIME_OFFSET UNITYSDK_OFFSET(0x3865D50)
#define RPG_CLIENT_DATETIMEPRO_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1AC14930)
#define RPG_CLIENT_DATETIMEPRO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AC14890)
#define RPG_CLIENT_DATETIMEPRO_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1AC14910)
#define RPG_CLIENT_DATETIMEPRO_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1AC148D0)
#define RPG_CLIENT_DATETIMEPRO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AC148A0)
#define RPG_CLIENT_DATETIMEPRO_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1AC148F0)
#define RPG_CLIENT_DATETIMEPRO_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1AC148B0)
#define RPG_CLIENT_DATETIMEPRO_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0x1AC14BB0)
#define RPG_CLIENT_DATETIMEPRO_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1AC14A90)
#define RPG_CLIENT_DATETIMEPRO_PARSEBEIJINGTIME_OFFSET UNITYSDK_OFFSET(0x1AC13720)
#define RPG_CLIENT_DATETIMEPRO_PARSESERVERTIME_OFFSET UNITYSDK_OFFSET(0x1AC13540)
#define RPG_CLIENT_DATETIMEPRO_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x3865BF0)
#define RPG_CLIENT_DATETIMEPRO_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x3834580)
#define RPG_CLIENT_DATETIMEPRO_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3865D20)
#define RPG_CLIENT_DATETIMEPRO_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x3865D30)
#define RPG_CLIENT_DATETIMEPRO_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x3865D40)
#define RPG_CLIENT_DATETIMEPRO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3865D10)
#define RPG_CLIENT_DATETIMEPRO_TRYPARSEBEIJINGTIME_OFFSET UNITYSDK_OFFSET(0x1AC13760)
#define RPG_CLIENT_DATETIMEPRO_TRYPARSESERVERTIME_OFFSET UNITYSDK_OFFSET(0x1AC13580)
#define RPG_CLIENT_DATETIMEPRO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC15690)
#define RPG_CLIENT_DATETIMEPRO__CREATEBYBEIJINGTIME_OFFSET UNITYSDK_OFFSET(0x1AC15420)
#define RPG_CLIENT_DATETIMEPRO__CREATEBYLOCALTIME_OFFSET UNITYSDK_OFFSET(0x1AC15310)
#define RPG_CLIENT_DATETIMEPRO__CREATEBYSERVERTIME_OFFSET UNITYSDK_OFFSET(0x1AC15230)
#define RPG_CLIENT_DATETIMEPRO__CREATEBYUTCTIME_OFFSET UNITYSDK_OFFSET(0x1AC14A20)

namespace RPG::Client
{
	inline static constexpr unsigned int DateTimePro_TypeDefinitionIndex = 33459;

	struct alignas(8) DateTimePro
	{
		static ::System::Int32* StaticGet__BeijingTimeOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DateTimePro_TypeDefinitionIndex)->GetStaticField(0x6B0);
		}
		static ::System::DateTime* StaticGet__TimeStampEpoch()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(DateTimePro_TypeDefinitionIndex)->GetStaticField(0x6B8);
		}
		// static const ::System::UInt64 _MAX_SAFE_SECONDS = 0xD6BF94D5E5; // 0x0
		// static const ::System::UInt64 _MAX_SAFE_MILLISECONDS = 0x346DC5D638865; // 0x0
		::System::DateTime _UtcTime; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO__CCTOR_OFFSET))();
		}

		static ::RPG::Client::DateTimePro CreateByTimeStampSeconds(::System::UInt64 a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_CREATEBYTIMESTAMPSECONDS_OFFSET))(a1);
		}

		static ::RPG::Client::DateTimePro CreateByTimeStampMilliseconds(::System::UInt64 a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_CREATEBYTIMESTAMPMILLISECONDS_OFFSET))(a1);
		}

		static ::RPG::Client::DateTimePro ParseServerTime(::System::String* a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_PARSESERVERTIME_OFFSET))(a1);
		}

		static ::System::Boolean TryParseServerTime(::System::String* a1, ::RPG::Client::DateTimePro& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::RPG::Client::DateTimePro&))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_TRYPARSESERVERTIME_OFFSET))(a1, a2);
		}

		static ::RPG::Client::DateTimePro ParseBeijingTime(::System::String* a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_PARSEBEIJINGTIME_OFFSET))(a1);
		}

		static ::System::Boolean TryParseBeijingTime(::System::String* a1, ::RPG::Client::DateTimePro& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::RPG::Client::DateTimePro&))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_TRYPARSEBEIJINGTIME_OFFSET))(a1, a2);
		}

		static ::RPG::Client::DateTimePro CreateByServerTime(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_CREATEBYSERVERTIME_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::Client::DateTimePro CreateByBeijingTime(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_CREATEBYBEIJINGTIME_OFFSET))(a1, a2, a3, a4, a5, a6);
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
		::RPG::Client::DateTimePro Add(::System::TimeSpan a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADD_OFFSET))(this, a1);
		}
		*/

		::RPG::Client::DateTimePro AddDays(::System::Double a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDDAYS_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro AddHours(::System::Double a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDHOURS_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro AddMinutes(::System::Double a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDMINUTES_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro AddSeconds(::System::Double a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDSECONDS_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro AddMilliseconds(::System::Double a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDMILLISECONDS_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro AddTicks(::System::Int64 a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDTICKS_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro AddMonthsInServerTime(::System::Int32 a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDMONTHSINSERVERTIME_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro AddMonthsInUtcTime(::System::Int32 a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDMONTHSINUTCTIME_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro AddMonthsInBeijingTime(::System::Int32 a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_ADDMONTHSINBEIJINGTIME_OFFSET))(this, a1);
		}

		static ::System::Int32 Compare(::RPG::Client::DateTimePro a1, ::RPG::Client::DateTimePro a2)
		{
			return ((::System::Int32(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_COMPARE_OFFSET))(a1, a2);
		}

		::System::Int32 CompareTo(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_COMPARETO_OFFSET))(this, a1);
		}

		static ::System::Boolean Equals(::RPG::Client::DateTimePro a1, ::RPG::Client::DateTimePro a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_EQUALS_OFFSET))(a1, a2);
		}

		::System::Boolean Equals_1(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::Client::DateTimePro a1, ::RPG::Client::DateTimePro a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::DateTimePro a1, ::RPG::Client::DateTimePro a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::RPG::Client::DateTimePro a1, ::RPG::Client::DateTimePro a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::RPG::Client::DateTimePro a1, ::RPG::Client::DateTimePro a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::RPG::Client::DateTimePro a1, ::RPG::Client::DateTimePro a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::RPG::Client::DateTimePro a1, ::RPG::Client::DateTimePro a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::Client::DateTimePro op_Addition(::RPG::Client::DateTimePro a1, ::System::TimeSpan a2)
		{
			return ((::RPG::Client::DateTimePro(*)(::RPG::Client::DateTimePro, ::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_ADDITION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::Client::DateTimePro op_Subtraction(::RPG::Client::DateTimePro a1, ::System::TimeSpan a2)
		{
			return ((::RPG::Client::DateTimePro(*)(::RPG::Client::DateTimePro, ::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_SUBTRACTION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::TimeSpan op_Subtraction_1(::RPG::Client::DateTimePro a1, ::RPG::Client::DateTimePro a2)
		{
			return ((::System::TimeSpan(*)(::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_OP_SUBTRACTION_1_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::TimeSpan Subtract(::RPG::Client::DateTimePro a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_SUBTRACT_OFFSET))(this, a1);
		}
		*/

		/*
		::RPG::Client::DateTimePro Subtract_1(::System::TimeSpan a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_SUBTRACT_1_OFFSET))(this, a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_TOSTRING_2_OFFSET))(this, a1);
		}

		::System::String* ToString_3(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_TOSTRING_3_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::DateTimePro _CreateByServerTime(::System::DateTime a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::DateTime))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO__CREATEBYSERVERTIME_OFFSET))(a1);
		}

		static ::RPG::Client::DateTimePro _CreateByLocalTime(::System::DateTime a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::DateTime))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO__CREATEBYLOCALTIME_OFFSET))(a1);
		}

		static ::RPG::Client::DateTimePro _CreateByUtcTime(::System::DateTime a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::DateTime))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO__CREATEBYUTCTIME_OFFSET))(a1);
		}

		static ::RPG::Client::DateTimePro _CreateByBeijingTime(::System::DateTime a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::DateTime))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO__CREATEBYBEIJINGTIME_OFFSET))(a1);
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
