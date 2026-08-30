#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyEvents.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Capsule.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ChainId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactEvents.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Counters.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ExplosionContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ExplosionDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointEvents.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Profile.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2QueryFilter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2RayCastInput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2RayResult.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorEvents.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeCastInput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeProxy.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2TreeStats.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldMoverCastContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldMoverContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldOverlapContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldQueryContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldRayCastContext.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Contact; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ContactSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2StepContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2CastResultFcn; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2CustomFilterFcn; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2FrictionCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2OverlapResultFcn; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2PlaneResultFcn; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2PreSolveFcn; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2RestitutionCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2TaskCallback; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2ADDNONTOUCHINGCONTACT_OFFSET UNITYSDK_OFFSET(0x1C31D3C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2BODY_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C31F510)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2CHAIN_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C31F600)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2COLLIDETASK_OFFSET UNITYSDK_OFFSET(0x1C31CCF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2COLLIDE_OFFSET UNITYSDK_OFFSET(0x1C31D6D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2CONTACT_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C325780)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2CREATEWORLD_OFFSET UNITYSDK_OFFSET(0x1C319880)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2DEFAULTADDTASKFCN_OFFSET UNITYSDK_OFFSET(0x1C319770)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2DEFAULTFINISHTASKFCN_OFFSET UNITYSDK_OFFSET(0x1C3197E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2DEFAULTFRICTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C3197F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2DEFAULTRESTITUTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C319810)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2DESTROYWORLD_OFFSET UNITYSDK_OFFSET(0x1C31BB80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2GETWORLDLOCKED_OFFSET UNITYSDK_OFFSET(0x1C306D90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2INITWORLD_OFFSET UNITYSDK_OFFSET(0x1C319940)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2JOINT_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C31F670)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2REMOVENONTOUCHINGCONTACT_OFFSET UNITYSDK_OFFSET(0x1C31D600)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2SHAPE_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C31F580)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2UPDATETREESTASK_OFFSET UNITYSDK_OFFSET(0x1C31D350)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2VALIDATECONNECTIVITY_OFFSET UNITYSDK_OFFSET(0x1C325770)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2VALIDATECONTACTS_OFFSET UNITYSDK_OFFSET(0x1C31EE10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2VALIDATESOLVERSETS_OFFSET UNITYSDK_OFFSET(0x1C306CD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_CASTMOVER_OFFSET UNITYSDK_OFFSET(0x1C323FC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_CASTRAYCLOSEST_OFFSET UNITYSDK_OFFSET(0x1C323350)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_CASTRAY_OFFSET UNITYSDK_OFFSET(0x1C322D70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_CASTSHAPE_OFFSET UNITYSDK_OFFSET(0x1C323A10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_COLLIDEMOVER_OFFSET UNITYSDK_OFFSET(0x1C324790)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_DUMPMEMORYSTATS_OFFSET UNITYSDK_OFFSET(0x1C320120)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_ENABLECONTINUOUS_OFFSET UNITYSDK_OFFSET(0x1C31F820)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_ENABLESLEEPING_OFFSET UNITYSDK_OFFSET(0x1C31F6E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_ENABLESPECULATIVE_OFFSET UNITYSDK_OFFSET(0x1C325750)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_ENABLEWARMSTARTING_OFFSET UNITYSDK_OFFSET(0x1C31F790)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_EXPLODE_OFFSET UNITYSDK_OFFSET(0x1C3254F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETAWAKEBODYCOUNT_OFFSET UNITYSDK_OFFSET(0x1C31F7E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETBODYEVENTS_OFFSET UNITYSDK_OFFSET(0x1C31F330)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETCONTACTEVENTS_OFFSET UNITYSDK_OFFSET(0x1C31F410)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETCOUNTERS_OFFSET UNITYSDK_OFFSET(0x1C31FB70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETGRAVITY_OFFSET UNITYSDK_OFFSET(0x1C324D10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETHITEVENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C31F9B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETJOINTEVENTS_OFFSET UNITYSDK_OFFSET(0x1C31F4C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETMAXIMUMLINEARSPEED_OFFSET UNITYSDK_OFFSET(0x1C31FAF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETPROFILE_OFFSET UNITYSDK_OFFSET(0x1C31FB10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETRESTITUTIONTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C31F900)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETSENSOREVENTS_OFFSET UNITYSDK_OFFSET(0x1C31F380)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETUSERDATA_OFFSET UNITYSDK_OFFSET(0x1C31FF70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_ISCONTINUOUSENABLED_OFFSET UNITYSDK_OFFSET(0x1C31F850)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_ISSLEEPINGENABLED_OFFSET UNITYSDK_OFFSET(0x1C31F770)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_ISWARMSTARTINGENABLED_OFFSET UNITYSDK_OFFSET(0x1C31F7C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_OVERLAPAABB_OFFSET UNITYSDK_OFFSET(0x1C321C20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_OVERLAPSHAPE_OFFSET UNITYSDK_OFFSET(0x1C322350)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_REBUILDSTATICTREE_OFFSET UNITYSDK_OFFSET(0x1C3256B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETCONTACTTUNING_OFFSET UNITYSDK_OFFSET(0x1C31F9D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETCUSTOMFILTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C324CA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETFRICTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C31FF90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETGRAVITY_OFFSET UNITYSDK_OFFSET(0x1C324CF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETHITEVENTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C31F920)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETMAXIMUMLINEARSPEED_OFFSET UNITYSDK_OFFSET(0x1C31FAC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETPRESOLVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C324CC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETRESTITUTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C320060)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETRESTITUTIONTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1C31F870)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETUSERDATA_OFFSET UNITYSDK_OFFSET(0x1C31FF50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_STEP_OFFSET UNITYSDK_OFFSET(0x1C31EE20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_EXPLOSIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C324D30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_MOVERCASTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C323E50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_RAYCASTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C322B10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_RAYCASTCLOSESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C323170)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_SHAPECASTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C323810)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_TREECOLLIDECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C3244B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_TREEOVERLAPCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C322000)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_TREEQUERYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C321B30)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Worlds_TypeDefinitionIndex = 36134;

	class B2Worlds : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* b2GetWorldLocked(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2GETWORLDLOCKED_OFFSET))(a1);
		}

		static ::System::Object* b2DefaultAddTaskFcn(::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Object* a4, ::System::Object* a5)
		{
			return ((::System::Object*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::b2TaskCallback*, ::System::Int32, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2DEFAULTADDTASKFCN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void b2DefaultFinishTaskFcn(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2DEFAULTFINISHTASKFCN_OFFSET))(a1, a2);
		}

		static ::System::Single b2DefaultFrictionCallback(::System::Single a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2DEFAULTFRICTIONCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single b2DefaultRestitutionCallback(::System::Single a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2DEFAULTRESTITUTIONCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* b2CreateWorld(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldDef& a1, ::System::UInt16 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldDef&, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2CREATEWORLD_OFFSET))(a1, a2);
		}

		static ::System::Void b2InitWorld(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldDef& a2, ::System::UInt16 a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldDef&, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2INITWORLD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2DestroyWorld(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2DESTROYWORLD_OFFSET))(a1);
		}

		static ::System::Void b2CollideTask(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2COLLIDETASK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2UpdateTreesTask(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2UPDATETREESTASK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2AddNonTouchingContact(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim* a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2ADDNONTOUCHINGCONTACT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2RemoveNonTouchingContact(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2REMOVENONTOUCHINGCONTACT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2Collide(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2COLLIDE_OFFSET))(a1);
		}

		static ::System::Void b2World_Step(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_STEP_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyEvents b2World_GetBodyEvents(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyEvents(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETBODYEVENTS_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorEvents b2World_GetSensorEvents(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorEvents(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETSENSOREVENTS_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEvents b2World_GetContactEvents(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEvents(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETCONTACTEVENTS_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointEvents b2World_GetJointEvents(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointEvents(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETJOINTEVENTS_OFFSET))(a1);
		}

		static ::System::Boolean b2Body_IsValid(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2BODY_ISVALID_OFFSET))(a1);
		}

		static ::System::Boolean b2Shape_IsValid(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2SHAPE_ISVALID_OFFSET))(a1);
		}

		static ::System::Boolean b2Chain_IsValid(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2CHAIN_ISVALID_OFFSET))(a1);
		}

		static ::System::Boolean b2Joint_IsValid(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2JOINT_ISVALID_OFFSET))(a1);
		}

		static ::System::Void b2World_EnableSleeping(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_ENABLESLEEPING_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2World_IsSleepingEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_ISSLEEPINGENABLED_OFFSET))(a1);
		}

		static ::System::Void b2World_EnableWarmStarting(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_ENABLEWARMSTARTING_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2World_IsWarmStartingEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_ISWARMSTARTINGENABLED_OFFSET))(a1);
		}

		static ::System::Int32 b2World_GetAwakeBodyCount(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETAWAKEBODYCOUNT_OFFSET))(a1);
		}

		static ::System::Void b2World_EnableContinuous(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_ENABLECONTINUOUS_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2World_IsContinuousEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_ISCONTINUOUSENABLED_OFFSET))(a1);
		}

		static ::System::Void b2World_SetRestitutionThreshold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETRESTITUTIONTHRESHOLD_OFFSET))(a1, a2);
		}

		static ::System::Single b2World_GetRestitutionThreshold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETRESTITUTIONTHRESHOLD_OFFSET))(a1);
		}

		static ::System::Void b2World_SetHitEventThreshold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETHITEVENTTHRESHOLD_OFFSET))(a1, a2);
		}

		static ::System::Single b2World_GetHitEventThreshold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETHITEVENTTHRESHOLD_OFFSET))(a1);
		}

		static ::System::Void b2World_SetContactTuning(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETCONTACTTUNING_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2World_SetMaximumLinearSpeed(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETMAXIMUMLINEARSPEED_OFFSET))(a1, a2);
		}

		static ::System::Single b2World_GetMaximumLinearSpeed(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETMAXIMUMLINEARSPEED_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Profile b2World_GetProfile(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Profile(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETPROFILE_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Counters b2World_GetCounters(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Counters(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETCOUNTERS_OFFSET))(a1);
		}

		static ::System::Void b2World_SetUserData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETUSERDATA_OFFSET))(a1, a2);
		}

		static ::System::Object* b2World_GetUserData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Object*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETUSERDATA_OFFSET))(a1);
		}

		static ::System::Void b2World_SetFrictionCallback(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FrictionCallback* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FrictionCallback*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETFRICTIONCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void b2World_SetRestitutionCallback(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2RestitutionCallback* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2RestitutionCallback*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETRESTITUTIONCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void b2World_DumpMemoryStats(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_DUMPMEMORYSTATS_OFFSET))(a1);
		}

		static ::System::Boolean TreeQueryCallback(::System::Int32 a1, ::System::UInt64 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldQueryContext& a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt64, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldQueryContext&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_TREEQUERYCALLBACK_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeStats b2World_OverlapAABB(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2OverlapResultFcn* a4, ::System::Object* a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeStats(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2OverlapResultFcn*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_OVERLAPAABB_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TreeOverlapCallback(::System::Int32 a1, ::System::UInt64 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldOverlapContext& a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt64, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldOverlapContext&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_TREEOVERLAPCALLBACK_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeStats b2World_OverlapShape(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy& a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2OverlapResultFcn* a4, ::System::Object* a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeStats(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2OverlapResultFcn*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_OVERLAPSHAPE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single RayCastCallback(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput& a1, ::System::Int32 a2, ::System::UInt64 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext& a4)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput&, ::System::Int32, ::System::UInt64, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_RAYCASTCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeStats b2World_CastRay(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2CastResultFcn* a5, ::System::Object* a6)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeStats(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2CastResultFcn*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_CASTRAY_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Single RayCastClosestCallback(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput& a1, ::System::Int32 a2, ::System::UInt64 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext& a4)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput&, ::System::Int32, ::System::UInt64, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_RAYCASTCLOSESTCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayResult b2World_CastRayClosest(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter a4, ::System::Boolean a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayResult(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_CASTRAYCLOSEST_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single ShapeCastCallback(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastInput& a1, ::System::Int32 a2, ::System::UInt64 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext& a4)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastInput&, ::System::Int32, ::System::UInt64, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldRayCastContext&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_SHAPECASTCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeStats b2World_CastShape(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy& a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2CastResultFcn* a5, ::System::Object* a6)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeStats(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2CastResultFcn*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_CASTSHAPE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Single MoverCastCallback(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastInput& a1, ::System::Int32 a2, ::System::UInt64 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldMoverCastContext& a4)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastInput&, ::System::Int32, ::System::UInt64, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldMoverCastContext&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_MOVERCASTCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single b2World_CastMover(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter a4)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_CASTMOVER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TreeCollideCallback(::System::Int32 a1, ::System::UInt64 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldMoverContext& a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt64, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldMoverContext&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_TREECOLLIDECALLBACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2World_CollideMover(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2PlaneResultFcn* a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2PlaneResultFcn*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_COLLIDEMOVER_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void b2World_SetCustomFilterCallback(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2CustomFilterFcn* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2CustomFilterFcn*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETCUSTOMFILTERCALLBACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2World_SetPreSolveCallback(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2PreSolveFcn* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2PreSolveFcn*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETPRESOLVECALLBACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2World_SetGravity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_SETGRAVITY_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2World_GetGravity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_GETGRAVITY_OFFSET))(a1);
		}

		static ::System::Boolean ExplosionCallback(::System::Int32 a1, ::System::UInt64 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ExplosionContext& a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt64, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ExplosionContext&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_EXPLOSIONCALLBACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2World_Explode(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ExplosionDef& a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ExplosionDef&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_EXPLODE_OFFSET))(a1, a2);
		}

		static ::System::Void b2World_RebuildStaticTree(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_REBUILDSTATICTREE_OFFSET))(a1);
		}

		static ::System::Void b2World_EnableSpeculative(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2WORLD_ENABLESPECULATIVE_OFFSET))(a1, a2);
		}

		static ::System::Void b2ValidateConnectivity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2VALIDATECONNECTIVITY_OFFSET))(a1);
		}

		static ::System::Void b2ValidateSolverSets(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2VALIDATESOLVERSETS_OFFSET))(a1);
		}

		static ::System::Void b2ValidateContacts(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2VALIDATECONTACTS_OFFSET))(a1);
		}

		static ::System::Boolean b2Contact_IsValid(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDS_B2CONTACT_ISVALID_OFFSET))(a1);
		}
	};
}
