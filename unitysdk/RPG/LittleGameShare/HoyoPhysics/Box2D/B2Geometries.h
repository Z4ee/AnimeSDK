#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Capsule.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2CastOutput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Circle.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Hull.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2MassData.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2PlaneResult.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Polygon.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2RayCastInput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Rot.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Segment.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeCastInput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COLLIDEMOVERANDCAPSULE_OFFSET UNITYSDK_OFFSET(0xC307E30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COLLIDEMOVERANDCIRCLE_OFFSET UNITYSDK_OFFSET(0xC307C50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COLLIDEMOVERANDPOLYGON_OFFSET UNITYSDK_OFFSET(0xC307FE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COLLIDEMOVERANDSEGMENT_OFFSET UNITYSDK_OFFSET(0xC308250)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTECAPSULEAABB_OFFSET UNITYSDK_OFFSET(0xC305310)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTECAPSULEMASS_OFFSET UNITYSDK_OFFSET(0xC3045A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTECIRCLEAABB_OFFSET UNITYSDK_OFFSET(0xC305240)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTECIRCLEMASS_OFFSET UNITYSDK_OFFSET(0xC304560)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTEPOLYGONAABB_OFFSET UNITYSDK_OFFSET(0xC3054E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTEPOLYGONCENTROID_OFFSET UNITYSDK_OFFSET(0xC301ED0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTEPOLYGONMASS_OFFSET UNITYSDK_OFFSET(0xC304720)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTESEGMENTAABB_OFFSET UNITYSDK_OFFSET(0xC3058E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2ISVALIDRAY_OFFSET UNITYSDK_OFFSET(0xC301CE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKEBOX_OFFSET UNITYSDK_OFFSET(0xC302E60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKEOFFSETBOX_OFFSET UNITYSDK_OFFSET(0xC303440)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKEOFFSETPOLYGON_OFFSET UNITYSDK_OFFSET(0xC3027B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKEOFFSETROUNDEDBOX_OFFSET UNITYSDK_OFFSET(0xC303B00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKEOFFSETROUNDEDPOLYGON_OFFSET UNITYSDK_OFFSET(0xC3027F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKEPOLYGON_OFFSET UNITYSDK_OFFSET(0xC302180)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKEROUNDEDBOX_OFFSET UNITYSDK_OFFSET(0xC3033C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKESQUARE_OFFSET UNITYSDK_OFFSET(0xC302770)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2POINTINCAPSULE_OFFSET UNITYSDK_OFFSET(0xC305B90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2POINTINCIRCLE_OFFSET UNITYSDK_OFFSET(0xC305AF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2POINTINPOLYGON_OFFSET UNITYSDK_OFFSET(0xC305D60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2RAYCASTCAPSULE_OFFSET UNITYSDK_OFFSET(0xC306380)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2RAYCASTCIRCLE_OFFSET UNITYSDK_OFFSET(0xC305F60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2RAYCASTPOLYGON_OFFSET UNITYSDK_OFFSET(0xC306E30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2RAYCASTSEGMENT_OFFSET UNITYSDK_OFFSET(0xC306A20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2SHAPECASTCAPSULE_OFFSET UNITYSDK_OFFSET(0xC307780)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2SHAPECASTCIRCLE_OFFSET UNITYSDK_OFFSET(0xC307640)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2SHAPECASTPOLYGON_OFFSET UNITYSDK_OFFSET(0xC307A20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2SHAPECASTSEGMENT_OFFSET UNITYSDK_OFFSET(0xC3078D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2TRANSFORMPOLYGON_OFFSET UNITYSDK_OFFSET(0xC3041C0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Geometries_TypeDefinitionIndex = 35994;

	class B2Geometries : public ::System::Object
	{
	public:
		static ::System::Boolean b2IsValidRay(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput& a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2ISVALIDRAY_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2ComputePolygonCentroid(::System::ReadOnlySpan_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2> a1, ::System::Int32 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::System::ReadOnlySpan_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTEPOLYGONCENTROID_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon b2MakePolygon(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Hull& a1, ::System::Single a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Hull&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKEPOLYGON_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon b2MakeOffsetPolygon(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Hull& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Hull&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKEOFFSETPOLYGON_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon b2MakeOffsetRoundedPolygon(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Hull& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a3, ::System::Single a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Hull&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKEOFFSETROUNDEDPOLYGON_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon b2MakeSquare(::System::Single a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKESQUARE_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon b2MakeBox(::System::Single a1, ::System::Single a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKEBOX_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon b2MakeRoundedBox(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKEROUNDEDBOX_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon b2MakeOffsetBox(::System::Single a1, ::System::Single a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon(*)(::System::Single, ::System::Single, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKEOFFSETBOX_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon b2MakeOffsetRoundedBox(::System::Single a1, ::System::Single a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a4, ::System::Single a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon(*)(::System::Single, ::System::Single, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2MAKEOFFSETROUNDEDBOX_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon b2TransformPolygon(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2TRANSFORMPOLYGON_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MassData b2ComputeCircleMass(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle& a1, ::System::Single a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MassData(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTECIRCLEMASS_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MassData b2ComputeCapsuleMass(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a1, ::System::Single a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MassData(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTECAPSULEMASS_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MassData b2ComputePolygonMass(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a1, ::System::Single a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MassData(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTEPOLYGONMASS_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB b2ComputeCircleAABB(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTECIRCLEAABB_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB b2ComputeCapsuleAABB(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTECAPSULEAABB_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB b2ComputePolygonAABB(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTEPOLYGONAABB_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB b2ComputeSegmentAABB(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COMPUTESEGMENTAABB_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2PointInCircle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2POINTINCIRCLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2PointInCapsule(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2POINTINCAPSULE_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2PointInPolygon(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2POINTINPOLYGON_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput b2RayCastCircle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2RAYCASTCIRCLE_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput b2RayCastCapsule(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2RAYCASTCAPSULE_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput b2RayCastSegment(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput& a2, ::System::Boolean a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2RAYCASTSEGMENT_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput b2RayCastPolygon(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayCastInput&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2RAYCASTPOLYGON_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput b2ShapeCastCircle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastInput& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastInput&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2SHAPECASTCIRCLE_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput b2ShapeCastCapsule(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastInput& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastInput&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2SHAPECASTCAPSULE_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput b2ShapeCastSegment(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastInput& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastInput&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2SHAPECASTSEGMENT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput b2ShapeCastPolygon(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastInput& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastInput&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2SHAPECASTPOLYGON_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PlaneResult b2CollideMoverAndCircle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PlaneResult(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COLLIDEMOVERANDCIRCLE_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PlaneResult b2CollideMoverAndCapsule(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PlaneResult(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COLLIDEMOVERANDCAPSULE_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PlaneResult b2CollideMoverAndPolygon(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PlaneResult(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COLLIDEMOVERANDPOLYGON_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PlaneResult b2CollideMoverAndSegment(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment& a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PlaneResult(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2GEOMETRIES_B2COLLIDEMOVERANDSEGMENT_OFFSET))(a1, a2);
		}
	};
}
