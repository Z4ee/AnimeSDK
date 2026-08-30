#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SimplexCache.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2COLLISIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0xC2D94F0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Collisions_TypeDefinitionIndex = 35926;

	class B2Collisions : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache* StaticGet_b2_emptySimplexCache()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache*)Il2CppClass::FromTypeDefinitionIndex(B2Collisions_TypeDefinitionIndex)->GetStaticField(0xBA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2COLLISIONS__CCTOR_OFFSET))();
		}
	};
}
