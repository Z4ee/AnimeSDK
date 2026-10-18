#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2StepContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2GETWHEELJOINTFORCE_OFFSET UNITYSDK_OFFSET(0x1C867D30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2GETWHEELJOINTTORQUE_OFFSET UNITYSDK_OFFSET(0x1C867E90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2PREPAREWHEELJOINT_OFFSET UNITYSDK_OFFSET(0x1C867EC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2SOLVEWHEELJOINT_OFFSET UNITYSDK_OFFSET(0x1C868970)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WARMSTARTWHEELJOINT_OFFSET UNITYSDK_OFFSET(0x1C8684A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_ENABLELIMIT_OFFSET UNITYSDK_OFFSET(0x1C867840)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_ENABLEMOTOR_OFFSET UNITYSDK_OFFSET(0x1C867AA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_ENABLESPRING_OFFSET UNITYSDK_OFFSET(0x1C867610)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_GETLOWERLIMIT_OFFSET UNITYSDK_OFFSET(0x1C867910)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_GETMAXMOTORTORQUE_OFFSET UNITYSDK_OFFSET(0x1C867CE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_GETMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x1C867BD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_GETMOTORTORQUE_OFFSET UNITYSDK_OFFSET(0x1C867C20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_GETSPRINGDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0x1C8677F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_GETSPRINGHERTZ_OFFSET UNITYSDK_OFFSET(0x1C867740)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_GETUPPERLIMIT_OFFSET UNITYSDK_OFFSET(0x1C867960)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_ISLIMITENABLED_OFFSET UNITYSDK_OFFSET(0x1C8678B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_ISMOTORENABLED_OFFSET UNITYSDK_OFFSET(0x1C867B10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_ISSPRINGENABLED_OFFSET UNITYSDK_OFFSET(0x1C867680)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_SETLIMITS_OFFSET UNITYSDK_OFFSET(0x1C8679B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_SETMAXMOTORTORQUE_OFFSET UNITYSDK_OFFSET(0x1C867C80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_SETMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x1C867B70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_SETSPRINGDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0x1C867790)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_SETSPRINGHERTZ_OFFSET UNITYSDK_OFFSET(0x1C8676E0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2WheelJoints_TypeDefinitionIndex = 36812;

	class B2WheelJoints : public ::System::Object
	{
	public:
		static ::System::Void b2WheelJoint_EnableSpring(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_ENABLESPRING_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2WheelJoint_IsSpringEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_ISSPRINGENABLED_OFFSET))(a1);
		}

		static ::System::Void b2WheelJoint_SetSpringHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_SETSPRINGHERTZ_OFFSET))(a1, a2);
		}

		static ::System::Single b2WheelJoint_GetSpringHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_GETSPRINGHERTZ_OFFSET))(a1);
		}

		static ::System::Void b2WheelJoint_SetSpringDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_SETSPRINGDAMPINGRATIO_OFFSET))(a1, a2);
		}

		static ::System::Single b2WheelJoint_GetSpringDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_GETSPRINGDAMPINGRATIO_OFFSET))(a1);
		}

		static ::System::Void b2WheelJoint_EnableLimit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_ENABLELIMIT_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2WheelJoint_IsLimitEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_ISLIMITENABLED_OFFSET))(a1);
		}

		static ::System::Single b2WheelJoint_GetLowerLimit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_GETLOWERLIMIT_OFFSET))(a1);
		}

		static ::System::Single b2WheelJoint_GetUpperLimit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_GETUPPERLIMIT_OFFSET))(a1);
		}

		static ::System::Void b2WheelJoint_SetLimits(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_SETLIMITS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2WheelJoint_EnableMotor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_ENABLEMOTOR_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2WheelJoint_IsMotorEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_ISMOTORENABLED_OFFSET))(a1);
		}

		static ::System::Void b2WheelJoint_SetMotorSpeed(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_SETMOTORSPEED_OFFSET))(a1, a2);
		}

		static ::System::Single b2WheelJoint_GetMotorSpeed(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_GETMOTORSPEED_OFFSET))(a1);
		}

		static ::System::Single b2WheelJoint_GetMotorTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_GETMOTORTORQUE_OFFSET))(a1);
		}

		static ::System::Void b2WheelJoint_SetMaxMotorTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_SETMAXMOTORTORQUE_OFFSET))(a1, a2);
		}

		static ::System::Single b2WheelJoint_GetMaxMotorTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WHEELJOINT_GETMAXMOTORTORQUE_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2GetWheelJointForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2GETWHEELJOINTFORCE_OFFSET))(a1, a2);
		}

		static ::System::Single b2GetWheelJointTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2GETWHEELJOINTTORQUE_OFFSET))(a1, a2);
		}

		static ::System::Void b2PrepareWheelJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2PREPAREWHEELJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2WarmStartWheelJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2WARMSTARTWHEELJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2SolveWheelJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WHEELJOINTS_B2SOLVEWHEELJOINT_OFFSET))(a1, a2, a3);
		}
	};
}
