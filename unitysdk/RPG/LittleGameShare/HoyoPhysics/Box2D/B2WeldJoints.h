#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2StepContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2GETWELDJOINTFORCE_OFFSET UNITYSDK_OFFSET(0x1AB23640)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2GETWELDJOINTTORQUE_OFFSET UNITYSDK_OFFSET(0x1AB236E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2PREPAREWELDJOINT_OFFSET UNITYSDK_OFFSET(0x1AB23710)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2SOLVEWELDJOINT_OFFSET UNITYSDK_OFFSET(0x1AB23F90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WARMSTARTWELDJOINT_OFFSET UNITYSDK_OFFSET(0x1AB23C20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_GETANGULARDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0x1AB235F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_GETANGULARHERTZ_OFFSET UNITYSDK_OFFSET(0x1AB23540)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_GETLINEARDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0x1AB23490)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_GETLINEARHERTZ_OFFSET UNITYSDK_OFFSET(0x1AB233E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_SETANGULARDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0x1AB23590)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_SETANGULARHERTZ_OFFSET UNITYSDK_OFFSET(0x1AB234E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_SETLINEARDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0x1AB23430)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_SETLINEARHERTZ_OFFSET UNITYSDK_OFFSET(0x1AB23380)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2WeldJoints_TypeDefinitionIndex = 35261;

	class B2WeldJoints : public ::System::Object
	{
	public:
		static ::System::Void b2WeldJoint_SetLinearHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_SETLINEARHERTZ_OFFSET))(a1, a2);
		}

		static ::System::Single b2WeldJoint_GetLinearHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_GETLINEARHERTZ_OFFSET))(a1);
		}

		static ::System::Void b2WeldJoint_SetLinearDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_SETLINEARDAMPINGRATIO_OFFSET))(a1, a2);
		}

		static ::System::Single b2WeldJoint_GetLinearDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_GETLINEARDAMPINGRATIO_OFFSET))(a1);
		}

		static ::System::Void b2WeldJoint_SetAngularHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_SETANGULARHERTZ_OFFSET))(a1, a2);
		}

		static ::System::Single b2WeldJoint_GetAngularHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_GETANGULARHERTZ_OFFSET))(a1);
		}

		static ::System::Void b2WeldJoint_SetAngularDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_SETANGULARDAMPINGRATIO_OFFSET))(a1, a2);
		}

		static ::System::Single b2WeldJoint_GetAngularDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WELDJOINT_GETANGULARDAMPINGRATIO_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2GetWeldJointForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2GETWELDJOINTFORCE_OFFSET))(a1, a2);
		}

		static ::System::Single b2GetWeldJointTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2GETWELDJOINTTORQUE_OFFSET))(a1, a2);
		}

		static ::System::Void b2PrepareWeldJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2PREPAREWELDJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2WarmStartWeldJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2WARMSTARTWELDJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2SolveWeldJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WELDJOINTS_B2SOLVEWELDJOINT_OFFSET))(a1, a2, a3);
		}
	};
}
