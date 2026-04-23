#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Random; }

#define RPG_MMATHF_ABS_1_OFFSET UNITYSDK_OFFSET(0x192243D0)
#define RPG_MMATHF_ABS_OFFSET UNITYSDK_OFFSET(0x191F2A50)
#define RPG_MMATHF_ACOS_OFFSET UNITYSDK_OFFSET(0x191F2500)
#define RPG_MMATHF_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x19228350)
#define RPG_MMATHF_ASIN_OFFSET UNITYSDK_OFFSET(0x19227710)
#define RPG_MMATHF_ATAN2_OFFSET UNITYSDK_OFFSET(0x19205800)
#define RPG_MMATHF_ATAN_OFFSET UNITYSDK_OFFSET(0x19227730)
#define RPG_MMATHF_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x19227E60)
#define RPG_MMATHF_CEIL_OFFSET UNITYSDK_OFFSET(0x19227D90)
#define RPG_MMATHF_CLAMP01_OFFSET UNITYSDK_OFFSET(0x1921D580)
#define RPG_MMATHF_CLAMP_1_OFFSET UNITYSDK_OFFSET(0x19227F70)
#define RPG_MMATHF_CLAMP_OFFSET UNITYSDK_OFFSET(0x19227F50)
#define RPG_MMATHF_COS_OFFSET UNITYSDK_OFFSET(0x19205820)
#define RPG_MMATHF_DELTAANGLE_OFFSET UNITYSDK_OFFSET(0x19228210)
#define RPG_MMATHF_EXP_OFFSET UNITYSDK_OFFSET(0x19227CA0)
#define RPG_MMATHF_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0x19227E80)
#define RPG_MMATHF_FLOOR_OFFSET UNITYSDK_OFFSET(0x19227DA0)
#define RPG_MMATHF_GAMMA_OFFSET UNITYSDK_OFFSET(0x192282D0)
#define RPG_MMATHF_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x19228400)
#define RPG_MMATHF_LERPANGLE_OFFSET UNITYSDK_OFFSET(0x19227FC0)
#define RPG_MMATHF_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x19227FB0)
#define RPG_MMATHF_LERP_OFFSET UNITYSDK_OFFSET(0x19227F80)
#define RPG_MMATHF_LINEINTERSECTION_OFFSET UNITYSDK_OFFSET(0x19228440)
#define RPG_MMATHF_LINESEGMENTINTERSECTION_OFFSET UNITYSDK_OFFSET(0x19228530)
#define RPG_MMATHF_LOG10_OFFSET UNITYSDK_OFFSET(0x19227D70)
#define RPG_MMATHF_LOG_1_OFFSET UNITYSDK_OFFSET(0x19206E70)
#define RPG_MMATHF_LOG_OFFSET UNITYSDK_OFFSET(0x19227CC0)
#define RPG_MMATHF_MAX_1_OFFSET UNITYSDK_OFFSET(0x19227A00)
#define RPG_MMATHF_MAX_2_OFFSET UNITYSDK_OFFSET(0x192243A0)
#define RPG_MMATHF_MAX_3_OFFSET UNITYSDK_OFFSET(0x19227AD0)
#define RPG_MMATHF_MAX_OFFSET UNITYSDK_OFFSET(0x1921DC20)
#define RPG_MMATHF_MIN_1_OFFSET UNITYSDK_OFFSET(0x19227750)
#define RPG_MMATHF_MIN_2_OFFSET UNITYSDK_OFFSET(0x19224360)
#define RPG_MMATHF_MIN_3_OFFSET UNITYSDK_OFFSET(0x19227820)
#define RPG_MMATHF_MIN_4_OFFSET UNITYSDK_OFFSET(0x19227830)
#define RPG_MMATHF_MIN_OFFSET UNITYSDK_OFFSET(0x1921DBF0)
#define RPG_MMATHF_MOVETOWARDSANGLE_OFFSET UNITYSDK_OFFSET(0x19228110)
#define RPG_MMATHF_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x192280C0)
#define RPG_MMATHF_PINGPONG_OFFSET UNITYSDK_OFFSET(0x19228390)
#define RPG_MMATHF_POW_OFFSET UNITYSDK_OFFSET(0x192057E0)
#define RPG_MMATHF_RANDOMTOLONG_OFFSET UNITYSDK_OFFSET(0x19228640)
#define RPG_MMATHF_REPEAT_OFFSET UNITYSDK_OFFSET(0x19228070)
#define RPG_MMATHF_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x19227EA0)
#define RPG_MMATHF_ROUND_OFFSET UNITYSDK_OFFSET(0x19227DB0)
#define RPG_MMATHF_SIGN_OFFSET UNITYSDK_OFFSET(0x19222C50)
#define RPG_MMATHF_SIN_OFFSET UNITYSDK_OFFSET(0x19205840)
#define RPG_MMATHF_SMOOTHSTEP_OFFSET UNITYSDK_OFFSET(0x19228280)
#define RPG_MMATHF_SQRT_OFFSET UNITYSDK_OFFSET(0x191F2CD0)
#define RPG_MMATHF_TAN_OFFSET UNITYSDK_OFFSET(0x192276F0)
#define RPG_MMATHF__CCTOR_OFFSET UNITYSDK_OFFSET(0x192286D0)

namespace RPG
{
	inline static constexpr unsigned int MMathf_TypeDefinitionIndex = 8895;

	struct alignas(1) MMathf
	{
		static ::System::Single* StaticGet_Epsilon()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MMathf_TypeDefinitionIndex)->GetStaticField(0x540);
		}
		// static const ::System::Single PI; // 0x0
		// static const ::System::Single Infinity; // 0x0
		// static const ::System::Single NegativeInfinity; // 0x0
		// static const ::System::Single Deg2Rad; // 0x0
		// static const ::System::Single Rad2Deg; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_MMATHF__CCTOR_OFFSET))();
		}

		static ::System::Single Sin(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_SIN_OFFSET))(f);
		}

		static ::System::Single Cos(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_COS_OFFSET))(f);
		}

		static ::System::Single Tan(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_TAN_OFFSET))(f);
		}

		static ::System::Single Asin(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_ASIN_OFFSET))(f);
		}

		static ::System::Single Acos(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_ACOS_OFFSET))(f);
		}

		static ::System::Single Atan(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_ATAN_OFFSET))(f);
		}

		static ::System::Single Atan2(::System::Single y, ::System::Single x)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_ATAN2_OFFSET))(y, x);
		}

		static ::System::Single Sqrt(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_SQRT_OFFSET))(f);
		}

		static ::System::Single Abs(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_ABS_OFFSET))(f);
		}

		static ::System::Int32 Abs_1(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_MMATHF_ABS_1_OFFSET))(value);
		}

		static ::System::Single Min(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_MIN_OFFSET))(a, b);
		}

		static ::System::Single Min_1(::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_MMATHF_MIN_1_OFFSET))(values);
		}

		static ::System::Int32 Min_2(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_MMATHF_MIN_2_OFFSET))(a, b);
		}

		static ::System::UInt32 Min_3(::System::UInt32 a, ::System::UInt32 b)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_MMATHF_MIN_3_OFFSET))(a, b);
		}

		static ::System::Int32 Min_4(::Il2CppArray<::System::Int32>* values)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_MMATHF_MIN_4_OFFSET))(values);
		}

		static ::System::Single Max(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_MAX_OFFSET))(a, b);
		}

		static ::System::Single Max_1(::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_MMATHF_MAX_1_OFFSET))(values);
		}

		static ::System::Int32 Max_2(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_MMATHF_MAX_2_OFFSET))(a, b);
		}

		static ::System::Int32 Max_3(::Il2CppArray<::System::Int32>* values)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_MMATHF_MAX_3_OFFSET))(values);
		}

		static ::System::Single Pow(::System::Single f, ::System::Single p)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_POW_OFFSET))(f, p);
		}

		static ::System::Single Exp(::System::Single power)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_EXP_OFFSET))(power);
		}

		static ::System::Single Log(::System::Single f, ::System::Single p)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_LOG_OFFSET))(f, p);
		}

		static ::System::Single Log_1(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_LOG_1_OFFSET))(f);
		}

		static ::System::Single Log10(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_LOG10_OFFSET))(f);
		}

		static ::System::Single Ceil(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_CEIL_OFFSET))(f);
		}

		static ::System::Single Floor(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_FLOOR_OFFSET))(f);
		}

		static ::System::Single Round(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_ROUND_OFFSET))(f);
		}

		static ::System::Int32 CeilToInt(::System::Single f)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_CEILTOINT_OFFSET))(f);
		}

		static ::System::Int32 FloorToInt(::System::Single f)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_FLOORTOINT_OFFSET))(f);
		}

		static ::System::Int32 RoundToInt(::System::Single f)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_ROUNDTOINT_OFFSET))(f);
		}

		static ::System::Single Sign(::System::Single f)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_SIGN_OFFSET))(f);
		}

		static ::System::Single Clamp(::System::Single value, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_CLAMP_OFFSET))(value, min, max);
		}

		static ::System::Int32 Clamp_1(::System::Int32 value, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_MMATHF_CLAMP_1_OFFSET))(value, min, max);
		}

		static ::System::Single Clamp01(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_CLAMP01_OFFSET))(value);
		}

		static ::System::Single Lerp(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_LERP_OFFSET))(a, b, t);
		}

		static ::System::Single LerpUnclamped(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::System::Single LerpAngle(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_LERPANGLE_OFFSET))(a, b, t);
		}

		static ::System::Single MoveTowards(::System::Single current, ::System::Single target, ::System::Single maxDelta)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_MOVETOWARDS_OFFSET))(current, target, maxDelta);
		}

		static ::System::Single MoveTowardsAngle(::System::Single current, ::System::Single target, ::System::Single maxDelta)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_MOVETOWARDSANGLE_OFFSET))(current, target, maxDelta);
		}

		static ::System::Single SmoothStep(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_SMOOTHSTEP_OFFSET))(from, to, t);
		}

		static ::System::Single Gamma(::System::Single value, ::System::Single absmax, ::System::Single gamma)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_GAMMA_OFFSET))(value, absmax, gamma);
		}

		static ::System::Boolean Approximately(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_APPROXIMATELY_OFFSET))(a, b);
		}

		static ::System::Single Repeat(::System::Single t, ::System::Single length)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_REPEAT_OFFSET))(t, length);
		}

		static ::System::Single PingPong(::System::Single t, ::System::Single length)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_PINGPONG_OFFSET))(t, length);
		}

		static ::System::Single InverseLerp(::System::Single a, ::System::Single b, ::System::Single value)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_INVERSELERP_OFFSET))(a, b, value);
		}

		static ::System::Single DeltaAngle(::System::Single current, ::System::Single target)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_DELTAANGLE_OFFSET))(current, target);
		}

		/*
		static ::System::Boolean LineIntersection(::RPG::MVector2 p1, ::RPG::MVector2 p2, ::RPG::MVector2 p3, ::RPG::MVector2 p4, ::RPG::MVector2& result)
		{
			return ((::System::Boolean(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + RPG_MMATHF_LINEINTERSECTION_OFFSET))(p1, p2, p3, p4, result);
		}
		*/

		/*
		static ::System::Boolean LineSegmentIntersection(::RPG::MVector2 p1, ::RPG::MVector2 p2, ::RPG::MVector2 p3, ::RPG::MVector2 p4, ::RPG::MVector2& result)
		{
			return ((::System::Boolean(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + RPG_MMATHF_LINESEGMENTINTERSECTION_OFFSET))(p1, p2, p3, p4, result);
		}
		*/

		static ::System::Int64 RandomToLong(::System::Random* r)
		{
			return ((::System::Int64(*)(::System::Random*))((::PBYTE)hIl2Cpp + RPG_MMATHF_RANDOMTOLONG_OFFSET))(r);
		}
	};
}
