#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2QueryFilter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeProxy.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2OverlapResultFcn; }
namespace System { class Object; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDOVERLAPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x3A03070)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2WorldOverlapContext_TypeDefinitionIndex = 35270;

	struct alignas(8) B2WorldOverlapContext
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* world; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2OverlapResultFcn* fcn; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter filter; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy proxy; // 0x30
		::System::Object* userContext; // 0x78

		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2OverlapResultFcn* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2OverlapResultFcn*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLDOVERLAPCONTEXT__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
