#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactData.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2MassData.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2MotionLocks.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Rot.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Sweep.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Body; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BodySim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BodyState; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }
namespace System { class String; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_APPLYANGULARIMPULSE_OFFSET UNITYSDK_OFFSET(0xB60F1E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_APPLYFORCETOCENTER_OFFSET UNITYSDK_OFFSET(0xB60E8C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_APPLYFORCE_OFFSET UNITYSDK_OFFSET(0xB60E6E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_APPLYLINEARIMPULSETOCENTER_OFFSET UNITYSDK_OFFSET(0xB60EF00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_APPLYLINEARIMPULSE_OFFSET UNITYSDK_OFFSET(0xB60EBE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_APPLYMASSFROMSHAPES_OFFSET UNITYSDK_OFFSET(0xB6110C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_APPLYTORQUE_OFFSET UNITYSDK_OFFSET(0xB60EA70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_COMPUTEAABB_OFFSET UNITYSDK_OFFSET(0xB60BA40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_DISABLE_OFFSET UNITYSDK_OFFSET(0xB612920)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ENABLECONTACTEVENTS_OFFSET UNITYSDK_OFFSET(0xB613560)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ENABLEHITEVENTS_OFFSET UNITYSDK_OFFSET(0xB613620)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ENABLESLEEP_OFFSET UNITYSDK_OFFSET(0xB612850)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ENABLE_OFFSET UNITYSDK_OFFSET(0xB612BE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETANGULARDAMPING_OFFSET UNITYSDK_OFFSET(0xB6113F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0xB60DA40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETCONTACTCAPACITY_OFFSET UNITYSDK_OFFSET(0xB60B410)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETCONTACTDATA_OFFSET UNITYSDK_OFFSET(0xB60B4A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETGRAVITYSCALE_OFFSET UNITYSDK_OFFSET(0xB6115A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETJOINTCOUNT_OFFSET UNITYSDK_OFFSET(0xB6138E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETJOINTS_OFFSET UNITYSDK_OFFSET(0xB613960)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETLINEARDAMPING_OFFSET UNITYSDK_OFFSET(0xB611240)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETLINEARVELOCITY_OFFSET UNITYSDK_OFFSET(0xB60D940)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETLOCALCENTEROFMASS_OFFSET UNITYSDK_OFFSET(0xB610CA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETLOCALPOINTVELOCITY_OFFSET UNITYSDK_OFFSET(0xB60E350)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETLOCALPOINT_OFFSET UNITYSDK_OFFSET(0xB60CDA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETLOCALVECTOR_OFFSET UNITYSDK_OFFSET(0xB60D070)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETMASSDATA_OFFSET UNITYSDK_OFFSET(0xB610FC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETMASS_OFFSET UNITYSDK_OFFSET(0xB610BA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETMOTIONLOCKS_OFFSET UNITYSDK_OFFSET(0xB6132F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETNAME_OFFSET UNITYSDK_OFFSET(0xB610A10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xB60CB40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETROTATIONALINERTIA_OFFSET UNITYSDK_OFFSET(0xB610C20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETROTATION_OFFSET UNITYSDK_OFFSET(0xB60CC00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETSHAPECOUNT_OFFSET UNITYSDK_OFFSET(0xB6136E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETSHAPES_OFFSET UNITYSDK_OFFSET(0xB613760)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETSLEEPTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xB6127D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB60CCC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETTYPE_OFFSET UNITYSDK_OFFSET(0xB60F350)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETUSERDATA_OFFSET UNITYSDK_OFFSET(0xB610B20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETWORLDCENTEROFMASS_OFFSET UNITYSDK_OFFSET(0xB610D60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETWORLDPOINTVELOCITY_OFFSET UNITYSDK_OFFSET(0xB60E530)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETWORLDPOINT_OFFSET UNITYSDK_OFFSET(0xB60CEF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETWORLDVECTOR_OFFSET UNITYSDK_OFFSET(0xB60D1C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ISAWAKE_OFFSET UNITYSDK_OFFSET(0xB611660)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ISBULLET_OFFSET UNITYSDK_OFFSET(0xB613490)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ISENABLED_OFFSET UNITYSDK_OFFSET(0xB612630)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ISSLEEPENABLED_OFFSET UNITYSDK_OFFSET(0xB6126C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETANGULARDAMPING_OFFSET UNITYSDK_OFFSET(0xB611300)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0xB60DCB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETAWAKE_OFFSET UNITYSDK_OFFSET(0xB6116F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETBULLET_OFFSET UNITYSDK_OFFSET(0xB613390)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETGRAVITYSCALE_OFFSET UNITYSDK_OFFSET(0xB6114B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETLINEARDAMPING_OFFSET UNITYSDK_OFFSET(0xB611150)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETLINEARVELOCITY_OFFSET UNITYSDK_OFFSET(0xB60DB20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETMASSDATA_OFFSET UNITYSDK_OFFSET(0xB610E20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETMOTIONLOCKS_OFFSET UNITYSDK_OFFSET(0xB613110)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETNAME_OFFSET UNITYSDK_OFFSET(0xB610970)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETSLEEPTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xB612740)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB60DE10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB60D310)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETTYPE_OFFSET UNITYSDK_OFFSET(0xB60F3D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETUSERDATA_OFFSET UNITYSDK_OFFSET(0xB610A90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2CREATEBODY_OFFSET UNITYSDK_OFFSET(0xB609730)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2CREATEISLANDFORBODY_OFFSET UNITYSDK_OFFSET(0xB608780)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2DESTROYBODYCONTACTS_OFFSET UNITYSDK_OFFSET(0xB608D20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2DESTROYBODY_OFFSET UNITYSDK_OFFSET(0xB60A1E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2GETBODYFULLID_OFFSET UNITYSDK_OFFSET(0xB6084B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2GETBODYSIM_OFFSET UNITYSDK_OFFSET(0xB6086B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2GETBODYSTATE_OFFSET UNITYSDK_OFFSET(0xB608710)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2GETBODYTRANSFORMQUICK_OFFSET UNITYSDK_OFFSET(0xB6084E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2GETBODYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB608560)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2LIMITVELOCITY_OFFSET UNITYSDK_OFFSET(0xB6083B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2MAKEBODYID_OFFSET UNITYSDK_OFFSET(0xB608630)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2MAKESWEEP_OFFSET UNITYSDK_OFFSET(0xB608370)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2REMOVEBODYFROMISLAND_OFFSET UNITYSDK_OFFSET(0xB608A80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2SHOULDBODIESCOLLIDE_OFFSET UNITYSDK_OFFSET(0xB606430)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2UPDATEBODYMASSDATA_OFFSET UNITYSDK_OFFSET(0xB60BC60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2WAKEBODY_OFFSET UNITYSDK_OFFSET(0xB60A1B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES__CCTOR_OFFSET UNITYSDK_OFFSET(0xB613B90)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Bodies_TypeDefinitionIndex = 35042;

	class B2Bodies : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState** StaticGet_b2_identityBodyState()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState**)Il2CppClass::FromTypeDefinitionIndex(B2Bodies_TypeDefinitionIndex)->GetStaticField(0x5A3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES__CCTOR_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sweep b2MakeSweep(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodySim* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sweep(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodySim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2MAKESWEEP_OFFSET))(a1);
		}

		static ::System::Void b2LimitVelocity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2LIMITVELOCITY_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* b2GetBodyFullId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2GETBODYFULLID_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform b2GetBodyTransformQuick(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2GETBODYTRANSFORMQUICK_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform b2GetBodyTransform(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2GETBODYTRANSFORM_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId b2MakeBodyId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2MAKEBODYID_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodySim* b2GetBodySim(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodySim*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2GETBODYSIM_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState* b2GetBodyState(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2GETBODYSTATE_OFFSET))(a1, a2);
		}

		static ::System::Void b2CreateIslandForBody(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2CREATEISLANDFORBODY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2RemoveBodyFromIsland(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2REMOVEBODYFROMISLAND_OFFSET))(a1, a2);
		}

		static ::System::Void b2DestroyBodyContacts(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2DESTROYBODYCONTACTS_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId b2CreateBody(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyDef& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyDef&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2CREATEBODY_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2WakeBody(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2WAKEBODY_OFFSET))(a1, a2);
		}

		static ::System::Void b2DestroyBody(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2DESTROYBODY_OFFSET))(a1);
		}

		static ::System::Int32 b2Body_GetContactCapacity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETCONTACTCAPACITY_OFFSET))(a1);
		}

		static ::System::Int32 b2Body_GetContactData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactData> a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactData>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETCONTACTDATA_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB b2Body_ComputeAABB(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_COMPUTEAABB_OFFSET))(a1);
		}

		static ::System::Void b2UpdateBodyMassData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2UPDATEBODYMASSDATA_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Body_GetPosition(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETPOSITION_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot b2Body_GetRotation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETROTATION_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform b2Body_GetTransform(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETTRANSFORM_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Body_GetLocalPoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETLOCALPOINT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Body_GetWorldPoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETWORLDPOINT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Body_GetLocalVector(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETLOCALVECTOR_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Body_GetWorldVector(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETWORLDVECTOR_OFFSET))(a1, a2);
		}

		static ::System::Void b2Body_SetTransform(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETTRANSFORM_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Body_GetLinearVelocity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETLINEARVELOCITY_OFFSET))(a1);
		}

		static ::System::Single b2Body_GetAngularVelocity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETANGULARVELOCITY_OFFSET))(a1);
		}

		static ::System::Void b2Body_SetLinearVelocity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETLINEARVELOCITY_OFFSET))(a1, a2);
		}

		static ::System::Void b2Body_SetAngularVelocity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETANGULARVELOCITY_OFFSET))(a1, a2);
		}

		static ::System::Void b2Body_SetTargetTransform(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETTARGETTRANSFORM_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Body_GetLocalPointVelocity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETLOCALPOINTVELOCITY_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Body_GetWorldPointVelocity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETWORLDPOINTVELOCITY_OFFSET))(a1, a2);
		}

		static ::System::Void b2Body_ApplyForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_APPLYFORCE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2Body_ApplyForceToCenter(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_APPLYFORCETOCENTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2Body_ApplyTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_APPLYTORQUE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2Body_ApplyLinearImpulse(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_APPLYLINEARIMPULSE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2Body_ApplyLinearImpulseToCenter(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_APPLYLINEARIMPULSETOCENTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2Body_ApplyAngularImpulse(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_APPLYANGULARIMPULSE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType b2Body_GetType(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETTYPE_OFFSET))(a1);
		}

		static ::System::Void b2Body_SetType(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETTYPE_OFFSET))(a1, a2);
		}

		static ::System::Void b2Body_SetName(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::String*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETNAME_OFFSET))(a1, a2);
		}

		static ::System::String* b2Body_GetName(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::String*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETNAME_OFFSET))(a1);
		}

		static ::System::Void b2Body_SetUserData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETUSERDATA_OFFSET))(a1, a2);
		}

		static ::System::Object* b2Body_GetUserData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Object*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETUSERDATA_OFFSET))(a1);
		}

		static ::System::Single b2Body_GetMass(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETMASS_OFFSET))(a1);
		}

		static ::System::Single b2Body_GetRotationalInertia(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETROTATIONALINERTIA_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Body_GetLocalCenterOfMass(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETLOCALCENTEROFMASS_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Body_GetWorldCenterOfMass(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETWORLDCENTEROFMASS_OFFSET))(a1);
		}

		static ::System::Void b2Body_SetMassData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MassData a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MassData))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETMASSDATA_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MassData b2Body_GetMassData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MassData(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETMASSDATA_OFFSET))(a1);
		}

		static ::System::Void b2Body_ApplyMassFromShapes(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_APPLYMASSFROMSHAPES_OFFSET))(a1);
		}

		static ::System::Void b2Body_SetLinearDamping(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETLINEARDAMPING_OFFSET))(a1, a2);
		}

		static ::System::Single b2Body_GetLinearDamping(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETLINEARDAMPING_OFFSET))(a1);
		}

		static ::System::Void b2Body_SetAngularDamping(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETANGULARDAMPING_OFFSET))(a1, a2);
		}

		static ::System::Single b2Body_GetAngularDamping(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETANGULARDAMPING_OFFSET))(a1);
		}

		static ::System::Void b2Body_SetGravityScale(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETGRAVITYSCALE_OFFSET))(a1, a2);
		}

		static ::System::Single b2Body_GetGravityScale(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETGRAVITYSCALE_OFFSET))(a1);
		}

		static ::System::Boolean b2Body_IsAwake(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ISAWAKE_OFFSET))(a1);
		}

		static ::System::Void b2Body_SetAwake(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETAWAKE_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2Body_IsEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ISENABLED_OFFSET))(a1);
		}

		static ::System::Boolean b2Body_IsSleepEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ISSLEEPENABLED_OFFSET))(a1);
		}

		static ::System::Void b2Body_SetSleepThreshold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETSLEEPTHRESHOLD_OFFSET))(a1, a2);
		}

		static ::System::Single b2Body_GetSleepThreshold(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETSLEEPTHRESHOLD_OFFSET))(a1);
		}

		static ::System::Void b2Body_EnableSleep(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ENABLESLEEP_OFFSET))(a1, a2);
		}

		static ::System::Void b2Body_Disable(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_DISABLE_OFFSET))(a1);
		}

		static ::System::Void b2Body_Enable(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ENABLE_OFFSET))(a1);
		}

		static ::System::Void b2Body_SetMotionLocks(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MotionLocks a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MotionLocks))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETMOTIONLOCKS_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MotionLocks b2Body_GetMotionLocks(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MotionLocks(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETMOTIONLOCKS_OFFSET))(a1);
		}

		static ::System::Void b2Body_SetBullet(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_SETBULLET_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2Body_IsBullet(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ISBULLET_OFFSET))(a1);
		}

		static ::System::Void b2Body_EnableContactEvents(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ENABLECONTACTEVENTS_OFFSET))(a1, a2);
		}

		static ::System::Void b2Body_EnableHitEvents(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_ENABLEHITEVENTS_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2Body_GetShapeCount(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETSHAPECOUNT_OFFSET))(a1);
		}

		static ::System::Int32 b2Body_GetShapes(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId> a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETSHAPES_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 b2Body_GetJointCount(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETJOINTCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 b2Body_GetJoints(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId> a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2BODY_GETJOINTS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean b2ShouldBodiesCollide(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* a3)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODIES_B2SHOULDBODIESCOLLIDE_OFFSET))(a1, a2, a3);
		}
	};
}
