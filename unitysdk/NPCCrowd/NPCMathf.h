#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_NPCMATHF_ARRIVALSPEEDENVELOPE_OFFSET UNITYSDK_OFFSET(0xD25F8C0)
#define NPCCROWD_NPCMATHF_CALCDIRECTIONALSPEEDSCALE_OFFSET UNITYSDK_OFFSET(0xD25F930)
#define NPCCROWD_NPCMATHF_CLAMP_OFFSET UNITYSDK_OFFSET(0xD25EE50)
#define NPCCROWD_NPCMATHF_DISTANCE_OFFSET UNITYSDK_OFFSET(0xD25ED20)
#define NPCCROWD_NPCMATHF_DISTSQUARED_OFFSET UNITYSDK_OFFSET(0xD25EDB0)
#define NPCCROWD_NPCMATHF_EXPONENTIALSMOOTHINGANGLE_OFFSET UNITYSDK_OFFSET(0xD25E850)
#define NPCCROWD_NPCMATHF_FMOD_OFFSET UNITYSDK_OFFSET(0xD25EA30)
#define NPCCROWD_NPCMATHF_FRAC_OFFSET UNITYSDK_OFFSET(0xD25E9D0)
#define NPCCROWD_NPCMATHF_FRANDINT_OFFSET UNITYSDK_OFFSET(0xD25F700)
#define NPCCROWD_NPCMATHF_FRAND_OFFSET UNITYSDK_OFFSET(0xD25F510)
#define NPCCROWD_NPCMATHF_FREEZEAXIS_OFFSET UNITYSDK_OFFSET(0xD25F2D0)
#define NPCCROWD_NPCMATHF_GETBOOL3_OFFSET UNITYSDK_OFFSET(0xD25FCA0)
#define NPCCROWD_NPCMATHF_GETYAWFROMDIRECTION_OFFSET UNITYSDK_OFFSET(0xD25ECA0)
#define NPCCROWD_NPCMATHF_INVEXPAPPROX_OFFSET UNITYSDK_OFFSET(0xD25E7C0)
#define NPCCROWD_NPCMATHF_LERPANGLE_OFFSET UNITYSDK_OFFSET(0xD25EBD0)
#define NPCCROWD_NPCMATHF_MAKEBOOL3_OFFSET UNITYSDK_OFFSET(0xD25FC40)
#define NPCCROWD_NPCMATHF_MULTI_OFFSET UNITYSDK_OFFSET(0xD25E710)
#define NPCCROWD_NPCMATHF_RANDRANGE_1_OFFSET UNITYSDK_OFFSET(0xD25F680)
#define NPCCROWD_NPCMATHF_RANDRANGE_2_OFFSET UNITYSDK_OFFSET(0xD25F7A0)
#define NPCCROWD_NPCMATHF_RANDRANGE_3_OFFSET UNITYSDK_OFFSET(0xD25F850)
#define NPCCROWD_NPCMATHF_RANDRANGE_OFFSET UNITYSDK_OFFSET(0xD25F5B0)
#define NPCCROWD_NPCMATHF_SQUARE_OFFSET UNITYSDK_OFFSET(0xD25F470)
#define NPCCROWD_NPCMATHF_UPZERO_OFFSET UNITYSDK_OFFSET(0xD25F4C0)
#define NPCCROWD_NPCMATHF_VECTORDAMPERSPRINTCRITICAL_OFFSET UNITYSDK_OFFSET(0xD25EF70)
#define NPCCROWD_NPCMATHF_WRAPANGLE_OFFSET UNITYSDK_OFFSET(0xD25EAA0)
#define NPCCROWD_NPCMATHF__CCTOR_OFFSET UNITYSDK_OFFSET(0xD25FD10)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCMathf_TypeDefinitionIndex = 79407;

	class NPCMathf : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_RandSeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCMathf_TypeDefinitionIndex)->GetStaticField(0xB7B0);
		}
		// static const ::System::Single PI; // 0x0
		// static const ::System::Single SMALL_NUMBER; // 0x0
		// static const ::System::Single GRAPH_TIME_NON_DEGLECTABLE; // 0x0
		// static const ::System::Single KINDA_SMALL_NUMBER; // 0x0
		// static const ::System::Single HALF_KINDA_SMALL_NUMBER; // 0x0
		// static const ::System::Single PATH_FIND_NUMBER; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Vector3 Multi(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_MULTI_OFFSET))(a, b);
		}

		static ::System::Single InvExpApprox(::System::Single X)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_INVEXPAPPROX_OFFSET))(X);
		}

		static ::System::Single ExponentialSmoothingAngle(::System::Single Angle, ::System::Single TargetAngle, ::System::Single DeltaTime, ::System::Single SmoothingTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_EXPONENTIALSMOOTHINGANGLE_OFFSET))(Angle, TargetAngle, DeltaTime, SmoothingTime);
		}

		static ::System::Single Frac(::System::Single a)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_FRAC_OFFSET))(a);
		}

		static ::System::Single Fmod(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_FMOD_OFFSET))(a, b);
		}

		static ::System::Single WrapAngle(::System::Single Angle)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_WRAPANGLE_OFFSET))(Angle);
		}

		static ::System::Single LerpAngle(::System::Single AngleA, ::System::Single AngleB, ::System::Single T)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_LERPANGLE_OFFSET))(AngleA, AngleB, T);
		}

		static ::System::Single GetYawFromDirection(::UnityEngine::Vector3 Direction)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_GETYAWFROMDIRECTION_OFFSET))(Direction);
		}

		static ::System::Single Distance(::UnityEngine::Vector3 a)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_DISTANCE_OFFSET))(a);
		}

		static ::System::Single DistSquared(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_DISTSQUARED_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector3 Clamp(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_CLAMP_OFFSET))(v, min, max);
		}

		static ::UnityEngine::Vector3 VectorDamperSprintCritical(::UnityEngine::Vector3 vecx, ::UnityEngine::Vector3 x_goal, ::UnityEngine::Vector3& vecv, ::UnityEngine::Vector3 v_goal, ::System::Single halflife, ::System::Single dt, ::System::Byte freezeFlags)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Byte))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_VECTORDAMPERSPRINTCRITICAL_OFFSET))(vecx, x_goal, vecv, v_goal, halflife, dt, freezeFlags);
		}

		static ::UnityEngine::Vector3 FreezeAxis(::UnityEngine::Vector3 oldVal, ::UnityEngine::Vector3 newVal, ::System::Byte freezeFlags)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Byte))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_FREEZEAXIS_OFFSET))(oldVal, newVal, freezeFlags);
		}

		static ::System::Single Square(::System::Single q)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_SQUARE_OFFSET))(q);
		}

		static ::System::Void UpZero(::UnityEngine::Vector3& v)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_UPZERO_OFFSET))(v);
		}

		static ::System::Single FRand(::System::Int32 index)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_FRAND_OFFSET))(index);
		}

		static ::System::Single RandRange(::System::Int32 index, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_RANDRANGE_OFFSET))(index, min, max);
		}

		static ::System::Single RandRange_1(::System::Int32 seed, ::System::Int32 index, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_RANDRANGE_1_OFFSET))(seed, index, min, max);
		}

		static ::System::Int32 FRandInt(::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_FRANDINT_OFFSET))(index);
		}

		static ::System::Int32 RandRange_2(::System::Int32 index, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_RANDRANGE_2_OFFSET))(index, min, max);
		}

		static ::System::Single RandRange_3(::System::Int32 seed, ::System::Int32 index, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_RANDRANGE_3_OFFSET))(seed, index, min, max);
		}

		static ::System::Single ArrivalSpeedEnvelope(::System::Single NormalizedDistance)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_ARRIVALSPEEDENVELOPE_OFFSET))(NormalizedDistance);
		}

		static ::System::Single CalcDirectionalSpeedScale(::UnityEngine::Vector3 ForwardDirection, ::UnityEngine::Vector3 SteerDirection)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_CALCDIRECTIONALSPEEDSCALE_OFFSET))(ForwardDirection, SteerDirection);
		}

		static ::System::Byte MakeBool3(::System::Boolean x, ::System::Boolean y, ::System::Boolean z)
		{
			return ((::System::Byte(*)(::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_MAKEBOOL3_OFFSET))(x, y, z);
		}

		static ::System::Byte GetBool3(::System::Byte flags, ::System::Boolean& getX, ::System::Boolean& getY, ::System::Boolean& getZ)
		{
			return ((::System::Byte(*)(::System::Byte, ::System::Boolean&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMATHF_GETBOOL3_OFFSET))(flags, getX, getY, getZ);
		}
	};
}
