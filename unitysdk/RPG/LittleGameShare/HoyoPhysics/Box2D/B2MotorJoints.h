#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2StepContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2GETMOTORJOINTFORCE_OFFSET UNITYSDK_OFFSET(0xB64A240)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2GETMOTORJOINTTORQUE_OFFSET UNITYSDK_OFFSET(0xB64A6B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2MOTORJOINT_GETCORRECTIONFACTOR_OFFSET UNITYSDK_OFFSET(0xB654770)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2MOTORJOINT_GETMAXFORCE_OFFSET UNITYSDK_OFFSET(0xB654560)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2MOTORJOINT_GETMAXTORQUE_OFFSET UNITYSDK_OFFSET(0xB654660)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2MOTORJOINT_SETCORRECTIONFACTOR_OFFSET UNITYSDK_OFFSET(0xB6546B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2MOTORJOINT_SETMAXFORCE_OFFSET UNITYSDK_OFFSET(0xB6544B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2MOTORJOINT_SETMAXTORQUE_OFFSET UNITYSDK_OFFSET(0xB6545B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2PREPAREMOTORJOINT_OFFSET UNITYSDK_OFFSET(0xB64B500)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2SOLVEMOTORJOINT_OFFSET UNITYSDK_OFFSET(0xB64D8E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2WARMSTARTMOTORJOINT_OFFSET UNITYSDK_OFFSET(0xB64C950)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2MotorJoints_TypeDefinitionIndex = 35166;

	class B2MotorJoints : public ::System::Object
	{
	public:
		static ::System::Void b2MotorJoint_SetMaxForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2MOTORJOINT_SETMAXFORCE_OFFSET))(a1, a2);
		}

		static ::System::Single b2MotorJoint_GetMaxForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2MOTORJOINT_GETMAXFORCE_OFFSET))(a1);
		}

		static ::System::Void b2MotorJoint_SetMaxTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2MOTORJOINT_SETMAXTORQUE_OFFSET))(a1, a2);
		}

		static ::System::Single b2MotorJoint_GetMaxTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2MOTORJOINT_GETMAXTORQUE_OFFSET))(a1);
		}

		static ::System::Void b2MotorJoint_SetCorrectionFactor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2MOTORJOINT_SETCORRECTIONFACTOR_OFFSET))(a1, a2);
		}

		static ::System::Single b2MotorJoint_GetCorrectionFactor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2MOTORJOINT_GETCORRECTIONFACTOR_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2GetMotorJointForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2GETMOTORJOINTFORCE_OFFSET))(a1, a2);
		}

		static ::System::Single b2GetMotorJointTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2GETMOTORJOINTTORQUE_OFFSET))(a1, a2);
		}

		static ::System::Void b2PrepareMotorJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2PREPAREMOTORJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2WarmStartMotorJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2WARMSTARTMOTORJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2SolveMotorJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTORJOINTS_B2SOLVEMOTORJOINT_OFFSET))(a1, a2);
		}
	};
}
