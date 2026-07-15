#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2StepContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2GETPRISMATICJOINTFORCE_OFFSET UNITYSDK_OFFSET(0xB64A380)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2GETPRISMATICJOINTTORQUE_OFFSET UNITYSDK_OFFSET(0xB64A710)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PREPAREPRISMATICJOINT_OFFSET UNITYSDK_OFFSET(0xB64BF60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ENABLELIMIT_OFFSET UNITYSDK_OFFSET(0xB655560)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ENABLEMOTOR_OFFSET UNITYSDK_OFFSET(0xB6557B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ENABLESPRING_OFFSET UNITYSDK_OFFSET(0xB655290)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETLOWERLIMIT_OFFSET UNITYSDK_OFFSET(0xB655620)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETMAXMOTORFORCE_OFFSET UNITYSDK_OFFSET(0xB6559E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETMOTORFORCE_OFFSET UNITYSDK_OFFSET(0xB655920)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETMOTORSPEED_OFFSET UNITYSDK_OFFSET(0xB6558D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETSPEED_OFFSET UNITYSDK_OFFSET(0xB655C20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETSPRINGDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0xB655460)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETSPRINGHERTZ_OFFSET UNITYSDK_OFFSET(0xB6553B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETTARGETTRANSLATION_OFFSET UNITYSDK_OFFSET(0xB655510)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETTRANSLATION_OFFSET UNITYSDK_OFFSET(0xB655A30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETUPPERLIMIT_OFFSET UNITYSDK_OFFSET(0xB655670)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ISLIMITENABLED_OFFSET UNITYSDK_OFFSET(0xB6555D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ISMOTORENABLED_OFFSET UNITYSDK_OFFSET(0xB655820)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ISSPRINGENABLED_OFFSET UNITYSDK_OFFSET(0xB655300)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETLIMITS_OFFSET UNITYSDK_OFFSET(0xB6556C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETMAXMOTORFORCE_OFFSET UNITYSDK_OFFSET(0xB655980)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETMOTORSPEED_OFFSET UNITYSDK_OFFSET(0xB655870)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETSPRINGDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0xB655400)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETSPRINGHERTZ_OFFSET UNITYSDK_OFFSET(0xB655350)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETTARGETTRANSLATION_OFFSET UNITYSDK_OFFSET(0xB6554B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2SOLVEPRISMATICJOINT_OFFSET UNITYSDK_OFFSET(0xB64E6D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2WARMSTARTPRISMATICJOINT_OFFSET UNITYSDK_OFFSET(0xB64D010)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2PrismaticJoints_TypeDefinitionIndex = 35182;

	class B2PrismaticJoints : public ::System::Object
	{
	public:
		static ::System::Void b2PrismaticJoint_EnableSpring(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ENABLESPRING_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2PrismaticJoint_IsSpringEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ISSPRINGENABLED_OFFSET))(a1);
		}

		static ::System::Void b2PrismaticJoint_SetSpringHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETSPRINGHERTZ_OFFSET))(a1, a2);
		}

		static ::System::Single b2PrismaticJoint_GetSpringHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETSPRINGHERTZ_OFFSET))(a1);
		}

		static ::System::Void b2PrismaticJoint_SetSpringDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETSPRINGDAMPINGRATIO_OFFSET))(a1, a2);
		}

		static ::System::Single b2PrismaticJoint_GetSpringDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETSPRINGDAMPINGRATIO_OFFSET))(a1);
		}

		static ::System::Void b2PrismaticJoint_SetTargetTranslation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETTARGETTRANSLATION_OFFSET))(a1, a2);
		}

		static ::System::Single b2PrismaticJoint_GetTargetTranslation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETTARGETTRANSLATION_OFFSET))(a1);
		}

		static ::System::Void b2PrismaticJoint_EnableLimit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ENABLELIMIT_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2PrismaticJoint_IsLimitEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ISLIMITENABLED_OFFSET))(a1);
		}

		static ::System::Single b2PrismaticJoint_GetLowerLimit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETLOWERLIMIT_OFFSET))(a1);
		}

		static ::System::Single b2PrismaticJoint_GetUpperLimit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETUPPERLIMIT_OFFSET))(a1);
		}

		static ::System::Void b2PrismaticJoint_SetLimits(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETLIMITS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2PrismaticJoint_EnableMotor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ENABLEMOTOR_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2PrismaticJoint_IsMotorEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ISMOTORENABLED_OFFSET))(a1);
		}

		static ::System::Void b2PrismaticJoint_SetMotorSpeed(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETMOTORSPEED_OFFSET))(a1, a2);
		}

		static ::System::Single b2PrismaticJoint_GetMotorSpeed(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETMOTORSPEED_OFFSET))(a1);
		}

		static ::System::Single b2PrismaticJoint_GetMotorForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETMOTORFORCE_OFFSET))(a1);
		}

		static ::System::Void b2PrismaticJoint_SetMaxMotorForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETMAXMOTORFORCE_OFFSET))(a1, a2);
		}

		static ::System::Single b2PrismaticJoint_GetMaxMotorForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETMAXMOTORFORCE_OFFSET))(a1);
		}

		static ::System::Single b2PrismaticJoint_GetTranslation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETTRANSLATION_OFFSET))(a1);
		}

		static ::System::Single b2PrismaticJoint_GetSpeed(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETSPEED_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2GetPrismaticJointForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2GETPRISMATICJOINTFORCE_OFFSET))(a1, a2);
		}

		static ::System::Single b2GetPrismaticJointTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2GETPRISMATICJOINTTORQUE_OFFSET))(a1, a2);
		}

		static ::System::Void b2PreparePrismaticJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PREPAREPRISMATICJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2WarmStartPrismaticJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2WARMSTARTPRISMATICJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2SolvePrismaticJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2SOLVEPRISMATICJOINT_OFFSET))(a1, a2, a3);
		}
	};
}
