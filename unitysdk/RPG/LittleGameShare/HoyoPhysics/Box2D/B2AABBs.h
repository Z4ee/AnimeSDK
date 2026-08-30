#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2CastOutput.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2AABBS_B2AABB_RAYCAST_OFFSET UNITYSDK_OFFSET(0xC2C7D60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2AABBS_B2ENLARGEAABB_OFFSET UNITYSDK_OFFSET(0xC2C7CE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2AABBS_B2PERIMETER_OFFSET UNITYSDK_OFFSET(0xC2C7CC0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2AABBs_TypeDefinitionIndex = 35884;

	class B2AABBs : public ::System::Object
	{
	public:
		static ::System::Single b2Perimeter(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2AABBS_B2PERIMETER_OFFSET))(a1);
		}

		static ::System::Boolean b2EnlargeAABB(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2AABBS_B2ENLARGEAABB_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput b2AABB_RayCast(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CastOutput(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2AABBS_B2AABB_RAYCAST_OFFSET))(a1, a2, a3);
		}
	};
}
