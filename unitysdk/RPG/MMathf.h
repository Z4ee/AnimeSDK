#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Random; }

#define RPG_MMATHF_ABS_1_OFFSET UNITYSDK_OFFSET(0x1D785A80)
#define RPG_MMATHF_ABS_OFFSET UNITYSDK_OFFSET(0x1D7551C0)
#define RPG_MMATHF_ACOS_OFFSET UNITYSDK_OFFSET(0x1D7554A0)
#define RPG_MMATHF_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x1D7895B0)
#define RPG_MMATHF_ASIN_OFFSET UNITYSDK_OFFSET(0x1D788950)
#define RPG_MMATHF_ATAN2_OFFSET UNITYSDK_OFFSET(0x1D788970)
#define RPG_MMATHF_ATAN_OFFSET UNITYSDK_OFFSET(0x1D762060)
#define RPG_MMATHF_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x1D7890C0)
#define RPG_MMATHF_CEIL_OFFSET UNITYSDK_OFFSET(0x1D788FF0)
#define RPG_MMATHF_CLAMP01_OFFSET UNITYSDK_OFFSET(0x1D7888F0)
#define RPG_MMATHF_CLAMP_1_OFFSET UNITYSDK_OFFSET(0x1D7891D0)
#define RPG_MMATHF_CLAMP_OFFSET UNITYSDK_OFFSET(0x1D7891B0)
#define RPG_MMATHF_COS_OFFSET UNITYSDK_OFFSET(0x1D761300)
#define RPG_MMATHF_DELTAANGLE_OFFSET UNITYSDK_OFFSET(0x1D789470)
#define RPG_MMATHF_EXP_OFFSET UNITYSDK_OFFSET(0x1D761B90)
#define RPG_MMATHF_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0x1D7890E0)
#define RPG_MMATHF_FLOOR_OFFSET UNITYSDK_OFFSET(0x1D789000)
#define RPG_MMATHF_GAMMA_OFFSET UNITYSDK_OFFSET(0x1D789530)
#define RPG_MMATHF_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x1D789660)
#define RPG_MMATHF_LERPANGLE_OFFSET UNITYSDK_OFFSET(0x1D789220)
#define RPG_MMATHF_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1D789210)
#define RPG_MMATHF_LERP_OFFSET UNITYSDK_OFFSET(0x1D7891E0)
#define RPG_MMATHF_LINEINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1D7896A0)
#define RPG_MMATHF_LINESEGMENTINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1D789790)
#define RPG_MMATHF_LOG10_OFFSET UNITYSDK_OFFSET(0x1D788FD0)
#define RPG_MMATHF_LOG_1_OFFSET UNITYSDK_OFFSET(0x1D788FB0)
#define RPG_MMATHF_LOG_OFFSET UNITYSDK_OFFSET(0x1D788F00)
#define RPG_MMATHF_MAX_1_OFFSET UNITYSDK_OFFSET(0x1D788C60)
#define RPG_MMATHF_MAX_2_OFFSET UNITYSDK_OFFSET(0x1D785A50)
#define RPG_MMATHF_MAX_3_OFFSET UNITYSDK_OFFSET(0x1D788D30)
#define RPG_MMATHF_MAX_OFFSET UNITYSDK_OFFSET(0x1D788C50)
#define RPG_MMATHF_MIN_1_OFFSET UNITYSDK_OFFSET(0x1D7889A0)
#define RPG_MMATHF_MIN_2_OFFSET UNITYSDK_OFFSET(0x1D785A10)
#define RPG_MMATHF_MIN_3_OFFSET UNITYSDK_OFFSET(0x1D788A70)
#define RPG_MMATHF_MIN_4_OFFSET UNITYSDK_OFFSET(0x1D788A80)
#define RPG_MMATHF_MIN_OFFSET UNITYSDK_OFFSET(0x1D788990)
#define RPG_MMATHF_MOVETOWARDSANGLE_OFFSET UNITYSDK_OFFSET(0x1D789370)
#define RPG_MMATHF_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x1D789320)
#define RPG_MMATHF_PINGPONG_OFFSET UNITYSDK_OFFSET(0x1D7895F0)
#define RPG_MMATHF_POW_OFFSET UNITYSDK_OFFSET(0x1D761A20)
#define RPG_MMATHF_RANDOMTOLONG_OFFSET UNITYSDK_OFFSET(0x1D7898A0)
#define RPG_MMATHF_REPEAT_OFFSET UNITYSDK_OFFSET(0x1D7892D0)
#define RPG_MMATHF_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x1D789100)
#define RPG_MMATHF_ROUND_OFFSET UNITYSDK_OFFSET(0x1D789010)
#define RPG_MMATHF_SIGN_OFFSET UNITYSDK_OFFSET(0x1D7551A0)
#define RPG_MMATHF_SIN_OFFSET UNITYSDK_OFFSET(0x1D761320)
#define RPG_MMATHF_SMOOTHSTEP_OFFSET UNITYSDK_OFFSET(0x1D7894E0)
#define RPG_MMATHF_SQRT_OFFSET UNITYSDK_OFFSET(0x1D755200)
#define RPG_MMATHF_TAN_OFFSET UNITYSDK_OFFSET(0x1D788930)
#define RPG_MMATHF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7899A0)

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
