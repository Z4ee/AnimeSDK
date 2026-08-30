#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2CastOutput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2DistanceInput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2DistanceOutput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Rot.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SegmentDistanceResult.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SeparationFunction.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeCastPairInput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeProxy.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Simplex.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SimplexCache.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Sweep.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2TOIInput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2TOIOutput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2COMPUTESIMPLEXWITNESSPOINTS_OFFSET UNITYSDK_OFFSET(0xC2F7820)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2EVALUATESEPARATION_OFFSET UNITYSDK_OFFSET(0xC2FB410)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2FINDMINSEPARATION_OFFSET UNITYSDK_OFFSET(0xC2FACB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2FINDSUPPORT_OFFSET UNITYSDK_OFFSET(0xC2F6C10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2GETSWEEPTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC2F5AA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2MAKEOFFSETPROXY_OFFSET UNITYSDK_OFFSET(0xC2F6450)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2MAKEPROXY_1_OFFSET UNITYSDK_OFFSET(0xC2F6730)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2MAKEPROXY_2_OFFSET UNITYSDK_OFFSET(0xC2F6930)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2MAKEPROXY_OFFSET UNITYSDK_OFFSET(0xC2F6090)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2MAKESEPARATIONFUNCTION_OFFSET UNITYSDK_OFFSET(0xC2F9FB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2MAKESIMPLEXCACHE_OFFSET UNITYSDK_OFFSET(0xC2F7530)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2MAKESIMPLEXFROMCACHE_OFFSET UNITYSDK_OFFSET(0xC2F6FD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2SEGMENTDISTANCE_OFFSET UNITYSDK_OFFSET(0xC2F5C20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2SHAPECAST_OFFSET UNITYSDK_OFFSET(0xC2F9A70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2SHAPEDISTANCE_OFFSET UNITYSDK_OFFSET(0xC2F8250)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2SOLVESIMPLEX2_OFFSET UNITYSDK_OFFSET(0xC2F7980)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2SOLVESIMPLEX3_OFFSET UNITYSDK_OFFSET(0xC2F7C10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2TIMEOFIMPACT_OFFSET UNITYSDK_OFFSET(0xC2FBA30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2TRANSFORMPROXY_OFFSET UNITYSDK_OFFSET(0xC2F6270)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2WEIGHT2_OFFSET UNITYSDK_OFFSET(0xC2F6B40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2WEIGHT3_OFFSET UNITYSDK_OFFSET(0xC2F6B90)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Distances_TypeDefinitionIndex = 35975;

	class B2Distances : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform b2GetSweepTransform(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sweep& a1, ::System::Single a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sweep&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2GETSWEEPTRANSFORM_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SegmentDistanceResult b2SegmentDistance(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SegmentDistanceResult(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2SEGMENTDISTANCE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy b2MakeProxy(::System::ReadOnlySpan_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2> a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy(*)(::System::ReadOnlySpan_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2>, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2MAKEPROXY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2TransformProxy(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform& a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2TRANSFORMPROXY_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy b2MakeOffsetProxy(::System::ReadOnlySpan_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2> a1, ::System::Int32 a2, ::System::Single a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a5)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy(*)(::System::ReadOnlySpan_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2>, ::System::Int32, ::System::Single, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2MAKEOFFSETPROXY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy b2MakeProxy_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2MAKEPROXY_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy b2MakeProxy_2(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2MAKEPROXY_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Weight2(::System::Single a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::System::Single a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::System::Single, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2WEIGHT2_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Weight3(::System::Single a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::System::Single a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a4, ::System::Single a5, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a6)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::System::Single, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2WEIGHT3_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 b2FindSupport(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2FINDSUPPORT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Simplex b2MakeSimplexFromCache(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy& a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy& a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Simplex(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2MAKESIMPLEXFROMCACHE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2MakeSimplexCache(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Simplex& a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Simplex&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2MAKESIMPLEXCACHE_OFFSET))(a1, a2);
		}

		static ::System::Void b2ComputeSimplexWitnessPoints(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2& a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Simplex& a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Simplex&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2COMPUTESIMPLEXWITNESSPOINTS_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2SolveSimplex2(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Simplex& a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Simplex&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2SOLVESIMPLEX2_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2SolveSimplex3(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Simplex& a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Simplex&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2SOLVESIMPLEX3_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DistanceOutput b2ShapeDistance(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DistanceInput& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a2, ::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Simplex>* a3, ::System::Int32 a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DistanceOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DistanceInput&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&, ::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Simplex>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2SHAPEDISTANCE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput b2ShapeCast(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastPairInput& a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeCastPairInput&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2SHAPECAST_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SeparationFunction b2MakeSeparationFunction(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy& a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sweep& a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy& a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sweep& a5, ::System::Single a6)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SeparationFunction(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sweep&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sweep&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2MAKESEPARATIONFUNCTION_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Single b2FindMinSeparation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SeparationFunction& a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SeparationFunction&, ::System::Int32&, ::System::Int32&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2FINDMINSEPARATION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single b2EvaluateSeparation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SeparationFunction a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SeparationFunction, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2EVALUATESEPARATION_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TOIOutput b2TimeOfImpact(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TOIInput& a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TOIOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TOIInput&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DISTANCES_B2TIMEOFIMPACT_OFFSET))(a1);
		}
	};
}
