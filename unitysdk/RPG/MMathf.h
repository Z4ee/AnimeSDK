#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Random; }

#define RPG_MMATHF_ABS_1_OFFSET UNITYSDK_OFFSET(0x163BA1A0)
#define RPG_MMATHF_ABS_OFFSET UNITYSDK_OFFSET(0x163898B0)
#define RPG_MMATHF_ACOS_OFFSET UNITYSDK_OFFSET(0x16389B90)
#define RPG_MMATHF_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x163BDCC0)
#define RPG_MMATHF_ASIN_OFFSET UNITYSDK_OFFSET(0x163BD060)
#define RPG_MMATHF_ATAN2_OFFSET UNITYSDK_OFFSET(0x163BD080)
#define RPG_MMATHF_ATAN_OFFSET UNITYSDK_OFFSET(0x16396740)
#define RPG_MMATHF_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x163BD7D0)
#define RPG_MMATHF_CEIL_OFFSET UNITYSDK_OFFSET(0x163BD700)
#define RPG_MMATHF_CLAMP01_OFFSET UNITYSDK_OFFSET(0x163BD000)
#define RPG_MMATHF_CLAMP_1_OFFSET UNITYSDK_OFFSET(0x163BD8E0)
#define RPG_MMATHF_CLAMP_OFFSET UNITYSDK_OFFSET(0x163BD8C0)
#define RPG_MMATHF_COS_OFFSET UNITYSDK_OFFSET(0x163959E0)
#define RPG_MMATHF_DELTAANGLE_OFFSET UNITYSDK_OFFSET(0x163BDB80)
#define RPG_MMATHF_EXP_OFFSET UNITYSDK_OFFSET(0x16396270)
#define RPG_MMATHF_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0x163BD7F0)
#define RPG_MMATHF_FLOOR_OFFSET UNITYSDK_OFFSET(0x163BD710)
#define RPG_MMATHF_GAMMA_OFFSET UNITYSDK_OFFSET(0x163BDC40)
#define RPG_MMATHF_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x163BDD70)
#define RPG_MMATHF_LERPANGLE_OFFSET UNITYSDK_OFFSET(0x163BD930)
#define RPG_MMATHF_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x163BD920)
#define RPG_MMATHF_LERP_OFFSET UNITYSDK_OFFSET(0x163BD8F0)
#define RPG_MMATHF_LINEINTERSECTION_OFFSET UNITYSDK_OFFSET(0x163BDDB0)
#define RPG_MMATHF_LINESEGMENTINTERSECTION_OFFSET UNITYSDK_OFFSET(0x163BDEA0)
#define RPG_MMATHF_LOG10_OFFSET UNITYSDK_OFFSET(0x163BD6E0)
#define RPG_MMATHF_LOG_1_OFFSET UNITYSDK_OFFSET(0x163BD6C0)
#define RPG_MMATHF_LOG_OFFSET UNITYSDK_OFFSET(0x163BD610)
#define RPG_MMATHF_MAX_1_OFFSET UNITYSDK_OFFSET(0x163BD370)
#define RPG_MMATHF_MAX_2_OFFSET UNITYSDK_OFFSET(0x163BA170)
#define RPG_MMATHF_MAX_3_OFFSET UNITYSDK_OFFSET(0x163BD440)
#define RPG_MMATHF_MAX_OFFSET UNITYSDK_OFFSET(0x163BD360)
#define RPG_MMATHF_MIN_1_OFFSET UNITYSDK_OFFSET(0x163BD0B0)
#define RPG_MMATHF_MIN_2_OFFSET UNITYSDK_OFFSET(0x163BA130)
#define RPG_MMATHF_MIN_3_OFFSET UNITYSDK_OFFSET(0x163BD180)
#define RPG_MMATHF_MIN_4_OFFSET UNITYSDK_OFFSET(0x163BD190)
#define RPG_MMATHF_MIN_OFFSET UNITYSDK_OFFSET(0x163BD0A0)
#define RPG_MMATHF_MOVETOWARDSANGLE_OFFSET UNITYSDK_OFFSET(0x163BDA80)
#define RPG_MMATHF_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x163BDA30)
#define RPG_MMATHF_PINGPONG_OFFSET UNITYSDK_OFFSET(0x163BDD00)
#define RPG_MMATHF_POW_OFFSET UNITYSDK_OFFSET(0x16396100)
#define RPG_MMATHF_RANDOMTOLONG_OFFSET UNITYSDK_OFFSET(0x163BDFB0)
#define RPG_MMATHF_REPEAT_OFFSET UNITYSDK_OFFSET(0x163BD9E0)
#define RPG_MMATHF_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x163BD810)
#define RPG_MMATHF_ROUND_OFFSET UNITYSDK_OFFSET(0x163BD720)
#define RPG_MMATHF_SIGN_OFFSET UNITYSDK_OFFSET(0x16389890)
#define RPG_MMATHF_SIN_OFFSET UNITYSDK_OFFSET(0x16395A00)
#define RPG_MMATHF_SMOOTHSTEP_OFFSET UNITYSDK_OFFSET(0x163BDBF0)
#define RPG_MMATHF_SQRT_OFFSET UNITYSDK_OFFSET(0x163898F0)
#define RPG_MMATHF_TAN_OFFSET UNITYSDK_OFFSET(0x163BD040)
#define RPG_MMATHF__CCTOR_OFFSET UNITYSDK_OFFSET(0x163BE0B0)

namespace RPG
{
	inline static constexpr unsigned int MMathf_TypeDefinitionIndex = 6376;

	struct alignas(1) MMathf
	{
		static ::System::Single* StaticGet_Epsilon()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MMathf_TypeDefinitionIndex)->GetStaticField(0x320);
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

		static ::System::Single Sin(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_SIN_OFFSET))(a1);
		}

		static ::System::Single Cos(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_COS_OFFSET))(a1);
		}

		static ::System::Single Tan(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_TAN_OFFSET))(a1);
		}

		static ::System::Single Asin(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_ASIN_OFFSET))(a1);
		}

		static ::System::Single Acos(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_ACOS_OFFSET))(a1);
		}

		static ::System::Single Atan(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_ATAN_OFFSET))(a1);
		}

		static ::System::Single Atan2(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_ATAN2_OFFSET))(a1, a2);
		}

		static ::System::Single Sqrt(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_SQRT_OFFSET))(a1);
		}

		static ::System::Single Abs(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_ABS_OFFSET))(a1);
		}

		static ::System::Int32 Abs_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_MMATHF_ABS_1_OFFSET))(a1);
		}

		static ::System::Single Min(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_MIN_OFFSET))(a1, a2);
		}

		static ::System::Single Min_1(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_MMATHF_MIN_1_OFFSET))(a1);
		}

		static ::System::Int32 Min_2(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_MMATHF_MIN_2_OFFSET))(a1, a2);
		}

		static ::System::UInt32 Min_3(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_MMATHF_MIN_3_OFFSET))(a1, a2);
		}

		static ::System::Int32 Min_4(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_MMATHF_MIN_4_OFFSET))(a1);
		}

		static ::System::Single Max(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_MAX_OFFSET))(a1, a2);
		}

		static ::System::Single Max_1(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_MMATHF_MAX_1_OFFSET))(a1);
		}

		static ::System::Int32 Max_2(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_MMATHF_MAX_2_OFFSET))(a1, a2);
		}

		static ::System::Int32 Max_3(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_MMATHF_MAX_3_OFFSET))(a1);
		}

		static ::System::Single Pow(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_POW_OFFSET))(a1, a2);
		}

		static ::System::Single Exp(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_EXP_OFFSET))(a1);
		}

		static ::System::Single Log(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_LOG_OFFSET))(a1, a2);
		}

		static ::System::Single Log_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_LOG_1_OFFSET))(a1);
		}

		static ::System::Single Log10(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_LOG10_OFFSET))(a1);
		}

		static ::System::Single Ceil(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_CEIL_OFFSET))(a1);
		}

		static ::System::Single Floor(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_FLOOR_OFFSET))(a1);
		}

		static ::System::Single Round(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_ROUND_OFFSET))(a1);
		}

		static ::System::Int32 CeilToInt(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_CEILTOINT_OFFSET))(a1);
		}

		static ::System::Int32 FloorToInt(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_FLOORTOINT_OFFSET))(a1);
		}

		static ::System::Int32 RoundToInt(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_ROUNDTOINT_OFFSET))(a1);
		}

		static ::System::Single Sign(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_SIGN_OFFSET))(a1);
		}

		static ::System::Single Clamp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_CLAMP_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 Clamp_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_MMATHF_CLAMP_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Clamp01(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_CLAMP01_OFFSET))(a1);
		}

		static ::System::Single Lerp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_LERP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single LerpUnclamped(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_LERPUNCLAMPED_OFFSET))(a1, a2, a3);
		}

		static ::System::Single LerpAngle(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_LERPANGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single MoveTowards(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_MOVETOWARDS_OFFSET))(a1, a2, a3);
		}

		static ::System::Single MoveTowardsAngle(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_MOVETOWARDSANGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single SmoothStep(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_SMOOTHSTEP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Gamma(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_GAMMA_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Approximately(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_APPROXIMATELY_OFFSET))(a1, a2);
		}

		static ::System::Single Repeat(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_REPEAT_OFFSET))(a1, a2);
		}

		static ::System::Single PingPong(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_PINGPONG_OFFSET))(a1, a2);
		}

		static ::System::Single InverseLerp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_INVERSELERP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single DeltaAngle(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MMATHF_DELTAANGLE_OFFSET))(a1, a2);
		}

		/*
		static ::System::Boolean LineIntersection(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3, ::RPG::MVector2 a4, ::RPG::MVector2& a5)
		{
			return ((::System::Boolean(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + RPG_MMATHF_LINEINTERSECTION_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean LineSegmentIntersection(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3, ::RPG::MVector2 a4, ::RPG::MVector2& a5)
		{
			return ((::System::Boolean(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + RPG_MMATHF_LINESEGMENTINTERSECTION_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		static ::System::Int64 RandomToLong(::System::Random* a1)
		{
			return ((::System::Int64(*)(::System::Random*))((::PBYTE)hIl2Cpp + RPG_MMATHF_RANDOMTOLONG_OFFSET))(a1);
		}
	};
}
