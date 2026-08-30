#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Array_1.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C2EC760)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2EC770)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2IdPool_TypeDefinitionIndex = 36000;

	class B2IdPool : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::System::Int32> freeArray; // 0x10
		::System::Int32 nextIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOL__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDPOOL_CLEAR_OFFSET))(this);
		}
	};
}
