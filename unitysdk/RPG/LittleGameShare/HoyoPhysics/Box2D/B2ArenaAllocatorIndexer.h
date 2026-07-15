#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AtomicInt.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATORINDEXER__CTOR_OFFSET UNITYSDK_OFFSET(0xB602ED0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ArenaAllocatorIndexer_TypeDefinitionIndex = 35025;

	class B2ArenaAllocatorIndexer : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt* StaticGet__indices()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt*)Il2CppClass::FromTypeDefinitionIndex(B2ArenaAllocatorIndexer_TypeDefinitionIndex)->GetStaticField(0x14AD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATORINDEXER__CTOR_OFFSET))(this);
		}
	};
}
