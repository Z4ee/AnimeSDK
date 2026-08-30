#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2StepContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_ENABLELIMIT_OFFSET UNITYSDK_OFFSET(0xC2F3660)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_ENABLEMOTOR_OFFSET UNITYSDK_OFFSET(0xC2F3F00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_ENABLESPRING_OFFSET UNITYSDK_OFFSET(0xC2F3CE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETCURRENTLENGTH_OFFSET UNITYSDK_OFFSET(0xC2F3AE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETLENGTH_OFFSET UNITYSDK_OFFSET(0xC2F3610)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETMAXLENGTH_OFFSET UNITYSDK_OFFSET(0xC2F3A90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETMAXMOTORFORCE_OFFSET UNITYSDK_OFFSET(0xC2F4140)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETMINLENGTH_OFFSET UNITYSDK_OFFSET(0xC2F3A40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETMOTORFORCE_OFFSET UNITYSDK_OFFSET(0xC2F4080)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETMOTORSPEED_OFFSET UNITYSDK_OFFSET(0xC2F4030)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETSPRINGDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0xC2F3EB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETSPRINGHERTZ_OFFSET UNITYSDK_OFFSET(0xC2F3E60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_ISLIMITENABLED_OFFSET UNITYSDK_OFFSET(0xC2F36C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_ISMOTORENABLED_OFFSET UNITYSDK_OFFSET(0xC2F3F70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_ISSPRINGENABLED_OFFSET UNITYSDK_OFFSET(0xC2F3D40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_SETLENGTHRANGE_OFFSET UNITYSDK_OFFSET(0xC2F3720)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_SETLENGTH_OFFSET UNITYSDK_OFFSET(0xC2F33B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_SETMAXMOTORFORCE_OFFSET UNITYSDK_OFFSET(0xC2F40E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_SETMOTORSPEED_OFFSET UNITYSDK_OFFSET(0xC2F3FD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_SETSPRINGDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0xC2F3E00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_SETSPRINGHERTZ_OFFSET UNITYSDK_OFFSET(0xC2F3DA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2GETDISTANCEJOINTFORCE_OFFSET UNITYSDK_OFFSET(0xC2F4190)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2PREPAREDISTANCEJOINT_OFFSET UNITYSDK_OFFSET(0xC2F43B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2SOLVEDISTANCEJOINT_OFFSET UNITYSDK_OFFSET(0xC2F4D20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2WARMSTARTDISTANCEJOINT_OFFSET UNITYSDK_OFFSET(0xC2F4890)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2DistanceJoints_TypeDefinitionIndex = 35973;

	class B2DistanceJoints : public ::System::Object
	{
	public:
		static ::System::Void b2DistanceJoint_SetLength(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_SETLENGTH_OFFSET))(a1, a2);
		}

		static ::System::Single b2DistanceJoint_GetLength(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETLENGTH_OFFSET))(a1);
		}

		static ::System::Void b2DistanceJoint_EnableLimit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_ENABLELIMIT_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2DistanceJoint_IsLimitEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_ISLIMITENABLED_OFFSET))(a1);
		}

		static ::System::Void b2DistanceJoint_SetLengthRange(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_SETLENGTHRANGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single b2DistanceJoint_GetMinLength(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETMINLENGTH_OFFSET))(a1);
		}

		static ::System::Single b2DistanceJoint_GetMaxLength(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETMAXLENGTH_OFFSET))(a1);
		}

		static ::System::Single b2DistanceJoint_GetCurrentLength(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETCURRENTLENGTH_OFFSET))(a1);
		}

		static ::System::Void b2DistanceJoint_EnableSpring(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_ENABLESPRING_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2DistanceJoint_IsSpringEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_ISSPRINGENABLED_OFFSET))(a1);
		}

		static ::System::Void b2DistanceJoint_SetSpringHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_SETSPRINGHERTZ_OFFSET))(a1, a2);
		}

		static ::System::Void b2DistanceJoint_SetSpringDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_SETSPRINGDAMPINGRATIO_OFFSET))(a1, a2);
		}

		static ::System::Single b2DistanceJoint_GetSpringHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETSPRINGHERTZ_OFFSET))(a1);
		}

		static ::System::Single b2DistanceJoint_GetSpringDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETSPRINGDAMPINGRATIO_OFFSET))(a1);
		}

		static ::System::Void b2DistanceJoint_EnableMotor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_ENABLEMOTOR_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2DistanceJoint_IsMotorEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_ISMOTORENABLED_OFFSET))(a1);
		}

		static ::System::Void b2DistanceJoint_SetMotorSpeed(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_SETMOTORSPEED_OFFSET))(a1, a2);
		}

		static ::System::Single b2DistanceJoint_GetMotorSpeed(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETMOTORSPEED_OFFSET))(a1);
		}

		static ::System::Single b2DistanceJoint_GetMotorForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETMOTORFORCE_OFFSET))(a1);
		}

		static ::System::Void b2DistanceJoint_SetMaxMotorForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_SETMAXMOTORFORCE_OFFSET))(a1, a2);
		}

		static ::System::Single b2DistanceJoint_GetMaxMotorForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2DISTANCEJOINT_GETMAXMOTORFORCE_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2GetDistanceJointForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2GETDISTANCEJOINTFORCE_OFFSET))(a1, a2);
		}

		static ::System::Void b2PrepareDistanceJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2PREPAREDISTANCEJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2WarmStartDistanceJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2WARMSTARTDISTANCEJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2SolveDistanceJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCEJOINTS_B2SOLVEDISTANCEJOINT_OFFSET))(a1, a2, a3);
		}
	};
}
