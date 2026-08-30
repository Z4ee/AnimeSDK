#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Capsule.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ChainSegment.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ChainSegmentParams.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Circle.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Manifold.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2NormalType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Polygon.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Segment.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SimplexCache.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2CLASSIFYNORMAL_OFFSET UNITYSDK_OFFSET(0x1C2F8770)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2CLIPPOLYGONS_OFFSET UNITYSDK_OFFSET(0x1C2F6DE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2CLIPSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1C2F8130)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDECAPSULEANDCIRCLE_OFFSET UNITYSDK_OFFSET(0x1C2C8470)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDECAPSULES_OFFSET UNITYSDK_OFFSET(0x1C2C8B00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDECHAINSEGMENTANDCAPSULE_OFFSET UNITYSDK_OFFSET(0x1C2CF940)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDECHAINSEGMENTANDCIRCLE_OFFSET UNITYSDK_OFFSET(0x1C2CF0F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDECHAINSEGMENTANDPOLYGON_OFFSET UNITYSDK_OFFSET(0x1C2CFB40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDECIRCLES_OFFSET UNITYSDK_OFFSET(0x1C2C7ED0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDEPOLYGONANDCAPSULE_OFFSET UNITYSDK_OFFSET(0x1C2CC190)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDEPOLYGONANDCIRCLE_OFFSET UNITYSDK_OFFSET(0x1C2CAFD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDEPOLYGONS_OFFSET UNITYSDK_OFFSET(0x1C2CC370)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDESEGMENTANDCAPSULE_OFFSET UNITYSDK_OFFSET(0x1C2CED10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDESEGMENTANDCIRCLE_OFFSET UNITYSDK_OFFSET(0x1C2CEB90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDESEGMENTANDPOLYGON_OFFSET UNITYSDK_OFFSET(0x1C2CEF10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2FINDMAXSEPARATION_OFFSET UNITYSDK_OFFSET(0x1C2F7AF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2MAKECAPSULE_OFFSET UNITYSDK_OFFSET(0x1C2F6A30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2_MAKE_ID_OFFSET UNITYSDK_OFFSET(0x1C2F6A20)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Manifolds_TypeDefinitionIndex = 36019;

	class B2Manifolds : public ::System::Object
	{
	public:
		static ::System::UInt16 B2_MAKE_ID(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::UInt16(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2_MAKE_ID_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon b2MakeCapsule(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::System::Single a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2MAKECAPSULE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CollideCircles(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle& a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDECIRCLES_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CollideCapsuleAndCircle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle& a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDECAPSULEANDCIRCLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CollidePolygonAndCircle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle& a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDEPOLYGONANDCIRCLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CollideCapsules(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDECAPSULES_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CollideSegmentAndCapsule(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDESEGMENTANDCAPSULE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CollidePolygonAndCapsule(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDEPOLYGONANDCAPSULE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2ClipPolygons(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2CLIPPOLYGONS_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single b2FindMaxSeparation(::System::Int32& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon a3)
		{
			return ((::System::Single(*)(::System::Int32&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2FINDMAXSEPARATION_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CollidePolygons(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDEPOLYGONS_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CollideSegmentAndCircle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle& a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDESEGMENTANDCIRCLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CollideSegmentAndPolygon(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDESEGMENTANDPOLYGON_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CollideChainSegmentAndCircle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainSegment& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle& a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainSegment&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Circle&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDECHAINSEGMENTANDCIRCLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CollideChainSegmentAndCapsule(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainSegment& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule& a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainSegment&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Capsule&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDECHAINSEGMENTANDCAPSULE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2ClipSegments(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a5, ::System::Single a6, ::System::Single a7, ::System::UInt16 a8, ::System::UInt16 a9)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single, ::System::Single, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2CLIPSEGMENTS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2NormalType b2ClassifyNormal(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainSegmentParams a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2NormalType(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainSegmentParams, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2CLASSIFYNORMAL_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold b2CollideChainSegmentAndPolygon(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainSegment& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon& a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainSegment&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Polygon&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MANIFOLDS_B2COLLIDECHAINSEGMENTANDPOLYGON_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
