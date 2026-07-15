#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2DistanceJointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ExplosionDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointPair.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2MotorJointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2MouseJointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2PrismaticJointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2RevoluteJointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WeldJointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WheelJointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/b2FilterJointDef.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Body; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Joint; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2StepContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEDISTANCEJOINT_OFFSET UNITYSDK_OFFSET(0xB6485F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEFILTERJOINT_OFFSET UNITYSDK_OFFSET(0xB648B70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEJOINT_OFFSET UNITYSDK_OFFSET(0xB6478F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEMOTORJOINT_OFFSET UNITYSDK_OFFSET(0xB6488A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEMOUSEJOINT_OFFSET UNITYSDK_OFFSET(0xB648A30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEPRISMATICJOINT_OFFSET UNITYSDK_OFFSET(0xB648C70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEREVOLUTEJOINT_OFFSET UNITYSDK_OFFSET(0xB648E00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEWELDJOINT_OFFSET UNITYSDK_OFFSET(0xB648FD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEWHEELJOINT_OFFSET UNITYSDK_OFFSET(0xB649140)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTDISTANCEJOINTDEF_OFFSET UNITYSDK_OFFSET(0xB646F10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTEXPLOSIONDEF_OFFSET UNITYSDK_OFFSET(0xB6475E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTFILTERJOINTDEF_OFFSET UNITYSDK_OFFSET(0xB647240)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTJOINTDEF_OFFSET UNITYSDK_OFFSET(0xB646E80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTMOTORJOINTDEF_OFFSET UNITYSDK_OFFSET(0xB6470C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTMOUSEJOINTDEF_OFFSET UNITYSDK_OFFSET(0xB647180)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTPRISMATICJOINTDEF_OFFSET UNITYSDK_OFFSET(0xB6472F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTREVOLUTEJOINTDEF_OFFSET UNITYSDK_OFFSET(0xB6473A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTWELDJOINTDEF_OFFSET UNITYSDK_OFFSET(0xB647450)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTWHEELJOINTDEF_OFFSET UNITYSDK_OFFSET(0xB647500)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DESTROYCONTACTSBETWEENBODIES_OFFSET UNITYSDK_OFFSET(0xB6476D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DESTROYJOINTINTERNAL_OFFSET UNITYSDK_OFFSET(0xB60A770)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DESTROYJOINT_OFFSET UNITYSDK_OFFSET(0xB6492B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2GETJOINTCONSTRAINTFORCE_OFFSET UNITYSDK_OFFSET(0xB649FC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2GETJOINTCONSTRAINTTORQUE_OFFSET UNITYSDK_OFFSET(0xB64A580)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2GETJOINTFULLID_OFFSET UNITYSDK_OFFSET(0xB647600)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2GETJOINTREACTION_OFFSET UNITYSDK_OFFSET(0xB649CA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2GETJOINTSIMCHECKTYPE_OFFSET UNITYSDK_OFFSET(0xB62E270)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2GETJOINTSIM_OFFSET UNITYSDK_OFFSET(0xB647630)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETANGULARSEPARATION_OFFSET UNITYSDK_OFFSET(0xB64ADD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETBODYA_OFFSET UNITYSDK_OFFSET(0xB649340)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETBODYB_OFFSET UNITYSDK_OFFSET(0xB6494B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETCOLLIDECONNECTED_OFFSET UNITYSDK_OFFSET(0xB6499B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETCONSTRAINTFORCE_OFFSET UNITYSDK_OFFSET(0xB64A780)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETCONSTRAINTTORQUE_OFFSET UNITYSDK_OFFSET(0xB64A7C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETCONSTRAINTTUNING_OFFSET UNITYSDK_OFFSET(0xB64B0C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETFORCETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xB64B190)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETLINEARSEPARATION_OFFSET UNITYSDK_OFFSET(0xB64A800)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETLOCALFRAMEA_OFFSET UNITYSDK_OFFSET(0xB649670)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETLOCALFRAMEB_OFFSET UNITYSDK_OFFSET(0xB649720)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETTORQUETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xB64B240)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETTYPE_OFFSET UNITYSDK_OFFSET(0xB649300)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETUSERDATA_OFFSET UNITYSDK_OFFSET(0xB649A40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_SETCOLLIDECONNECTED_OFFSET UNITYSDK_OFFSET(0xB649780)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_SETCONSTRAINTTUNING_OFFSET UNITYSDK_OFFSET(0xB64B050)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_SETFORCETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xB64B130)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_SETLOCALFRAMEA_OFFSET UNITYSDK_OFFSET(0xB649620)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_SETLOCALFRAMEB_OFFSET UNITYSDK_OFFSET(0xB6496D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_SETTORQUETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xB64B1E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_SETUSERDATA_OFFSET UNITYSDK_OFFSET(0xB6499F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_WAKEBODIES_OFFSET UNITYSDK_OFFSET(0xB649A80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2PREPAREJOINT_OFFSET UNITYSDK_OFFSET(0xB64B290)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2PREPAREOVERFLOWJOINTS_OFFSET UNITYSDK_OFFSET(0xB64FF30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2SOLVEJOINT_OFFSET UNITYSDK_OFFSET(0xB64D840)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2SOLVEOVERFLOWJOINTS_OFFSET UNITYSDK_OFFSET(0xB650030)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2WARMSTARTJOINT_OFFSET UNITYSDK_OFFSET(0xB64C8B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2WARMSTARTOVERFLOWJOINTS_OFFSET UNITYSDK_OFFSET(0xB64FFB0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Joints_TypeDefinitionIndex = 35155;

	class B2Joints : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef b2DefaultJointDef()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTJOINTDEF_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DistanceJointDef b2DefaultDistanceJointDef()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DistanceJointDef(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTDISTANCEJOINTDEF_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MotorJointDef b2DefaultMotorJointDef()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MotorJointDef(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTMOTORJOINTDEF_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MouseJointDef b2DefaultMouseJointDef()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MouseJointDef(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTMOUSEJOINTDEF_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FilterJointDef b2DefaultFilterJointDef()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FilterJointDef(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTFILTERJOINTDEF_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PrismaticJointDef b2DefaultPrismaticJointDef()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PrismaticJointDef(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTPRISMATICJOINTDEF_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RevoluteJointDef b2DefaultRevoluteJointDef()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RevoluteJointDef(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTREVOLUTEJOINTDEF_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WeldJointDef b2DefaultWeldJointDef()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WeldJointDef(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTWELDJOINTDEF_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WheelJointDef b2DefaultWheelJointDef()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WheelJointDef(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTWHEELJOINTDEF_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ExplosionDef b2DefaultExplosionDef()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ExplosionDef(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DEFAULTEXPLOSIONDEF_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint* b2GetJointFullId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2GETJOINTFULLID_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* b2GetJointSim(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2GETJOINTSIM_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* b2GetJointSimCheckType(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointType a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointType))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2GETJOINTSIMCHECKTYPE_OFFSET))(a1, a2);
		}

		static ::System::Void b2DestroyContactsBetweenBodies(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DESTROYCONTACTSBETWEENBODIES_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointPair b2CreateJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef& a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointType a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointPair(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointType))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEJOINT_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId b2CreateDistanceJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DistanceJointDef& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DistanceJointDef&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEDISTANCEJOINT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId b2CreateMotorJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MotorJointDef& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MotorJointDef&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEMOTORJOINT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId b2CreateMouseJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MouseJointDef& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MouseJointDef&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEMOUSEJOINT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId b2CreateFilterJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FilterJointDef& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FilterJointDef&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEFILTERJOINT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId b2CreatePrismaticJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PrismaticJointDef& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PrismaticJointDef&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEPRISMATICJOINT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId b2CreateRevoluteJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RevoluteJointDef& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RevoluteJointDef&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEREVOLUTEJOINT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId b2CreateWeldJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WeldJointDef& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WeldJointDef&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEWELDJOINT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId b2CreateWheelJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WheelJointDef& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WheelJointDef&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2CREATEWHEELJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2DestroyJointInternal(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DESTROYJOINTINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2DestroyJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2DESTROYJOINT_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointType b2Joint_GetType(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointType(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETTYPE_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId b2Joint_GetBodyA(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETBODYA_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId b2Joint_GetBodyB(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETBODYB_OFFSET))(a1);
		}

		static ::System::Void b2Joint_SetLocalFrameA(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_SETLOCALFRAMEA_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform b2Joint_GetLocalFrameA(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETLOCALFRAMEA_OFFSET))(a1);
		}

		static ::System::Void b2Joint_SetLocalFrameB(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_SETLOCALFRAMEB_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform b2Joint_GetLocalFrameB(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETLOCALFRAMEB_OFFSET))(a1);
		}

		static ::System::Void b2Joint_SetCollideConnected(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_SETCOLLIDECONNECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2Joint_GetCollideConnected(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETCOLLIDECONNECTED_OFFSET))(a1);
		}

		static ::System::Void b2Joint_SetUserData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_SETUSERDATA_OFFSET))(a1, a2);
		}

		static ::System::Object* b2Joint_GetUserData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Object*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETUSERDATA_OFFSET))(a1);
		}

		static ::System::Void b2Joint_WakeBodies(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_WAKEBODIES_OFFSET))(a1);
		}

		static ::System::Void b2GetJointReaction(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2GETJOINTREACTION_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2GetJointConstraintForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2GETJOINTCONSTRAINTFORCE_OFFSET))(a1, a2);
		}

		static ::System::Single b2GetJointConstraintTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint* a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2GETJOINTCONSTRAINTTORQUE_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Joint_GetConstraintForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETCONSTRAINTFORCE_OFFSET))(a1);
		}

		static ::System::Single b2Joint_GetConstraintTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETCONSTRAINTTORQUE_OFFSET))(a1);
		}

		static ::System::Single b2Joint_GetLinearSeparation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETLINEARSEPARATION_OFFSET))(a1);
		}

		static ::System::Single b2Joint_GetAngularSeparation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETANGULARSEPARATION_OFFSET))(a1);
		}

		static ::System::Void b2Joint_SetConstraintTuning(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_SETCONSTRAINTTUNING_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2Joint_GetConstraintTuning(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single& a2, ::System::Single& a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETCONSTRAINTTUNING_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2Joint_SetForceThreshold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_SETFORCETHRESHOLD_OFFSET))(a1, a2);
		}

		static ::System::Single b2Joint_GetForceThreshold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETFORCETHRESHOLD_OFFSET))(a1);
		}

		static ::System::Void b2Joint_SetTorqueThreshold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_SETTORQUETHRESHOLD_OFFSET))(a1, a2);
		}

		static ::System::Single b2Joint_GetTorqueThreshold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2JOINT_GETTORQUETHRESHOLD_OFFSET))(a1);
		}

		static ::System::Void b2PrepareJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2PREPAREJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2WarmStartJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2WARMSTARTJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2SolveJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2SOLVEJOINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2PrepareOverflowJoints(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2PREPAREOVERFLOWJOINTS_OFFSET))(a1);
		}

		static ::System::Void b2WarmStartOverflowJoints(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2WARMSTARTOVERFLOWJOINTS_OFFSET))(a1);
		}

		static ::System::Void b2SolveOverflowJoints(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTS_B2SOLVEOVERFLOWJOINTS_OFFSET))(a1, a2);
		}
	};
}
