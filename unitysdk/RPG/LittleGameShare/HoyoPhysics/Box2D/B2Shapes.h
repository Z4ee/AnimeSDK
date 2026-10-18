#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Capsule.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2CastOutput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ChainDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ChainId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ChainSegment.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Circle.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactData.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Filter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2MassData.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2PlaneResult.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Polygon.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2QueryFilter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2RayCastInput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Segment.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeCastInput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeExtent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeProxy.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SurfaceMaterial.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Body; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BroadPhase; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ChainShape; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Shape; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_GETFRICTION_OFFSET UNITYSDK_OFFSET(0x1C857960)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C857C50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_GETRESTITUTION_OFFSET UNITYSDK_OFFSET(0x1C857AE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_GETSEGMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C852DC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_GETSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1C852E10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_SETFRICTION_OFFSET UNITYSDK_OFFSET(0x1C857840)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C857B40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_SETRESTITUTION_OFFSET UNITYSDK_OFFSET(0x1C8579C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2COLLIDEMOVER_OFFSET UNITYSDK_OFFSET(0x1C854930)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2COMPUTESHAPEAABB_OFFSET UNITYSDK_OFFSET(0x1C804220)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2COMPUTESHAPEEXTENT_OFFSET UNITYSDK_OFFSET(0x1C802F50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2COMPUTESHAPEMASS_OFFSET UNITYSDK_OFFSET(0x1C803540)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CREATECAPSULESHAPE_OFFSET UNITYSDK_OFFSET(0x1C8514A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CREATECHAIN_OFFSET UNITYSDK_OFFSET(0x1C8520E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CREATECIRCLESHAPE_OFFSET UNITYSDK_OFFSET(0x1C851440)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CREATEPOLYGONSHAPE_OFFSET UNITYSDK_OFFSET(0x1C851760)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CREATESEGMENTSHAPE_OFFSET UNITYSDK_OFFSET(0x1C8517C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CREATESHAPEPROXY_OFFSET UNITYSDK_OFFSET(0x1C806C30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2DESTROYCHAIN_OFFSET UNITYSDK_OFFSET(0x1C852B50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2DESTROYSHAPEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C851A00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2DESTROYSHAPEPROXY_OFFSET UNITYSDK_OFFSET(0x1C801D50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2DESTROYSHAPE_OFFSET UNITYSDK_OFFSET(0x1C852000)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2FREECHAINDATA_OFFSET UNITYSDK_OFFSET(0x1C801E10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2GETCHAINSHAPE_OFFSET UNITYSDK_OFFSET(0x1C8512B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2GETSHAPECENTROID_OFFSET UNITYSDK_OFFSET(0x1C852FD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2GETSHAPEPERIMETER_OFFSET UNITYSDK_OFFSET(0x1C853110)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2GETSHAPEPROJECTEDPERIMETER_OFFSET UNITYSDK_OFFSET(0x1C853790)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2GETSHAPERADIUS_OFFSET UNITYSDK_OFFSET(0x1C8511A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2GETSHAPE_1_OFFSET UNITYSDK_OFFSET(0x1C851270)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2GETSHAPE_OFFSET UNITYSDK_OFFSET(0x1C851240)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2MAKESHAPEDISTANCEPROXY_OFFSET UNITYSDK_OFFSET(0x1C84F8A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2RAYCASTSHAPE_OFFSET UNITYSDK_OFFSET(0x1C853CE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2RESETPROXY_OFFSET UNITYSDK_OFFSET(0x1C856D40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPECASTSHAPE_OFFSET UNITYSDK_OFFSET(0x1C853FB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_ARECONTACTEVENTSENABLED_OFFSET UNITYSDK_OFFSET(0x1C857200)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_AREHITEVENTSENABLED_OFFSET UNITYSDK_OFFSET(0x1C857340)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_AREPRESOLVEEVENTSENABLED_OFFSET UNITYSDK_OFFSET(0x1C8572A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_ARESENSOREVENTSENABLED_OFFSET UNITYSDK_OFFSET(0x1C857160)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_COMPUTEMASSDATA_OFFSET UNITYSDK_OFFSET(0x1C858500)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_ENABLECONTACTEVENTS_OFFSET UNITYSDK_OFFSET(0x1C8571A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_ENABLEHITEVENTS_OFFSET UNITYSDK_OFFSET(0x1C8572E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_ENABLEPRESOLVEEVENTS_OFFSET UNITYSDK_OFFSET(0x1C857240)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_ENABLESENSOREVENTS_OFFSET UNITYSDK_OFFSET(0x1C857100)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETAABB_OFFSET UNITYSDK_OFFSET(0x1C8584B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETBODY_OFFSET UNITYSDK_OFFSET(0x1C854BC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETCAPSULE_OFFSET UNITYSDK_OFFSET(0x1C8574D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETCHAINSEGMENT_OFFSET UNITYSDK_OFFSET(0x1C857470)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETCIRCLE_OFFSET UNITYSDK_OFFSET(0x1C8573C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETCLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x1C8585F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETCONTACTCAPACITY_OFFSET UNITYSDK_OFFSET(0x1C857CB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETCONTACTDATA_OFFSET UNITYSDK_OFFSET(0x1C857D30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETDENSITY_OFFSET UNITYSDK_OFFSET(0x1C855450)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETFILTER_OFFSET UNITYSDK_OFFSET(0x1C856CF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETFRICTION_OFFSET UNITYSDK_OFFSET(0x1C855500)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C856BB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETPARENTCHAIN_OFFSET UNITYSDK_OFFSET(0x1C857780)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETPOLYGON_OFFSET UNITYSDK_OFFSET(0x1C857530)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETRESTITUTION_OFFSET UNITYSDK_OFFSET(0x1C856B10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETSEGMENT_OFFSET UNITYSDK_OFFSET(0x1C857420)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETSENSORCAPACITY_OFFSET UNITYSDK_OFFSET(0x1C858220)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETSENSORDATA_OFFSET UNITYSDK_OFFSET(0x1C8582A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETSURFACEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C856BF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1C857380)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETUSERDATA_OFFSET UNITYSDK_OFFSET(0x1C854CF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_ISSENSOR_OFFSET UNITYSDK_OFFSET(0x1C854D30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1C855010)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETCAPSULE_OFFSET UNITYSDK_OFFSET(0x1C857610)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETCIRCLE_OFFSET UNITYSDK_OFFSET(0x1C857590)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETDENSITY_OFFSET UNITYSDK_OFFSET(0x1C855360)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETFILTER_OFFSET UNITYSDK_OFFSET(0x1C857030)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETFRICTION_OFFSET UNITYSDK_OFFSET(0x1C855490)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C856B50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETPOLYGON_OFFSET UNITYSDK_OFFSET(0x1C857700)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETRESTITUTION_OFFSET UNITYSDK_OFFSET(0x1C855550)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETSEGMENT_OFFSET UNITYSDK_OFFSET(0x1C857690)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETSURFACEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C856C70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETUSERDATA_OFFSET UNITYSDK_OFFSET(0x1C854CA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_TESTPOINT_OFFSET UNITYSDK_OFFSET(0x1C854D80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHOULDQUERYCOLLIDE_OFFSET UNITYSDK_OFFSET(0x1C851220)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHOULDSHAPESCOLLIDE_OFFSET UNITYSDK_OFFSET(0x1C8511F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2UPDATESHAPEAABBS_OFFSET UNITYSDK_OFFSET(0x1C8512E0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Shapes_TypeDefinitionIndex = 36771;

	class B2Shapes : public ::System::Object
	{
	public:
		static ::System::Single b2GetShapeRadius(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2GETSHAPERADIUS_OFFSET))(a1);
		}

		static ::System::Boolean b2ShouldShapesCollide(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHOULDSHAPESCOLLIDE_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2ShouldQueryCollide(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHOULDQUERYCOLLIDE_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* b2GetShape(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2GETSHAPE_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* b2GetShape_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2GETSHAPE_1_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainShape* b2GetChainShape(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainShape*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2GETCHAINSHAPE_OFFSET))(a1, a2);
		}

		static ::System::Void b2UpdateShapeAABBs(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2UPDATESHAPEAABBS_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId b2CreateCircleShape(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef& a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle& a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CREATECIRCLESHAPE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId b2CreateCapsuleShape(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef& a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CREATECAPSULESHAPE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId b2CreatePolygonShape(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef& a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CREATEPOLYGONSHAPE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId b2CreateSegmentShape(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef& a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment& a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CREATESEGMENTSHAPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2DestroyShapeInternal(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2DESTROYSHAPEINTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2DestroyShape(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2DESTROYSHAPE_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId b2CreateChain(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainDef& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainDef&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CREATECHAIN_OFFSET))(a1, a2);
		}

		static ::System::Void b2FreeChainData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainShape* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainShape*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2FREECHAINDATA_OFFSET))(a1);
		}

		static ::System::Void b2DestroyChain(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2DESTROYCHAIN_OFFSET))(a1);
		}

		static ::System::Int32 b2Chain_GetSegmentCount(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_GETSEGMENTCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 b2Chain_GetSegments(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId a1, ::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId, ::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_GETSEGMENTS_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB b2ComputeShapeAABB(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2COMPUTESHAPEAABB_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2GetShapeCentroid(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2GETSHAPECENTROID_OFFSET))(a1);
		}

		static ::System::Single b2GetShapePerimeter(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2GETSHAPEPERIMETER_OFFSET))(a1);
		}

		static ::System::Single b2GetShapeProjectedPerimeter(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2GETSHAPEPROJECTEDPERIMETER_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MassData b2ComputeShapeMass(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MassData(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2COMPUTESHAPEMASS_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeExtent b2ComputeShapeExtent(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeExtent(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2COMPUTESHAPEEXTENT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput b2RayCastShape(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2RAYCASTSHAPE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput b2ShapeCastShape(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastInput& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastInput&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPECASTSHAPE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PlaneResult b2CollideMover(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PlaneResult(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2COLLIDEMOVER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2CreateShapeProxy(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CREATESHAPEPROXY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void b2DestroyShapeProxy(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2DESTROYSHAPEPROXY_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy b2MakeShapeDistanceProxy(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2MAKESHAPEDISTANCEPROXY_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId b2Shape_GetBody(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETBODY_OFFSET))(a1);
		}

		static ::System::Void b2Shape_SetUserData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETUSERDATA_OFFSET))(a1, a2);
		}

		static ::System::Object* b2Shape_GetUserData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Object*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETUSERDATA_OFFSET))(a1);
		}

		static ::System::Boolean b2Shape_IsSensor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_ISSENSOR_OFFSET))(a1);
		}

		static ::System::Boolean b2Shape_TestPoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_TESTPOINT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput b2Shape_RayCast(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_RAYCAST_OFFSET))(a1, a2);
		}

		static ::System::Void b2Shape_SetDensity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETDENSITY_OFFSET))(a1, a2, a3);
		}

		static ::System::Single b2Shape_GetDensity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETDENSITY_OFFSET))(a1);
		}

		static ::System::Void b2Shape_SetFriction(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETFRICTION_OFFSET))(a1, a2);
		}

		static ::System::Single b2Shape_GetFriction(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETFRICTION_OFFSET))(a1);
		}

		static ::System::Void b2Shape_SetRestitution(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETRESTITUTION_OFFSET))(a1, a2);
		}

		static ::System::Single b2Shape_GetRestitution(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETRESTITUTION_OFFSET))(a1);
		}

		static ::System::Void b2Shape_SetMaterial(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETMATERIAL_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2Shape_GetMaterial(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETMATERIAL_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SurfaceMaterial b2Shape_GetSurfaceMaterial(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SurfaceMaterial(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETSURFACEMATERIAL_OFFSET))(a1);
		}

		static ::System::Void b2Shape_SetSurfaceMaterial(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SurfaceMaterial a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SurfaceMaterial))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETSURFACEMATERIAL_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter b2Shape_GetFilter(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETFILTER_OFFSET))(a1);
		}

		static ::System::Void b2ResetProxy(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2RESETPROXY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2Shape_SetFilter(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETFILTER_OFFSET))(a1, a2);
		}

		static ::System::Void b2Shape_EnableSensorEvents(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_ENABLESENSOREVENTS_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2Shape_AreSensorEventsEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_ARESENSOREVENTSENABLED_OFFSET))(a1);
		}

		static ::System::Void b2Shape_EnableContactEvents(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_ENABLECONTACTEVENTS_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2Shape_AreContactEventsEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_ARECONTACTEVENTSENABLED_OFFSET))(a1);
		}

		static ::System::Void b2Shape_EnablePreSolveEvents(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_ENABLEPRESOLVEEVENTS_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2Shape_ArePreSolveEventsEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_AREPRESOLVEEVENTSENABLED_OFFSET))(a1);
		}

		static ::System::Void b2Shape_EnableHitEvents(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_ENABLEHITEVENTS_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2Shape_AreHitEventsEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_AREHITEVENTSENABLED_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeType b2Shape_GetType(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeType(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETTYPE_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle b2Shape_GetCircle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETCIRCLE_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment b2Shape_GetSegment(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETSEGMENT_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainSegment b2Shape_GetChainSegment(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainSegment(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETCHAINSEGMENT_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule b2Shape_GetCapsule(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETCAPSULE_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon b2Shape_GetPolygon(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETPOLYGON_OFFSET))(a1);
		}

		static ::System::Void b2Shape_SetCircle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle& a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETCIRCLE_OFFSET))(a1, a2);
		}

		static ::System::Void b2Shape_SetCapsule(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETCAPSULE_OFFSET))(a1, a2);
		}

		static ::System::Void b2Shape_SetSegment(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment& a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETSEGMENT_OFFSET))(a1, a2);
		}

		static ::System::Void b2Shape_SetPolygon(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_SETPOLYGON_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId b2Shape_GetParentChain(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETPARENTCHAIN_OFFSET))(a1);
		}

		static ::System::Void b2Chain_SetFriction(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_SETFRICTION_OFFSET))(a1, a2);
		}

		static ::System::Single b2Chain_GetFriction(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_GETFRICTION_OFFSET))(a1);
		}

		static ::System::Void b2Chain_SetRestitution(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_SETRESTITUTION_OFFSET))(a1, a2);
		}

		static ::System::Single b2Chain_GetRestitution(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_GETRESTITUTION_OFFSET))(a1);
		}

		static ::System::Void b2Chain_SetMaterial(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_SETMATERIAL_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2Chain_GetMaterial(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2CHAIN_GETMATERIAL_OFFSET))(a1);
		}

		static ::System::Int32 b2Shape_GetContactCapacity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETCONTACTCAPACITY_OFFSET))(a1);
		}

		static ::System::Int32 b2Shape_GetContactData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactData> a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactData>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETCONTACTDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 b2Shape_GetSensorCapacity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETSENSORCAPACITY_OFFSET))(a1);
		}

		static ::System::Int32 b2Shape_GetSensorData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId> a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETSENSORDATA_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB b2Shape_GetAABB(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETAABB_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MassData b2Shape_ComputeMassData(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MassData(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_COMPUTEMASSDATA_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Shape_GetClosestPoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPES_B2SHAPE_GETCLOSESTPOINT_OFFSET))(a1, a2);
		}
	};
}
