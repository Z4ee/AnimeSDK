#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SimplexVertex.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SIMPLEX_ASSPAN_OFFSET UNITYSDK_OFFSET(0x3B9BFE0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Simplex_TypeDefinitionIndex = 36085;

	struct alignas(4) B2Simplex
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexVertex v1; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexVertex v2; // 0x34
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexVertex v3; // 0x58
		::System::Int32 count; // 0x7C

		/*
		::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexVertex> AsSpan()
		{
			return ((::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexVertex>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SIMPLEX_ASSPAN_OFFSET))(this);
		}
		*/
	};
}
