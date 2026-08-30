#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2QueryFilter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2RayResult.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2CastResultFcn; }
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDRAYCASTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x3B9C510)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2WorldRayCastContext_TypeDefinitionIndex = 36133;

	struct alignas(8) B2WorldRayCastContext
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* world; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2CastResultFcn* fcn; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter filter; // 0x20
		::System::Single fraction; // 0x30
		::System::Object* userContext; // 0x38
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RayResult closestResult; // 0x40
		::System::Boolean ignoreInitialOverlap; // 0x78

		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2CastResultFcn* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter a3, ::System::Single a4, ::System::Object* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2CastResultFcn*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter, ::System::Single, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDRAYCASTCONTEXT__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
