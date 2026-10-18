#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2StepContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2GETMOUSEJOINTFORCE_OFFSET UNITYSDK_OFFSET(0x1C812D40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2GETMOUSEJOINTTORQUE_OFFSET UNITYSDK_OFFSET(0x1C813140)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2MOUSEJOINT_GETMAXFORCE_OFFSET UNITYSDK_OFFSET(0x1C81D790)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2MOUSEJOINT_GETSPRINGDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0x1C81D6E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2MOUSEJOINT_GETSPRINGHERTZ_OFFSET UNITYSDK_OFFSET(0x1C81D630)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2MOUSEJOINT_SETMAXFORCE_OFFSET UNITYSDK_OFFSET(0x1C81D730)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2MOUSEJOINT_SETSPRINGDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0x1C81D680)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2MOUSEJOINT_SETSPRINGHERTZ_OFFSET UNITYSDK_OFFSET(0x1C81D5D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2PREPAREMOUSEJOINT_OFFSET UNITYSDK_OFFSET(0x1C814450)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2SOLVEMOUSEJOINT_OFFSET UNITYSDK_OFFSET(0x1C816AE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2WARMSTARTMOUSEJOINT_OFFSET UNITYSDK_OFFSET(0x1C815750)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2MouseJoints_TypeDefinitionIndex = 36717;

	class B2MouseJoints : public ::System::Object
	{
	public:
		static ::System::Void b2MouseJoint_SetSpringHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2MOUSEJOINT_SETSPRINGHERTZ_OFFSET))(a1, a2);
		}

		static ::System::Single b2MouseJoint_GetSpringHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2MOUSEJOINT_GETSPRINGHERTZ_OFFSET))(a1);
		}

		static ::System::Void b2MouseJoint_SetSpringDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2MOUSEJOINT_SETSPRINGDAMPINGRATIO_OFFSET))(a1, a2);
		}

		static ::System::Single b2MouseJoint_GetSpringDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2MOUSEJOINT_GETSPRINGDAMPINGRATIO_OFFSET))(a1);
		}

		static ::System::Void b2MouseJoint_SetMaxForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2MOUSEJOINT_SETMAXFORCE_OFFSET))(a1, a2);
		}

		static ::System::Single b2MouseJoint_GetMaxForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2MOUSEJOINT_GETMAXFORCE_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2GetMouseJointForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2GETMOUSEJOINTFORCE_OFFSET))(a1, a2);
		}

		static ::System::Single b2GetMouseJointTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2GETMOUSEJOINTTORQUE_OFFSET))(a1, a2);
		}

		static ::System::Void b2PrepareMouseJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2PREPAREMOUSEJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2WarmStartMouseJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2WARMSTARTMOUSEJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2SolveMouseJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOUSEJOINTS_B2SOLVEMOUSEJOINT_OFFSET))(a1, a2);
		}
	};
}
