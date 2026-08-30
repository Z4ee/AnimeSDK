#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Hull.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2HULLS_B2COMPUTEHULL_OFFSET UNITYSDK_OFFSET(0x1C2EA4A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2HULLS_B2RECURSEHULL_OFFSET UNITYSDK_OFFSET(0x1C2E9880)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2HULLS_B2VALIDATEHULL_OFFSET UNITYSDK_OFFSET(0x1C2EBFD0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Hulls_TypeDefinitionIndex = 35999;

	class B2Hulls : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Hull b2RecurseHull(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2> a3, ::System::Int32 a4)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Hull(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2HULLS_B2RECURSEHULL_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Hull b2ComputeHull(::System::ReadOnlySpan_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2> a1, ::System::Int32 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Hull(*)(::System::ReadOnlySpan_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2HULLS_B2COMPUTEHULL_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2ValidateHull(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Hull& a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Hull&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2HULLS_B2VALIDATEHULL_OFFSET))(a1);
		}
	};
}
